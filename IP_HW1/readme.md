---
tags: Digital Image Process
---

# 影像處理 HW1 Report
> 陳孟楷
> N26101834


## 0. Introduction
### 0.1 Goal
希望透過實作 OpenCV 的函式庫，熟悉影像處理的操作，以便往後在直接呼叫函式時，能更加瞭解背後的原理和運算流程。

![介面圖](https://i.imgur.com/8ujWKQR.png)


### 0.2 System Flow
1. 首先點擊 **Load** 按鈕，讀取要處理的圖片
2. 再來點擊 **各個功能** 的按鈕，對圖片進行處理
3. 點擊 **Undo** 按鈕，即可回到上一步的圖片
4. 點擊 **Save** 按鈕，即可儲存目前的圖片


### 0.3 Discussion
1. **Image Stack** 
原先在實作 Undo 功能時，我的作法是建立一個 Temp 的暫存空間，等有新的 Filter 疊加時再將其置換，但這個做法只能回到上一步，所以後來改成使用 **Stack** 的做法。

- Load : 先將Stack中的圖片清空，再將讀進來的圖片 push into stack
- Undo : Stack pop
- Each function : After processing, push image into stack

``` cpp=

/* Stack Design */
cliext::stack <Bitmap^> imgStack;

/* Load */
private: System::Void loadButton_Click(...){
    // Load Image..
    while (!imgStack.empty()) { imgStack.pop(); }
    imgStack.push(origImage);
}


/* Undo */
private: System::Void undoButton_Click(...){
    // Check if the stack is empty or has only one image
    if (imgStack.empty() || imgStack.size()==1) return;
    else{
        // Initialize tmpImage
        Bitmap^ tmpImage = gcnew Bitmap(...);
        
        // Clone top image to tmpImage
		tmpImage = (Bitmap^)imgStack.top()->Clone();
        imgStack.pop();
    }	
}

```


## 1. RGB Extraction & Transformation
### 1.1 Introduction
對輸入的圖片分別提取 R, G, B 的顏色數值，Grayscale 的功能為將圖片轉為灰階圖片。

![Extract RGB](https://i.imgur.com/qMbGPNs.png)


### 1.2 Method

1.  RGB Extraction
- 將各自 Channel 的值提取出來，並將提取後的值 assign 回三個 channels。

``` cpp=
private: System::Void redButton_Click(...){
    for (i = 0:Width){ for (j = 0:Height){
        RGB = imgStack.top()->GetPixel(i, j);
        value = Convert::ToInt32(RGB.R);
        resultImage->SetPixel(j, i, Color::FromArgb(value, value, value));
    }
}}

private: System::Void greenButton_Click(...){}
private: System::Void blueButton_Click(...){}
}

```

2. Grayscale 
- 對 RGB 三個 channels 的值進行比重運算，並將處理後的值 assign 回三個 channels。
<!-- $$
Grayscale = R * 0.299 + G * 0.587 + B * 0.114
$$
-->
![](https://i.imgur.com/PYCoFGf.png)


```cpp=
private: System::Void grayButton_Click(...){
    //extract 3 channels
    gray = R * 0.299 + G * 0.587 + B * 0.114;
    // Assign gray value to 3 channels
}
```


## 2. Mean and Median Smooth filter
### 2.1 Introduction
透過 **Mean** 和 **Median** 的 filter 去除圖片的雜訊，使圖片更 Smmoth。

![mean median filter圖](https://i.imgur.com/u84ItM3.png)


### 2.2 Method
1. Padding : 對圖片四周先 padding 一個 pixel，而擴增的pixel值是取離圖片最靠近的那點的值。
2. Convolution : 透過 3x3 的 Mean/Median filter 對 padding 後的圖片做 Convolution。
3. Selection Sort : 由於 Median filter 需要找中位數，所以我使用 selection sort 去對數值排序，並且 Median() 回傳的是中位數。

```cpp=
private: System::Void meanButton_Click(...){
    Bitmap^ tempImage;
    
    for(Iterate each pixel in image){
        Mean(3x3 pixels);
        //Assign the mean value to image
    }
}


private: System::Void medianButton_Click(...){
    Bitmap^ tempImage;
    
    for(Iterate each pixel in image){
        median_value = Median(3x3 pixels);
        //Assign the median value to image
    }
}

```

## 3. Histogram Equalization
### 3.1 Introduction
透過 Histogram Equalization 去調整整張圖片 grayscale 的分布，使其分布較平均，示意結果如下圖。
### Ex 1
![Histogram Equalization 圖 - 1](https://i.imgur.com/t51yQYm.png)

### Ex 2
![Histogram Equalization 圖 - 2](https://i.imgur.com/JJ8kiy5.png)


### 3.2 Method
1. 計算各 grayscale 的 intensity
2. 計算各 grayscale 的 出現的機率 p~k~ 
3. 將 p~k~ * 255 做累加，再把CDF的值取round，再對應到p~k~
<!-- $$
G(z_q)_{8-bit} =round( (255 - 0) ⋅ CDF(z_q))
$$ -->
![](https://i.imgur.com/mb9SK25.png)


## 4. Thresholding

### 4.1 Introduction
透過使用者設定的 Threshold 值，對圖片做 Thresholding，若大於 Threshold 該值為 255，反之則為 0。

![](https://i.imgur.com/o8oTJaH.png)

### 4.2 Method
```cpp=

private: System::Void ThresholdEnterButton_Click(...) {
        Bitmap^ tmpImg;
        Int32 Threshhold = System::Convert::ToInt32(ThresholdText->Text);
        for(iterate through processImg){
            newColor = Color (origImg[i, j] > Threshold )? 255:0;
            tmpImg->SetPixel(i, j, newColor);
    }
}

```

## 5. Sobel edge detection
### 5.1 Introduction
透過 Sobel filter 對圖片做 Edge detection。
![Sobel edge detection 圖](https://i.imgur.com/9WnJdKa.png)



### 5.2 Method
1. Vertical / Horizontal
左邊和右邊的矩陣分別為偵測 Vertical 和 Horizontal 的 filter，計算圖片的梯度，並取絕對值，若值大於 255，則設為 255。
若值越大代表該區域的梯度越大，也就是 intensity 變化越大的地方。
<!-- $$
Vertical\ Sobel\ Filter = \left[\begin{array}{ccc}1&2&1\\0&0&0\\-1&-2&-1\\\end{array}\right]
$$
$$
Horizontal\ Sobel\ Filter = \left[\begin{array}{ccc}1&0&-1\\2&0&-2\\1&0&-1\\\end{array}\right]
$$ -->
![](https://i.imgur.com/ARxtEb4.png)


2. Combined
將 Vertical 和 Horizontal 的值相加，若超過 255 則設值為 255

```cpp=

private: System::Void verticalButton_Click(...){
    Bitmap^ tempImage;
    
    for(Iterate each pixel of image){
        tmpV = VerConv3x3(points);
        
        if (tmpV > 255) tmpV=255;
        tmpImage->setPixel(tmpV);
    }
}

private: System::Void horizontalButton_Click(...){
    Bitmap^ tempImage;
    
    for(Iterate each pixel of image){
        tmpH = HorConv3x3(points);
        
        if (tmpH > 255) tmpH=255;
        tmpImage->setPixel(tmpH);
    }
}

private: System::Void verticalButton_Click(...){
    Bitmap^ tempImage;
    
    for(Iterate each pixel of image){
        tmpV = VerConv3x3(points);
        tmpH = HorConv3x3(points);
        newValue = abs(tmpV)+abs(tmpH);
        
        if (newValue > 255) newValue=255;
        tmpImage->setPixel(newValue);
    }
}

```


## 6. Edge overlapping
### 6.1 Introduction
利用 Sobel filter 得到的 detection，呈現在原圖上進行比對。
![Edge overlapping 圖](https://i.imgur.com/Dys2f7t.png)


### 6.2 Method
透過第5題 Combined 得到的結果，以使用者輸入的值當作Threshold，若newValue 大於 Threshold 或是 255，皆將 newValue 設為 255。
若該pixel值為 0，則從原圖找pixel值，反之則將該點設為綠色。

```cpp=
private: System::Void overlapButton_Click(...){
    
    Bitmap^ combinedImage;
    Bitmap^ resultImage;
    
    combinedImage = returnCombined(origImage)
    
    for(Iterate each pixel in combinedImage){
        if (pixel value >= threshold || pixel > 255) pixel=255;
        else pixel = origImage->GetPixel(i, j);
        
        resultImage->SetPixel(i, j, pixel);
    }
} 

```


## 7. Connected Component
### 7.1 Introduction
透過Connected Component 的實作，找圖片的所有區域，且彼此區域各自獨立。
![Connected Component 圖片](https://i.imgur.com/3P5owIZ.png)


### 7.2 Method
1. 先對圖片做Padding，以便Convolution不會超出邊界，且邊緣的地方也可以處理到。
2. 由於本題是用8-adjacency，所以對座標(x,y)處的像素 P，找鄰近點，其座標分別為：(x-1, y)､(x-1,y-1)､(x, y-1)､(x+1, y-1) => q,r,s,t
3. 掃描 :
    - 若 P = 0 (黑色)，則 scan 下一點
    - 反之則看鄰近四點
        - 若 q=r=s=t=0，給 p 一個 new label
        - 若 (q, r, s, t)中只有一個為 1，把 p 點的 label 設得跟值為 1 那點的標籤相同
        - 若 (q, r, s, t)中不只一個為 1，則把 p 點的 label 設得跟值為 1 的其中一點之標籤相同，而其他值為 1 的點，亦設為跟此點同樣的標籤。
4. 合併相同類別 (Merging same classes)

```cpp=

private: System::Void connectedcompButton_Click(...){
    Padding(origImage);
    
    for(Iterate each pixel in origImage){
        if (q=r=s=t=0) continue;
        else if (q,r,s,t has only one pixel = 1){
            set p label to the pixel;
        }
        else if (q,r,s,t not only one pixel = 1){
            set p label to the minimum value;
        }
    }
    
    MergeClass(origImage);
}
```


## 8. Image Registration
### 8.1 Introduction
本題希望藉由 Image Registration 使原始影像可以進行 **縮放**、**旋轉**，讓原圖可以跟目標圖片一樣。
![Image Registration](https://i.imgur.com/gk5RNNn.png)


### 8.2 System Flow
1. 點擊 Load 按鈕: 讀取欲校正的圖片
2. 點擊 LoadGoalImage 按鈕 : 讀取校正後的圖片
3. 在原圖和目標圖上依序點擊4點
4. 點擊 Image Registration 按鈕進行校正。

### 8.3 Method
1. Scale
    - 透過原圖的目標圖邊長的比例，即可得到 Scale
3. Rotation
    - 透過原圖(OrigPoint 1, OrigPoint 2)和目標圖(GoalPoint 1, GoalPoint 2)可以得到兩組向量 $\vec{a}$ $\vec{b}$，而藉此可以算出 $cos(\theta)$ 和 $sin(\theta)$ 和 旋轉的角度。
<!-- $$
InnerProduct = x_1\cdot x_2 + y_1\cdot y_2= \Vert a\Vert\Vert b\Vert\cdot cos(\theta)\\CrossProduct = x_1\cdot y_2 - y_1\cdot x_2 = \Vert a\Vert\Vert b\Vert\cdot sin(\theta)\\Angle = \arctan(\frac{CrossProduct}{InnerProduct})
$$ -->
![](https://i.imgur.com/3NpxBbH.png)




3. Registration
    - 透過旋轉矩陣和縮放矩陣的公式可得到 Registration 後的座標
<!-- $$
  \begin{bmatrix}
   i' \\
   j' \\
  \end{bmatrix} 
  =
  \begin{bmatrix}
   Scale & 0 \\
   0 & Scale \\
  \end{bmatrix} 
  \begin{bmatrix}
   cos(\theta) & -sin(\theta) \\
   sin(\theta) & cos(\theta)  \\
  \end{bmatrix} 
  \begin{bmatrix}
   i \\
   j \\
  \end{bmatrix} 
$$ -->
![](https://i.imgur.com/EPUG6Fg.png)


### 8.4 Discussion
- Registration
    - 一開始我是使用上述的公式去實作，會發現有許多雜點，後來發現到是因為有些點算出來會超過原圖的邊界，導致結果圖看起來像是有雜訊。
    原本是想使用Bilinear interpolation 去解決雜訊問題，後來決定透過反校正的方式得到座標，公式如下:
<!-- $$
  \begin{bmatrix}
   1/Scale & 0 \\
   0 & 1/Scale \\
  \end{bmatrix}
  \begin{bmatrix}
   cos(-\theta) & -sin(-\theta) \\
   sin(-\theta) & cos(-\theta)  \\
  \end{bmatrix}
  \begin{bmatrix}
   i \\
   j \\
  \end{bmatrix} 
  =
  \begin{bmatrix}
   i' \\
   j' \\
  \end{bmatrix} 
$$ -->
![](https://i.imgur.com/NLzIyhB.png)
