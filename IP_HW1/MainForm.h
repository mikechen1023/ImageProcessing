#pragma once
#include <cmath>
#include <iostream>
#using <mscorlib.dll> // C++/CLIs
#include <cliext/stack>
#include <cliext/vector>
#include <ctime>
#include <cstdlib> 

#define PI 3.1415926


namespace IPHW1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// MainForm 的摘要
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ redButton;
	private: System::Windows::Forms::Button^ greenButton;
	private: System::Windows::Forms::Button^ blueButton;
	private: System::Windows::Forms::Button^ grayButton;
	private: System::Windows::Forms::Button^ meanButton;
	private: System::Windows::Forms::Button^ medianButton;
	protected:

	protected:





	private: System::Windows::Forms::Button^ equalizeButton;
	private: System::Windows::Forms::Button^ thresholdButton;


	private: System::Windows::Forms::TextBox^ thresholdTextBox;
	private: System::Windows::Forms::Button^ verticalButton;
	private: System::Windows::Forms::Button^ horizontalButton;
	private: System::Windows::Forms::Button^ combinedButton;
	private: System::Windows::Forms::TextBox^ overlapThresholdTextBox;






	private: System::Windows::Forms::Button^ overlapButton;
	private: System::Windows::Forms::Button^ imageRegButton;


	private: System::Windows::Forms::Button^ undoButton;


	private: System::Windows::Forms::Button^ loadButton;
	private: System::Windows::Forms::PictureBox^ origPictureBox;
	private: System::Windows::Forms::PictureBox^ resultPictureBox;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ origChart;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ resultChart;





	private: System::Windows::Forms::Button^ saveButton;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ connectedcompButton;
	private: System::Windows::Forms::Button^ LoadGoalImageButton;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::GroupBox^ groupBox9;

	private: System::Windows::Forms::Label^ regisInfoLabel;















	protected:




	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->redButton = (gcnew System::Windows::Forms::Button());
			this->greenButton = (gcnew System::Windows::Forms::Button());
			this->blueButton = (gcnew System::Windows::Forms::Button());
			this->grayButton = (gcnew System::Windows::Forms::Button());
			this->meanButton = (gcnew System::Windows::Forms::Button());
			this->medianButton = (gcnew System::Windows::Forms::Button());
			this->equalizeButton = (gcnew System::Windows::Forms::Button());
			this->thresholdButton = (gcnew System::Windows::Forms::Button());
			this->thresholdTextBox = (gcnew System::Windows::Forms::TextBox());
			this->verticalButton = (gcnew System::Windows::Forms::Button());
			this->horizontalButton = (gcnew System::Windows::Forms::Button());
			this->combinedButton = (gcnew System::Windows::Forms::Button());
			this->overlapThresholdTextBox = (gcnew System::Windows::Forms::TextBox());
			this->overlapButton = (gcnew System::Windows::Forms::Button());
			this->imageRegButton = (gcnew System::Windows::Forms::Button());
			this->undoButton = (gcnew System::Windows::Forms::Button());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->loadButton = (gcnew System::Windows::Forms::Button());
			this->origPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->resultPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->origChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->resultChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->connectedcompButton = (gcnew System::Windows::Forms::Button());
			this->LoadGoalImageButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->regisInfoLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->origPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resultPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->origChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resultChart))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->SuspendLayout();
			// 
			// redButton
			// 
			this->redButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->redButton->Location = System::Drawing::Point(18, 20);
			this->redButton->Name = L"redButton";
			this->redButton->Size = System::Drawing::Size(141, 45);
			this->redButton->TabIndex = 0;
			this->redButton->Text = L"R";
			this->redButton->UseVisualStyleBackColor = true;
			this->redButton->Click += gcnew System::EventHandler(this, &MainForm::redButton_Click);
			// 
			// greenButton
			// 
			this->greenButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->greenButton->Location = System::Drawing::Point(174, 20);
			this->greenButton->Name = L"greenButton";
			this->greenButton->Size = System::Drawing::Size(148, 45);
			this->greenButton->TabIndex = 1;
			this->greenButton->Text = L"G";
			this->greenButton->UseVisualStyleBackColor = true;
			this->greenButton->Click += gcnew System::EventHandler(this, &MainForm::greenButton_Click);
			// 
			// blueButton
			// 
			this->blueButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->blueButton->Location = System::Drawing::Point(18, 82);
			this->blueButton->Name = L"blueButton";
			this->blueButton->Size = System::Drawing::Size(142, 45);
			this->blueButton->TabIndex = 2;
			this->blueButton->Text = L"B";
			this->blueButton->UseVisualStyleBackColor = true;
			this->blueButton->Click += gcnew System::EventHandler(this, &MainForm::blueButton_Click);
			// 
			// grayButton
			// 
			this->grayButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->grayButton->Location = System::Drawing::Point(174, 82);
			this->grayButton->Name = L"grayButton";
			this->grayButton->Size = System::Drawing::Size(148, 45);
			this->grayButton->TabIndex = 3;
			this->grayButton->Text = L"Grayscale";
			this->grayButton->UseVisualStyleBackColor = true;
			this->grayButton->Click += gcnew System::EventHandler(this, &MainForm::grayButton_Click);
			// 
			// meanButton
			// 
			this->meanButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->meanButton->Location = System::Drawing::Point(18, 20);
			this->meanButton->Name = L"meanButton";
			this->meanButton->Size = System::Drawing::Size(142, 45);
			this->meanButton->TabIndex = 4;
			this->meanButton->Text = L"Mean Filter";
			this->meanButton->UseVisualStyleBackColor = true;
			this->meanButton->Click += gcnew System::EventHandler(this, &MainForm::meanButton_Click);
			// 
			// medianButton
			// 
			this->medianButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->medianButton->Location = System::Drawing::Point(174, 20);
			this->medianButton->Name = L"medianButton";
			this->medianButton->Size = System::Drawing::Size(148, 45);
			this->medianButton->TabIndex = 5;
			this->medianButton->Text = L"Median Filter";
			this->medianButton->UseVisualStyleBackColor = true;
			this->medianButton->Click += gcnew System::EventHandler(this, &MainForm::medianButton_Click);
			// 
			// equalizeButton
			// 
			this->equalizeButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equalizeButton->Location = System::Drawing::Point(16, 17);
			this->equalizeButton->Name = L"equalizeButton";
			this->equalizeButton->Size = System::Drawing::Size(306, 45);
			this->equalizeButton->TabIndex = 6;
			this->equalizeButton->Text = L"Histogram Equalization";
			this->equalizeButton->UseVisualStyleBackColor = true;
			this->equalizeButton->Click += gcnew System::EventHandler(this, &MainForm::equalizeButton_Click);
			// 
			// thresholdButton
			// 
			this->thresholdButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->thresholdButton->Location = System::Drawing::Point(174, 20);
			this->thresholdButton->Name = L"thresholdButton";
			this->thresholdButton->Size = System::Drawing::Size(148, 45);
			this->thresholdButton->TabIndex = 7;
			this->thresholdButton->Text = L"Start";
			this->thresholdButton->UseVisualStyleBackColor = true;
			this->thresholdButton->Click += gcnew System::EventHandler(this, &MainForm::thresholdButton_Click);
			// 
			// thresholdTextBox
			// 
			this->thresholdTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->thresholdTextBox->Location = System::Drawing::Point(16, 24);
			this->thresholdTextBox->Name = L"thresholdTextBox";
			this->thresholdTextBox->Size = System::Drawing::Size(144, 34);
			this->thresholdTextBox->TabIndex = 8;
			// 
			// verticalButton
			// 
			this->verticalButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->verticalButton->Location = System::Drawing::Point(10, 21);
			this->verticalButton->Name = L"verticalButton";
			this->verticalButton->Size = System::Drawing::Size(84, 45);
			this->verticalButton->TabIndex = 9;
			this->verticalButton->Text = L"Vertical";
			this->verticalButton->UseVisualStyleBackColor = true;
			this->verticalButton->Click += gcnew System::EventHandler(this, &MainForm::verticalButton_Click);
			// 
			// horizontalButton
			// 
			this->horizontalButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->horizontalButton->Location = System::Drawing::Point(102, 21);
			this->horizontalButton->Name = L"horizontalButton";
			this->horizontalButton->Size = System::Drawing::Size(102, 45);
			this->horizontalButton->TabIndex = 10;
			this->horizontalButton->Text = L"Horizontal";
			this->horizontalButton->UseVisualStyleBackColor = true;
			this->horizontalButton->Click += gcnew System::EventHandler(this, &MainForm::horizontalButton_Click);
			// 
			// combinedButton
			// 
			this->combinedButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->combinedButton->Location = System::Drawing::Point(210, 21);
			this->combinedButton->Name = L"combinedButton";
			this->combinedButton->Size = System::Drawing::Size(112, 45);
			this->combinedButton->TabIndex = 11;
			this->combinedButton->Text = L"Combined";
			this->combinedButton->UseVisualStyleBackColor = true;
			this->combinedButton->Click += gcnew System::EventHandler(this, &MainForm::combinedButton_Click);
			// 
			// overlapThresholdTextBox
			// 
			this->overlapThresholdTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->overlapThresholdTextBox->Location = System::Drawing::Point(14, 24);
			this->overlapThresholdTextBox->Name = L"overlapThresholdTextBox";
			this->overlapThresholdTextBox->Size = System::Drawing::Size(144, 34);
			this->overlapThresholdTextBox->TabIndex = 13;
			this->overlapThresholdTextBox->TabStop = false;
			// 
			// overlapButton
			// 
			this->overlapButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->overlapButton->Location = System::Drawing::Point(189, 16);
			this->overlapButton->Name = L"overlapButton";
			this->overlapButton->Size = System::Drawing::Size(131, 45);
			this->overlapButton->TabIndex = 12;
			this->overlapButton->Text = L"Edge Overlap";
			this->overlapButton->UseVisualStyleBackColor = true;
			this->overlapButton->Click += gcnew System::EventHandler(this, &MainForm::overlapButton_Click);
			// 
			// imageRegButton
			// 
			this->imageRegButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->imageRegButton->Location = System::Drawing::Point(21, 70);
			this->imageRegButton->Name = L"imageRegButton";
			this->imageRegButton->Size = System::Drawing::Size(279, 45);
			this->imageRegButton->TabIndex = 14;
			this->imageRegButton->Text = L"Image Registration";
			this->imageRegButton->UseVisualStyleBackColor = true;
			this->imageRegButton->Click += gcnew System::EventHandler(this, &MainForm::imageRegButton_Click);
			// 
			// undoButton
			// 
			this->undoButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->undoButton->Location = System::Drawing::Point(208, 17);
			this->undoButton->Name = L"undoButton";
			this->undoButton->Size = System::Drawing::Size(111, 45);
			this->undoButton->TabIndex = 17;
			this->undoButton->Text = L"Undo";
			this->undoButton->UseVisualStyleBackColor = true;
			this->undoButton->Click += gcnew System::EventHandler(this, &MainForm::undoButton_Click);
			// 
			// saveButton
			// 
			this->saveButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveButton->Location = System::Drawing::Point(100, 17);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(102, 45);
			this->saveButton->TabIndex = 16;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &MainForm::saveButton_Click);
			// 
			// loadButton
			// 
			this->loadButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loadButton->Location = System::Drawing::Point(8, 17);
			this->loadButton->Name = L"loadButton";
			this->loadButton->Size = System::Drawing::Size(84, 45);
			this->loadButton->TabIndex = 15;
			this->loadButton->Text = L"Load";
			this->loadButton->UseVisualStyleBackColor = true;
			this->loadButton->Click += gcnew System::EventHandler(this, &MainForm::loadButton_Click);
			// 
			// origPictureBox
			// 
			this->origPictureBox->Location = System::Drawing::Point(428, 14);
			this->origPictureBox->Name = L"origPictureBox";
			this->origPictureBox->Size = System::Drawing::Size(507, 362);
			this->origPictureBox->TabIndex = 18;
			this->origPictureBox->TabStop = false;
			this->origPictureBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::origPictureBox_Paint);
			this->origPictureBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::origPictureBox_mouseClick);
			// 
			// resultPictureBox
			// 
			this->resultPictureBox->Location = System::Drawing::Point(428, 408);
			this->resultPictureBox->Name = L"resultPictureBox";
			this->resultPictureBox->Size = System::Drawing::Size(507, 358);
			this->resultPictureBox->TabIndex = 19;
			this->resultPictureBox->TabStop = false;
			this->resultPictureBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::resultPictureBox_Paint);
			this->resultPictureBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::resultPictureBox_mouseClick);
			// 
			// origChart
			// 
			this->origChart->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Top;
			chartArea1->Name = L"ChartArea1";
			this->origChart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->origChart->Legends->Add(legend1);
			this->origChart->Location = System::Drawing::Point(998, 10);
			this->origChart->Name = L"origChart";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"grayValue";
			this->origChart->Series->Add(series1);
			this->origChart->Size = System::Drawing::Size(353, 344);
			this->origChart->TabIndex = 20;
			this->origChart->Text = L"chart1";
			// 
			// resultChart
			// 
			chartArea2->Name = L"ChartArea1";
			this->resultChart->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->resultChart->Legends->Add(legend2);
			this->resultChart->Location = System::Drawing::Point(998, 408);
			this->resultChart->Name = L"resultChart";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"grayValue";
			this->resultChart->Series->Add(series2);
			this->resultChart->Size = System::Drawing::Size(353, 330);
			this->resultChart->TabIndex = 21;
			this->resultChart->Text = L"chart2";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 0;
			// 
			// connectedcompButton
			// 
			this->connectedcompButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->connectedcompButton->Location = System::Drawing::Point(20, 18);
			this->connectedcompButton->Name = L"connectedcompButton";
			this->connectedcompButton->Size = System::Drawing::Size(279, 45);
			this->connectedcompButton->TabIndex = 23;
			this->connectedcompButton->Text = L"Connected Component";
			this->connectedcompButton->UseVisualStyleBackColor = true;
			this->connectedcompButton->Click += gcnew System::EventHandler(this, &MainForm::connectedcompButton_Click);
			// 
			// LoadGoalImageButton
			// 
			this->LoadGoalImageButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoadGoalImageButton->Location = System::Drawing::Point(21, 21);
			this->LoadGoalImageButton->Name = L"LoadGoalImageButton";
			this->LoadGoalImageButton->Size = System::Drawing::Size(279, 45);
			this->LoadGoalImageButton->TabIndex = 24;
			this->LoadGoalImageButton->Text = L"LoadGoalImage";
			this->LoadGoalImageButton->UseVisualStyleBackColor = true;
			this->LoadGoalImageButton->Click += gcnew System::EventHandler(this, &MainForm::LoadGoalImageButton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->grayButton);
			this->groupBox1->Controls->Add(this->blueButton);
			this->groupBox1->Controls->Add(this->greenButton);
			this->groupBox1->Controls->Add(this->redButton);
			this->groupBox1->Location = System::Drawing::Point(20, 10);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(335, 140);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Extraction";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->medianButton);
			this->groupBox2->Controls->Add(this->meanButton);
			this->groupBox2->Location = System::Drawing::Point(20, 154);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(335, 81);
			this->groupBox2->TabIndex = 26;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Smooth Filter";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->equalizeButton);
			this->groupBox3->Location = System::Drawing::Point(20, 239);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(335, 69);
			this->groupBox3->TabIndex = 27;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Equalization";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->thresholdTextBox);
			this->groupBox4->Controls->Add(this->thresholdButton);
			this->groupBox4->Location = System::Drawing::Point(19, 312);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(335, 74);
			this->groupBox4->TabIndex = 28;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Thresholding";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->combinedButton);
			this->groupBox5->Controls->Add(this->horizontalButton);
			this->groupBox5->Controls->Add(this->verticalButton);
			this->groupBox5->Location = System::Drawing::Point(20, 391);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(335, 74);
			this->groupBox5->TabIndex = 29;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Sobel Edge Detection";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->overlapThresholdTextBox);
			this->groupBox6->Controls->Add(this->overlapButton);
			this->groupBox6->Location = System::Drawing::Point(22, 471);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(335, 74);
			this->groupBox6->TabIndex = 30;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Edge Overlapping";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->undoButton);
			this->groupBox7->Controls->Add(this->saveButton);
			this->groupBox7->Controls->Add(this->loadButton);
			this->groupBox7->Location = System::Drawing::Point(22, 753);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(335, 74);
			this->groupBox7->TabIndex = 31;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Operations";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->connectedcompButton);
			this->groupBox8->Location = System::Drawing::Point(20, 545);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(335, 74);
			this->groupBox8->TabIndex = 32;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Connected Component";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->LoadGoalImageButton);
			this->groupBox9->Controls->Add(this->imageRegButton);
			this->groupBox9->Location = System::Drawing::Point(19, 620);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(335, 127);
			this->groupBox9->TabIndex = 33;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Image Regstraction";
			// 
			// regisInfoLabel
			// 
			this->regisInfoLabel->AutoSize = true;
			this->regisInfoLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->regisInfoLabel->Location = System::Drawing::Point(424, 794);
			this->regisInfoLabel->Name = L"regisInfoLabel";
			this->regisInfoLabel->Size = System::Drawing::Size(0, 21);
			this->regisInfoLabel->TabIndex = 35;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1410, 836);
			this->Controls->Add(this->regisInfoLabel);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->resultChart);
			this->Controls->Add(this->origChart);
			this->Controls->Add(this->resultPictureBox);
			this->Controls->Add(this->origPictureBox);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->origPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resultPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->origChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resultChart))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox9->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Bitmap^ origImage;
		
		Rectangle origRect;
		Rectangle tmpRect;

		
		/* Stack Design */
	    cliext::stack <Bitmap^> imgStack;

		bool isLoadGoal = false;


	/// 
	/// Load Image
	/// 
	private: System::Void loadButton_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();

		openFileDialog->Filter = "點陣圖 (.bmp)| *.bmp| All files (*.*)| *.*";
		openFileDialog->FileName = "";
		openFileDialog->Title = "載入影像";
		openFileDialog->FilterIndex = 1;

		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK &&
			openFileDialog->FileName->Length > 0)
		{
			origImage = safe_cast<Bitmap^>(Image::FromFile(openFileDialog->FileName));

			origRect = Rectangle(0, 0, origImage->Width, origImage->Height);


			origPictureBox->Size = Drawing::Size(origImage->Width, origImage->Height);
			origPictureBox->Image = origImage;
		}

		

		while (!imgStack.empty())
		{
			imgStack.pop();
		}

		imgStack.push(origImage);
		
		origPictureBox->Image = origImage;
		//resultPictureBox->Image = imgStack.top();

	}


	/// 
	/// Save Button Click
	/// 
	private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (imgStack.size() == 0)
		{
			return;
		}
		

		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();

		saveFileDialog->Filter = "JPeg Image|*.jpg|Bitmap Image|*.bmp|Gif Image|*.gif|Png Image|*.png";
		saveFileDialog->Title = "Save a text file";
		saveFileDialog->FilterIndex = 2;
		saveFileDialog->RestoreDirectory = true;

		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			Bitmap^ tmpImage = gcnew Bitmap(imgStack.top());
			tmpImage->Save(saveFileDialog->FileName);
		}
		
	}

	/// 
	/// Undo Button Click
	/// 
	private: System::Void undoButton_Click(System::Object^ sender, System::EventArgs^ e) {


		if (imgStack.empty() || imgStack.size()==1)
		{
			return;
		}
		else
		{
			// Initialize tmpImage
			Bitmap^ tmpImage = gcnew Bitmap(imgStack.top()->Width, imgStack.top()->Height);

			// Clone top image to tmpImage
			tmpImage = (Bitmap^)imgStack.top()->Clone();

			imgStack.pop();

			resultPictureBox->Image = imgStack.top();
		}
	}
		   

	/// 
	/// Red Button Click
	/// 
	private: System::Void redButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (imgStack.size() == 0)
		{
			return;
		}
		
		Color RGB;
		int value;

		Bitmap^ tmpImage = gcnew Bitmap(imgStack.top()->Width, imgStack.top()->Height);


		for (int i = 0; i < imgStack.top()->Height; i++)
		{
			for (int j = 0; j < imgStack.top()->Width; j++)
			{
				RGB = imgStack.top()->GetPixel(j, i);

				value = Convert::ToInt32(RGB.R);

				tmpImage->SetPixel(j, i, Color::FromArgb(value, value, value));

			}
		}


		imgStack.push(tmpImage);

		resultPictureBox->Size = Drawing::Size(tmpImage->Width, tmpImage->Height);
		resultPictureBox->Image = tmpImage;
		
	}

	/// 
	/// Green Button Click
	/// 
	private: System::Void greenButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (imgStack.size() == 0)
		{
			return;
		}
		
		Color RGB;
		int value;

		Bitmap^ tmpImage = gcnew Bitmap(imgStack.top()->Width, imgStack.top()->Height);

		for (int i = 0; i < imgStack.top()->Height; i++)
		{
			for (int j = 0; j < imgStack.top()->Width; j++)
			{
				RGB = imgStack.top()->GetPixel(j, i);

				value = Convert::ToInt32(RGB.G);

				tmpImage->SetPixel(j, i, Color::FromArgb(value, value, value));

			}
		}

		imgStack.push(tmpImage);

		resultPictureBox->Size = Drawing::Size(tmpImage->Width, tmpImage->Height);
		resultPictureBox->Image = imgStack.top();
		
	}


	/// 
	/// Blue Button Click
	/// 
	private: System::Void blueButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (imgStack.size() == 0)
		{
			return;
		}
		
		Color RGB;
		int value;

		Bitmap^ tmpImage = gcnew Bitmap(imgStack.top()->Width, imgStack.top()->Height);

		for (int i = 0; i < imgStack.top()->Height; i++)
		{
			for (int j = 0; j < imgStack.top()->Width; j++)
			{
				RGB = imgStack.top()->GetPixel(j, i);

				value = Convert::ToInt32(RGB.B);

				tmpImage->SetPixel(j, i, Color::FromArgb(value, value, value));

			}
		}

		imgStack.push(tmpImage);

		resultPictureBox->Size = Drawing::Size(tmpImage->Width, tmpImage->Height);
		resultPictureBox->Image = imgStack.top();
		
	}

	/// 
	/// Gray Button Click
	/// 
	private: System::Void grayButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (imgStack.size() == 0)
		{
			return;
		}
		
		Color RGB;
		int valueR, valueG, valueB, gray;

		Bitmap^ tmpImage = gcnew Bitmap(imgStack.top()->Width, imgStack.top()->Height);

		for (int i = 0; i < imgStack.top()->Height; i++)
		{
			for (int j = 0; j < imgStack.top()->Width; j++)
			{
				RGB = imgStack.top()->GetPixel(j, i);

				valueR = Convert::ToInt32(RGB.R);
				valueG = Convert::ToInt32(RGB.G);
				valueB = Convert::ToInt32(RGB.B);

				gray = valueB * 0.114 + valueG * 0.587 + valueR * 0.299;

				tmpImage->SetPixel(j, i, Color::FromArgb(gray, gray, gray));

			}
		}

		imgStack.push(tmpImage);

		resultPictureBox->Size = Drawing::Size(tmpImage->Width, tmpImage->Height);
		resultPictureBox->Image = tmpImage;
		
	}

	/// 
	/// Mean Button Click
	/// 
	
	private: void paddingImage()
	{

		Bitmap^ cloneImage = gcnew Bitmap(imgStack.top()->Width, imgStack.top()->Height);
		cloneImage = (Bitmap^)imgStack.top()->Clone();
		imgStack.push(cloneImage);

		Color RGB;
		int i, j, value;

		int newWidth = imgStack.top()->Width + 2;
		int newHeight = imgStack.top()->Height + 2;

		Bitmap^ tmpImage = gcnew Bitmap(newWidth, newHeight);


		for (i = 0; i < imgStack.top()->Height; i++)
		{
			for (j = 0; j < imgStack.top()->Width; j++)
			{
				RGB = imgStack.top()->GetPixel(j, i);

				value = Convert::ToInt32(RGB.R);

				tmpImage->SetPixel(j+1, i+1, Color::FromArgb(value, value, value));

				if (i == 0)
				{
					if (j == 0)
					{
						tmpImage->SetPixel(j, i, Color::FromArgb(value, value, value));
					}
					tmpImage->SetPixel(j + 1, i, Color::FromArgb(value, value, value));
				}

				if (i == imgStack.top()->Height)
				{
					if (j == 0)
					{
						tmpImage->SetPixel(j + 1, i, Color::FromArgb(value, value, value));
					}
					tmpImage->SetPixel(j, i + 1, Color::FromArgb(value, value, value));
				}

				if (j == 0)
				{
					if (i == imgStack.top()->Height)
					{
						tmpImage->SetPixel(j, i + 1, Color::FromArgb(value, value, value));
					}
					tmpImage->SetPixel(j, i + 1, Color::FromArgb(value, value, value));
				}

				if (j == imgStack.top()->Width - 1)
				{
					if (i == imgStack.top()->Height)
					{
						tmpImage->SetPixel(j, i + 1, Color::FromArgb(value, value, value));
					}
					tmpImage->SetPixel(j + 1, i, Color::FromArgb(value, value, value));
				}
			}
		}


		imgStack.pop();

		imgStack.push(tmpImage);
		
	}
	 
	
	private: System::Void meanButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (imgStack.size() == 0)
		{
			return;
		}
		
		paddingImage();

		
		Color RGB;
		int i, j, tmpi, tmpj;
		int gray;
		
		Bitmap^ tmpImage = gcnew Bitmap(imgStack.top()->Width, imgStack.top()->Height);
		tmpImage = (Bitmap^)imgStack.top()->Clone();
		imgStack.pop();



		for (i = 1; i < imgStack.top()->Height - 1; i++)
		{
			for (j = 1; j < imgStack.top()->Width - 1; j++)
			{
				gray = 0;

				for (tmpi = i - 1; tmpi <= i + 1; tmpi++)
				{
					for (tmpj = j - 1; tmpj <= j + 1; tmpj++)
					{
						RGB = imgStack.top()->GetPixel(tmpj, tmpi);
						// 讀取影像平面上 (j, i) 的 RGB 資訊
						// 這邊要注意因為縱軸座標是 i 橫軸座標是 j 所以要寫成 (j, i)

						gray += RGB.R;
						// RGB 是 VS 內建的 class, 可以直接讀取影像的色彩資訊

					}
				}

				tmpImage->SetPixel(j, i, Color::FromArgb(gray / 9, gray / 9, gray / 9));
			}
		}

		imgStack.push(tmpImage);
		resultPictureBox->Size = Drawing::Size(tmpImage->Width, tmpImage->Height);
		resultPictureBox->Image = imgStack.top();
		
	}

	/// 
	/// Median Button Click
	/// 
	private: int find_median(int* rgb_array)
	{
		int round;
		int i, tmp;

		for (round = 1; round <= 5; round++)
		{
			for (i = 0; i < 9 - round - 1; i++)
			{
				if (rgb_array[i] > rgb_array[i + 1])
				{
					tmp = rgb_array[i + 1];
					rgb_array[i + 1] = rgb_array[i];
					rgb_array[i] = tmp;
				}
			}
		}

		return rgb_array[4];

	}

	private: System::Void medianButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (imgStack.size() == 0)
		{
			return;
		}
		
		paddingImage();

		Color RGB;
		int i, j;
		int invR, invG, invB;

		Bitmap^ tmpImage = gcnew Bitmap(imgStack.top()->Width, imgStack.top()->Height);
		tmpImage = (Bitmap^)imgStack.top()->Clone();
		imgStack.pop();

		int tmpi, tmpj;
		int rgbArray[9];
		int cnt, tmpRGB;

		for (i = 1; i < imgStack.top()->Height - 1; i++)
		{
			for (j = 1; j < imgStack.top()->Width - 1;j++)
			{

				cnt = 0;
				for (tmpi = i - 1; tmpi <= i + 1; tmpi++)
				{
					for (tmpj = j - 1; tmpj <= j + 1; tmpj++)
					{

						RGB = imgStack.top()->GetPixel(tmpj, tmpi);

						rgbArray[cnt] = Convert::ToInt32(RGB.R);
						cnt += 1;
					}
				}

				tmpRGB = find_median(rgbArray);
				tmpImage->SetPixel(j, i, Color::FromArgb(tmpRGB, tmpRGB, tmpRGB));

			}
		}

		imgStack.push(tmpImage);
		resultPictureBox->Size = Drawing::Size(tmpImage->Width, tmpImage->Height);
		resultPictureBox->Image = imgStack.top();

	}

	/// 
	/// Histogram Equalization Button Click
	/// 
	private: System::Void equalizeButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (imgStack.size() == 0)
		{
			return;
		}
		
		Bitmap^ tmpImage = gcnew Bitmap(imgStack.top()->Width, imgStack.top()->Height);
		tmpImage = (Bitmap^)imgStack.top()->Clone();

		Color RGB;
		int i, j, tmp;
		int grayValue;
		int n_k[256] = { 0 };
		int s_k[256] = { 0 };
		int result[256] = { 0 };


		// each grayscale intensity
		for (i = 0;i < imgStack.top()->Height; i++)
		{
			for (j = 0; j < imgStack.top()->Width; j++)
			{
				RGB = imgStack.top()->GetPixel(j, i);

				//grayValue = (int)((invR + invG + invB) / 3);
				grayValue = Convert::ToInt32(RGB.R);

				// calculate n_k
				n_k[grayValue] += 1;
			}
		}

		// Draw Orig Image Chart
		this->origChart->Series["grayValue"]->Points->Clear();
		for (i = 0; i <= 255; i++)
		{
			this->origChart->Series["grayValue"]->Points->AddY(n_k[i]);
		}

		int M = imgStack.top()->Height;
		int N = imgStack.top()->Width;

		tmp = 0;
		for (i = 0; i <=255; i++)
		{
			tmp += n_k[i];

			s_k[i] = round((255 * tmp / (M * N)));

		}

		for (i = 0; i <= 255; i++)
		{
			result[s_k[i]] += n_k[i];
		}

		// Draw picture

		for (i = 0;i < imgStack.top()->Height; i++)
		{
			for (j = 0; j < imgStack.top()->Width; j++)
			{

				RGB = tmpImage->GetPixel(j, i);

				grayValue = Convert::ToInt32(RGB.R);

				grayValue = s_k[grayValue];

				tmpImage->SetPixel(j, i, Color::FromArgb(grayValue, grayValue, grayValue));
			}
		}


		// Draw Result Chart
		this->resultChart->Series["grayValue"]->Points->Clear();
		for (i = 0; i <= 255; i++)
		{
			this->resultChart->Series["grayValue"]->Points->AddY(result[i]);
		}


		imgStack.push(tmpImage);
		resultPictureBox->Size = Drawing::Size(tmpImage->Width, tmpImage->Height);
		resultPictureBox->Image = imgStack.top();
	}


	/// 
	/// Threshold Button Click
	/// 
	private: System::Void thresholdButton_Click(System::Object^ sender, System::EventArgs^ e){

		if (imgStack.size() == 0)
		{
			return;
		}
	
		Bitmap^ tmpImage = gcnew Bitmap(imgStack.top()->Width, imgStack.top()->Height);
		tmpImage = (Bitmap^)imgStack.top()->Clone();
		
		int thresholdValue = Convert::ToInt32(thresholdTextBox->Text);

		int i, j, grayValue;
		Color RGB;


		for (i = 0; i < imgStack.top()->Height; i++)
		{
			for (j = 0; j < imgStack.top()->Width; j++)
			{
				RGB = imgStack.top()->GetPixel(j, i);

				grayValue = Convert::ToInt32(RGB.R);

				if (grayValue >= thresholdValue)
				{
					grayValue = 255;
				}
				else
				{
					grayValue = 0;
				}

				tmpImage->SetPixel(j, i, Color::FromArgb(grayValue, grayValue, grayValue));
			}
		}

		imgStack.push(tmpImage);
		resultPictureBox->Size = Drawing::Size(tmpImage->Width, tmpImage->Height);
		resultPictureBox->Image = imgStack.top();
		
	}


	/// 
	/// Vertical Button Click
	/// 
	private: int Conv3x3(int* rgb_array, int type)
	{
		
		int gray;
		int i, j;

		// type = 0 : Vertical
		// type = 1 : Horizontal

		if (type == 0)
		{
			gray = abs(rgb_array[0] * -1 + rgb_array[1] * 0 + rgb_array[2] * 1 +
				rgb_array[3] * -2 + rgb_array[4] * 0 + rgb_array[5] * 2 +
				rgb_array[6] * -1 + rgb_array[7] * 0 + rgb_array[8] * 1);
		}
		else // type = 1 : Horizontal
		{
			gray = abs(rgb_array[0] * -1 + rgb_array[1] * -2 + rgb_array[2] * -1 +
				rgb_array[3] * 0 + rgb_array[4] * 0 + rgb_array[5] * 0 +
				rgb_array[6] * 1 + rgb_array[7] * 2 + rgb_array[8] * 1);
		}
		
		return gray;
		
	}
		   
	private: System::Void verticalButton_Click(System::Object^ sender, System::EventArgs^ e){

		if (imgStack.size() == 0)
		{
			return;
		}

		Bitmap^ tmpImage = gcnew Bitmap(imgStack.top()->Width, imgStack.top()->Height);
		tmpImage = (Bitmap^)imgStack.top()->Clone();

		Color RGB;
		int i, j, grayValue;
		int tmpi, tmpj;
		int rgbArray[9];
		int cnt, tmpRGB;


		for (i = 1; i < imgStack.top()->Height - 1; i++)
		{
			for (j = 1; j < imgStack.top()->Width - 1;j++)
			{

				cnt = 0;
				for (tmpi = i - 1; tmpi <= i + 1; tmpi++)
				{
					for (tmpj = j - 1; tmpj <= j + 1; tmpj++)
					{

						RGB = imgStack.top()->GetPixel(tmpj, tmpi);

						rgbArray[cnt] = Convert::ToInt32(RGB.R);
						cnt += 1;
					}
				}

				// type = 0 : Vertical
				// type = 1 : Horizontal
				tmpRGB = Conv3x3(rgbArray, 0);
				if (tmpRGB > 255)
				{
					tmpRGB = 255;
				}
				tmpImage->SetPixel(j, i, Color::FromArgb(tmpRGB, tmpRGB, tmpRGB));

			}
		}

		imgStack.push(tmpImage);
		resultPictureBox->Size = Drawing::Size(tmpImage->Width, tmpImage->Height);
		resultPictureBox->Image = imgStack.top();
		
	}


	/// 
	/// Horizontal Button Click
	/// 
	private: System::Void horizontalButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (imgStack.size() == 0)
		{
			return;
		}
		
		Bitmap^ tmpImage = gcnew Bitmap(imgStack.top()->Width, imgStack.top()->Height);
		tmpImage = (Bitmap^)imgStack.top()->Clone();

		Color RGB;
		int i, j, grayValue;
		int tmpi, tmpj;
		int rgbArray[9];
		int cnt, tmpRGB;


		for (i = 1; i < imgStack.top()->Height - 1; i++)
		{
			for (j = 1; j < imgStack.top()->Width - 1;j++)
			{

				cnt = 0;
				for (tmpi = i - 1; tmpi <= i + 1; tmpi++)
				{
					for (tmpj = j - 1; tmpj <= j + 1; tmpj++)
					{

						RGB = imgStack.top()->GetPixel(tmpj, tmpi);

						rgbArray[cnt] = Convert::ToInt32(RGB.R);
						cnt += 1;
					}
				}

				tmpRGB = Conv3x3(rgbArray, 1);
				if (tmpRGB > 255)
				{
					tmpRGB = 255;
				}
				tmpImage->SetPixel(j, i, Color::FromArgb(tmpRGB, tmpRGB, tmpRGB));

			}
		}

		imgStack.push(tmpImage);
		resultPictureBox->Size = Drawing::Size(tmpImage->Width, tmpImage->Height);
		resultPictureBox->Image = imgStack.top();
	}


	/// 
	///  Combined 
	///

	private: System::Void combinedButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (imgStack.size() == 0)
		{
			return;
		}
		
		Bitmap^ tmpImage = gcnew Bitmap(imgStack.top()->Width, imgStack.top()->Height);
		tmpImage = (Bitmap^)imgStack.top()->Clone();


		Color RGB;
		int i, j, grayValue;
		int tmpi, tmpj;
		int rgbArray[9];
		int cnt, tmpRGB, tmpV, tmpH;


		for (i = 1; i < imgStack.top()->Height - 1; i++)
		{
			for (j = 1; j < imgStack.top()->Width - 1;j++)
			{

				cnt = 0;
				for (tmpi = i - 1; tmpi <= i + 1; tmpi++)
				{
					for (tmpj = j - 1; tmpj <= j + 1; tmpj++)
					{

						RGB = imgStack.top()->GetPixel(tmpj, tmpi);

						rgbArray[cnt] = Convert::ToInt32(RGB.R);
						cnt += 1;
					}
				}

				tmpV = Conv3x3(rgbArray, 0);
				tmpH = Conv3x3(rgbArray, 1);
				tmpRGB = abs(tmpV)+abs(tmpH);

				if (tmpRGB > 255)
				{
					tmpRGB = 255;
				}
				tmpImage->SetPixel(j, i, Color::FromArgb(tmpRGB, tmpRGB, tmpRGB));

			}
		}

		imgStack.push(tmpImage);
		resultPictureBox->Size = Drawing::Size(tmpImage->Width, tmpImage->Height);
		resultPictureBox->Image = imgStack.top();
		
	}


	/// 
	///   Overlap (Operation of Combined and threshold)
	/// 
	
	private: System::Void overlapButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (imgStack.size() == 0)
		{
			return;
		}

		Bitmap^ tmpImage = gcnew Bitmap(imgStack.top()->Width, imgStack.top()->Height);


		Color RGB;
		int i, j, grayValue;
		int tmpi, tmpj;
		int rgbArray[9];
		int cnt, tmpRGB, tmpV, tmpH;
		int thresholdValue = Convert::ToInt32(overlapThresholdTextBox->Text);

		/* Combined Processing and Get Green edge*/
		for (i = 1; i < imgStack.top()->Height - 1; i++)
		{
			for (j = 1; j < imgStack.top()->Width - 1;j++)
			{

				cnt = 0;
				for (tmpi = i - 1; tmpi <= i + 1; tmpi++)
				{
					for (tmpj = j - 1; tmpj <= j + 1; tmpj++)
					{

						RGB = imgStack.top()->GetPixel(tmpj, tmpi);

						rgbArray[cnt] = Convert::ToInt32(RGB.R);
						cnt += 1;
					}
				}

				tmpV = Conv3x3(rgbArray, 0);
				tmpH = Conv3x3(rgbArray, 1);
				tmpRGB = abs(tmpV) + abs(tmpH);

				if (tmpRGB > 255) tmpRGB = 255;

				if (tmpRGB < thresholdValue)
				{
					RGB = origImage->GetPixel(j, i);
					grayValue = Convert::ToInt32(RGB.G);
					tmpImage->SetPixel(j, i, Color::FromArgb(grayValue, grayValue, grayValue));
				}
				else tmpImage->SetPixel(j, i, Color::FromArgb(0, 255, 0));
			}
		}


		imgStack.push(tmpImage);

		resultPictureBox->Size = Drawing::Size(tmpImage->Width, tmpImage->Height);
		resultPictureBox->Image = imgStack.top();
	}



	/// 
	///   Connected Component
	/// 
	private: void BubbleSort(int *A, int len) {

		int tmp;

		for (int i = len - 1; i > 0; i--)
		{
			for (int j = 0; j <= i - 1; j++)
			{
				if (A[j] > A[j + 1])
				{
					tmp = A[j];
					A[j] = A[j + 1];
					A[j + 1] = tmp;
				}
			}
		}
	}


	private: System::Void connectedcompButton_Click(System::Object^ sender, System::EventArgs^ e) {


		if (imgStack.size() == 0)
		{
			return;
		}


		Rectangle CloneRect = Rectangle(0, 0, imgStack.top()->Width, imgStack.top()->Height);
		Bitmap^ tmpImage = gcnew Bitmap(imgStack.top()->Width, imgStack.top()->Height);
		tmpImage = (Bitmap^)imgStack.top()->Clone(CloneRect, System::Drawing::Imaging::PixelFormat::Format24bppRgb);

		Color RGB;
		int i, j;
		int value;
		

		int newHeight = imgStack.top()->Height + 2;
		int newWidth = imgStack.top()->Width + 2;
		cli::array<int, 2>^ newImage = gcnew cli::array<int, 2>(newWidth, newHeight);


		/* Padding with zero*/

		// Load orig image data to the new array
		for (i = 1; i < newHeight - 1; i++)
		{
			for (j = 1; j < newWidth - 1; j++)
			{
				RGB = tmpImage->GetPixel(j - 1, i - 1);
				value = Convert::ToInt32(RGB.R);

				if (value != 255) // non-background
				{
					newImage[j, i] = 255;
				}
				else
				{
					newImage[j, i] = 0;
				}
			}
		}

		for (j = 0; j< newWidth; j++)
		{
			newImage[j, 0] = 0;
			newImage[j, newHeight - 1] = 0;
		}

		for (i = 0; i < newHeight; i++)
		{
			newImage[0, i] = 0;
			newImage[newWidth-1, i] = 0;
		}

		

		
		cliext::vector<int> equivalencyList;
		cliext::vector<int> RList;
		cliext::vector<int> GList;
		cliext::vector<int> BList;



		equivalencyList.push_back(0);
		RList.push_back(0);
		GList.push_back(0);
		BList.push_back(0);

		int neighbor[4];

		// Scan 1 
		for (j = 1; j < newHeight - 1; j++)
		{
			for (i = 1; i < newWidth - 1; i++)
			{
				if (newImage[i, j] != 0) // node is foreground
				{

					neighbor[0] = newImage[i - 1, j];
					neighbor[1] = newImage[i - 1, j - 1];
					neighbor[2] = newImage[i, j - 1];
					neighbor[3] = newImage[i + 1, j - 1];

					if (neighbor[0] == 0 && neighbor[1] == 0 && neighbor[2] == 0 && neighbor[3] == 0)
					{
						newImage[i, j] = equivalencyList.back() + 1;
						equivalencyList.push_back(newImage[i, j]);
					}
					else 
					{
						BubbleSort(neighbor, 4);
						
						bool flag = false;
						int min=0;

						for (int n = 0; n < 4; n++)
						{
							
							if (neighbor[n] != 0)
							{
								// The first non zero number
								if (flag == false)
								{
									flag = true;
									min = neighbor[n];
									newImage[i, j] = min;
								}
								equivalencyList[neighbor[n]] = min;

							}
						}
					}

				}

			}
		}


		int numComp = 0;
		int index;


		// Register the index
		for (i = 1; i < equivalencyList.size() - 1; i++)
		{
			if (i == equivalencyList[i]) 
			{
				numComp += 1;
			}
			else 
			{
				index = equivalencyList[i];
				value = equivalencyList[index];
				while (index != value)
				{
					index = equivalencyList[value];
					value = equivalencyList[index];
				}

				equivalencyList[i] = value;
			}
		}

		for (i = 1; i < equivalencyList.size(); i++)
		{
			RList.push_back(rand() % 254 + 1);
			GList.push_back(rand() % 254 + 1);
			BList.push_back(rand() % 254 + 1);
		}
		

		// Scan 2: update the component number
		for (i = 1; i < newWidth - 1; i++)
		{
			for (j = 1; j < newHeight - 1; j++)
			{
				if (newImage[i, j] != 0)
				{
					newImage[i, j] = equivalencyList[newImage[i, j]];
					tmpImage->SetPixel(i-1, j-1, Color::FromArgb(RList[newImage[i, j]], GList[newImage[i, j]], BList[newImage[i, j]]));
				}
			}
		}


		regisInfoLabel->Text = "Num of regions: " + numComp.ToString();
		
		imgStack.push(tmpImage);
		resultPictureBox->Size = Drawing::Size(newWidth-2, newHeight-2);
		resultPictureBox->Image = tmpImage;
	}



	///
	/// Image Registration
	///
	
	
	cliext::vector<int> goalPointList;
	cliext::vector<int> origPointList;


	
	private: System::Void origPictureBox_mouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		if (isLoadGoal == false)
		{
			return;
		}

		origPictureBox->Invalidate();

		int xCoordinate = (int)e->X;
		int yCoordinate = (int)e->Y;

		goalPointList.push_back(xCoordinate);
		goalPointList.push_back(yCoordinate);

	}
	private: System::Void origPictureBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		for(int i = 0; i < goalPointList.size(); i = i+2)
		{	
			Graphics^ g = e->Graphics;

			e->Graphics->FillEllipse(Brushes::Blue, goalPointList[i], goalPointList[i+1], 10, 10);
		}
	}
	private: System::Void resultPictureBox_mouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		if (isLoadGoal == false)
		{
			return;
		}

		resultPictureBox->Invalidate();

		int xCoordinate = (int)e->X;
		int yCoordinate = (int)e->Y;

		origPointList.push_back(xCoordinate);
		origPointList.push_back(yCoordinate);

	}
	private: System::Void resultPictureBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		for (int i = 0; i < origPointList.size(); i = i + 2)
		{
			Graphics^ g = e->Graphics;

			e->Graphics->FillEllipse(Brushes::Blue, origPointList[i], origPointList[i + 1], 10, 10);
		}
	}
	private: System::Void LoadGoalImageButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (imgStack.size() == 0)
		{
			return;
		}

		Bitmap^ goalImage;

		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();

		openFileDialog->Filter = "點陣圖 (.bmp)| *.bmp| All files (*.*)| *.*";
		openFileDialog->FileName = "";
		openFileDialog->Title = "載入影像";
		openFileDialog->FilterIndex = 1;

		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK &&
			openFileDialog->FileName->Length > 0)
		{
			isLoadGoal = true;
			goalImage = safe_cast<Bitmap^>(Image::FromFile(openFileDialog->FileName));

			imgStack.push(goalImage);


			origPictureBox->Size = Drawing::Size(goalImage->Width, goalImage->Height);
			origPictureBox->Image = goalImage;
			resultPictureBox->Image = origImage;

		}
	}

	private: System::Void imageRegButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (imgStack.size() == 0)
		{
			return;
		}

		// imgStack.top : goal image
		Bitmap^ resultImage = gcnew Bitmap(imgStack.top()->Width, imgStack.top()->Height);
		Bitmap^ goalImage = gcnew Bitmap(imgStack.top()->Width, imgStack.top()->Height);

		goalImage = (Bitmap^)imgStack.top()->Clone();

		
		for (int i = 0; i < imgStack.top()->Height - 1; i++)
		{
			for (int j = 0; j < imgStack.top()->Width - 1; j++)
			{
				resultImage->SetPixel(j, i, Color::FromArgb(0, 0, 0));
			}
		}
		

		// imaStack pop goal image
		imgStack.pop();


		int orig[4][2] = { 0 };
		int goal[4][2] = { 0 };
		int i=0, j=0, tmpi=0, tmpj=0;

		/* Calculate Rotation's Angle*/

		// Get Original Image coordinates
		for (i = 0; i < 4; i++)
		{
			orig[i][0] = origPointList[i * 2];
			orig[i][1] = origPointList[i * 2 + 1];
			goal[i][0] = goalPointList[i * 2];
			goal[i][1] = goalPointList[i * 2 + 1];
		}



		float orig_width = sqrt(pow(orig[1][0] - orig[0][0], 2) + pow(orig[1][1] - orig[0][1], 2)); // ORIG W
		float goal_width = sqrt(pow(goal[1][0] - goal[0][0], 2) + pow(goal[1][1] - goal[0][1], 2)); // GOAL W
		float orig_height = sqrt(pow(orig[2][0] - orig[1][0], 2) + pow(orig[2][1] - orig[1][1], 2)); // ORIG H
		float goal_height = sqrt(pow(goal[2][0] - goal[1][0], 2) + pow(goal[2][1] - goal[1][1], 2)); // GOAL H


		int centerX, centerY;
		float angle, scale, vector_a, vector_b, cos_angle, sin_angle, x1, y1, x2, y2;

		scale = goal_width / orig_width;

		centerX = resultImage->Width / 2;
		centerY = resultImage->Height / 2;

		x1 = orig[1][0] - orig[0][0];
		y1 = orig[1][1] - orig[0][1];
		x2 = goal[1][0] - goal[0][0];
		y2 = goal[1][1] - goal[0][1];


		vector_a = x1 * x2 + y1 * y2;
		vector_b = x1 * y2 - y1 * x2;

		angle = atan2(vector_b, vector_a);
		cos_angle = cos(-angle);
		sin_angle = sin(-angle);

		for (int i = 0; i < resultImage->Width; i++)
		{
			for (int j = 0; j < resultImage->Height; j++)
			{
				tmpi = (int)(((i - centerX) * cos_angle - (j - centerY) * sin_angle) / scale + origImage->Width / 2);
				tmpj = (int)(((i - centerX) * sin_angle + (j - centerY) * cos_angle) / scale + origImage->Height / 2);

				if (tmpi >= 0 && tmpi < origImage->Width && tmpj >= 0 && tmpj < origImage->Height)
				{
					Color RGB = origImage->GetPixel(tmpi, tmpj);
					int value = Convert::ToInt32(RGB.R);
					resultImage->SetPixel(i, j, Color::FromArgb(value, value, value));
				}
			}
		}


		
		/*
		for (i = 0; i < origImage->Width; i++)
		{
			for (j = 0; j < origImage->Height; j++)
			{
				tmpi = (int)(((i - center_x) * cos_angle + (j - center_y) * sin_angle) * scale_W );
				tmpj = (int)((-(i - center_x) * sin_angle + (j - center_y) * cos_angle) * scale_H);

				tmpi = tmpi + center_x;
				tmpj = tmpj + center_y;

				if (tmpi > 0 && tmpj > 0 && tmpi < resultImage->Width && tmpj < resultImage->Height)
				{
					Color RGB = origImage->GetPixel(i, j);
					int value = Convert::ToInt32(RGB.R);
					resultImage->SetPixel(tmpi, tmpj, Color::FromArgb(value, value, value));
				}
			}
		}
		*/
		
		/*
		for (i = 0; i < resultImage->Width; i++)
		{
			for (j = 0; j < resultImage->Height; j++)
			{
				tmpi = (round)(i / scale_W * cos_angle - j / scale_H * sin_angle) + orig[0][0];
				tmpj = (round)(i / scale_W * sin_angle + j / scale_H * cos_angle);

				if (tmpi > 0 && tmpj > 0 && tmpi < origImage->Width && tmpj < origImage->Height)
				{
					Color RGB = origImage->GetPixel(tmpi, tmpj);
					int value = Convert::ToInt32(RGB.R);
					resultImage->SetPixel(i, j, Color::FromArgb(value, value, value));
				}
			}
		}
		*/


		// push resultImage into stack
		imgStack.push(resultImage);

		
		// clear point vector
		origPointList.clear();
		goalPointList.clear();

		origPictureBox->Invalidate();
		resultPictureBox->Invalidate();

		resultPictureBox->Size = Drawing::Size(resultImage->Width, resultImage->Height);
		resultPictureBox->Image = resultImage;
		

		
		// Draw Chart
		float diff;
		int g, r;
		Color RGB;

		for (i = 0; i < resultImage->Width; i++)
		{
			for (j = 0; j < resultImage->Height; j++)
			{
				RGB = goalImage->GetPixel(i, j);
				g = Convert::ToInt32(RGB.R);

				RGB = resultImage->GetPixel(i, j);
				r = Convert::ToInt32(RGB.R);

				diff += abs(g - r);
			}
		}

		diff = diff / (resultImage->Width * resultImage->Height);


		/* Calculate angle, scale, and intensity*/
		regisInfoLabel->Text = "Rotate Angle (°) : " + (angle * 180.0 / PI).ToString()
			+ "\nScale Factor : " + scale.ToString() + "\nIntensity Difference : " + diff;

		

		
	}



};
}
