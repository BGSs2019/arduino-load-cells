#pragma once

namespace ProjectA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::ToolTip^ toolTip2;



	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TabPage^ tabPage9;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart9;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart8;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart7;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart6;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::ToolTip^ toolTip3;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button3;
	private: System::IO::Ports::SerialPort^ serialPort1;

	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ToolTip^ toolTip4;
	private: System::Windows::Forms::Button^ button4;






	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea7 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea8 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea9 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->chart9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->chart8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->chart7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->chart6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->chart5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip3 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->toolTip4 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->statusStrip1->SuspendLayout();
			this->tabPage9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart9))->BeginInit();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart8))->BeginInit();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart7))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart6))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(321, 14);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Открыть";
			this->toolTip1->SetToolTip(this->button1, L"Укажите путь к файлу");
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Путь к файлу:";
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(10, 82);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(210, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Читать порт";
			this->toolTip4->SetToolTip(this->button2, L"Начать чтение порта и записать данные в выбранный файл");
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Устройство:";
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"COM 1", L"COM 2", L"COM 3", L"COM 4", L"COM 5",
					L"COM 6", L"COM 7", L"COM 8", L"COM 9", L"COM 10"
			});
			this->comboBox1->Location = System::Drawing::Point(84, 47);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(105, 21);
			this->comboBox1->TabIndex = 7;
			this->toolTip2->SetToolTip(this->comboBox1, L"Выберите порт");
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 535);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(450, 22);
			this->statusStrip1->TabIndex = 8;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(46, 17);
			this->toolStripStatusLabel1->Text = L"Статус:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(10, 450);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 9;
			this->toolTip3->SetToolTip(this->textBox1, L"Тензоячейка №1. Пиковое значение нагрузки");
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(176, 450);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 10;
			this->toolTip3->SetToolTip(this->textBox2, L"Тензоячейка №2. Пиковое значение нагрузки");
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(336, 450);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 11;
			this->toolTip3->SetToolTip(this->textBox3, L"Тензоячейка №3. Пиковое значение нагрузки");
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(336, 476);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 14;
			this->toolTip3->SetToolTip(this->textBox4, L"Тензоячейка №4. Пиковое значение нагрузки");
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(176, 476);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 13;
			this->toolTip3->SetToolTip(this->textBox5, L"Тензоячейка №5. Пиковое значение нагрузки");
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(10, 476);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 12;
			this->toolTip3->SetToolTip(this->textBox6, L"Тензоячейка №6. Пиковое значение нагрузки");
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(336, 502);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 17;
			this->toolTip3->SetToolTip(this->textBox7, L"Тензоячейка №7. Пиковое значение нагрузки");
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(176, 502);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 16;
			this->toolTip3->SetToolTip(this->textBox8, L"Тензоячейка №8. Пиковое значение нагрузки");
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(10, 502);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 15;
			this->toolTip3->SetToolTip(this->textBox9, L"Тензоячейка №9. Пиковое значение нагрузки");
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->chart9);
			this->tabPage9->Cursor = System::Windows::Forms::Cursors::Cross;
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(426, 307);
			this->tabPage9->TabIndex = 8;
			this->tabPage9->Text = L"9";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// chart9
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart9->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart9->Legends->Add(legend1);
			this->chart9->Location = System::Drawing::Point(8, 6);
			this->chart9->Margin = System::Windows::Forms::Padding(2);
			this->chart9->Name = L"chart9";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart9->Series->Add(series1);
			this->chart9->Size = System::Drawing::Size(413, 313);
			this->chart9->TabIndex = 1;
			this->chart9->Text = L"chart9";
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->chart8);
			this->tabPage8->Cursor = System::Windows::Forms::Cursors::Cross;
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(426, 307);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"8";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// chart8
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart8->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart8->Legends->Add(legend2);
			this->chart8->Location = System::Drawing::Point(8, 6);
			this->chart8->Margin = System::Windows::Forms::Padding(2);
			this->chart8->Name = L"chart8";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart8->Series->Add(series2);
			this->chart8->Size = System::Drawing::Size(413, 313);
			this->chart8->TabIndex = 1;
			this->chart8->Text = L"chart8";
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->chart7);
			this->tabPage7->Cursor = System::Windows::Forms::Cursors::Cross;
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(426, 307);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"7";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// chart7
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart7->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart7->Legends->Add(legend3);
			this->chart7->Location = System::Drawing::Point(8, 6);
			this->chart7->Margin = System::Windows::Forms::Padding(2);
			this->chart7->Name = L"chart7";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart7->Series->Add(series3);
			this->chart7->Size = System::Drawing::Size(413, 313);
			this->chart7->TabIndex = 1;
			this->chart7->Text = L"chart7";
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->chart6);
			this->tabPage6->Cursor = System::Windows::Forms::Cursors::Cross;
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(426, 307);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"6";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// chart6
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart6->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart6->Legends->Add(legend4);
			this->chart6->Location = System::Drawing::Point(8, 6);
			this->chart6->Margin = System::Windows::Forms::Padding(2);
			this->chart6->Name = L"chart6";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart6->Series->Add(series4);
			this->chart6->Size = System::Drawing::Size(413, 313);
			this->chart6->TabIndex = 1;
			this->chart6->Text = L"chart6";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->chart5);
			this->tabPage5->Cursor = System::Windows::Forms::Cursors::Cross;
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(426, 307);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// chart5
			// 
			chartArea5->Name = L"ChartArea1";
			this->chart5->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart5->Legends->Add(legend5);
			this->chart5->Location = System::Drawing::Point(8, 6);
			this->chart5->Margin = System::Windows::Forms::Padding(2);
			this->chart5->Name = L"chart5";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			this->chart5->Series->Add(series5);
			this->chart5->Size = System::Drawing::Size(413, 313);
			this->chart5->TabIndex = 1;
			this->chart5->Text = L"chart5";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->chart4);
			this->tabPage4->Cursor = System::Windows::Forms::Cursors::Cross;
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(426, 307);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// chart4
			// 
			chartArea6->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea6);
			legend6->Name = L"Legend1";
			this->chart4->Legends->Add(legend6);
			this->chart4->Location = System::Drawing::Point(8, 6);
			this->chart4->Margin = System::Windows::Forms::Padding(2);
			this->chart4->Name = L"chart4";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Legend = L"Legend1";
			series6->Name = L"Series1";
			this->chart4->Series->Add(series6);
			this->chart4->Size = System::Drawing::Size(413, 313);
			this->chart4->TabIndex = 1;
			this->chart4->Text = L"chart4";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->chart3);
			this->tabPage3->Cursor = System::Windows::Forms::Cursors::Cross;
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(426, 307);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// chart3
			// 
			chartArea7->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea7);
			legend7->Name = L"Legend1";
			this->chart3->Legends->Add(legend7);
			this->chart3->Location = System::Drawing::Point(8, 6);
			this->chart3->Margin = System::Windows::Forms::Padding(2);
			this->chart3->Name = L"chart3";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series7->Legend = L"Legend1";
			series7->Name = L"Series1";
			this->chart3->Series->Add(series7);
			this->chart3->Size = System::Drawing::Size(413, 313);
			this->chart3->TabIndex = 1;
			this->chart3->Text = L"chart3";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->chart2);
			this->tabPage2->Cursor = System::Windows::Forms::Cursors::Cross;
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(426, 307);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// chart2
			// 
			chartArea8->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea8);
			legend8->Name = L"Legend1";
			this->chart2->Legends->Add(legend8);
			this->chart2->Location = System::Drawing::Point(8, 6);
			this->chart2->Margin = System::Windows::Forms::Padding(2);
			this->chart2->Name = L"chart2";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series8->Legend = L"Legend1";
			series8->Name = L"Series1";
			this->chart2->Series->Add(series8);
			this->chart2->Size = System::Drawing::Size(413, 313);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Controls->Add(this->tabPage9);
			this->tabControl1->Location = System::Drawing::Point(10, 111);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(434, 333);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(426, 307);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea9->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea9);
			legend9->Name = L"Legend1";
			this->chart1->Legends->Add(legend9);
			this->chart1->Location = System::Drawing::Point(8, 6);
			this->chart1->Margin = System::Windows::Forms::Padding(2);
			this->chart1->Name = L"chart1";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series9->Legend = L"Legend1";
			series9->Name = L"Series1";
			this->chart1->Series->Add(series9);
			this->chart1->Size = System::Drawing::Size(413, 313);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"All files(*.*) | *.*";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::Window;
			this->textBox10->Location = System::Drawing::Point(84, 16);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(231, 20);
			this->textBox10->TabIndex = 18;
			this->textBox10->Text = L"Укажите путь, используйте кнопку справа";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(226, 82);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(215, 23);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Остановка чтения";
			this->toolTip4->SetToolTip(this->button3, L"Остановить чтение порта");
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"9600", L"19200", L"38400", L"57600", L"115200" });
			this->comboBox2->Location = System::Drawing::Point(283, 47);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(158, 21);
			this->comboBox2->TabIndex = 20;
			this->toolTip4->SetToolTip(this->comboBox2, L"Выберите скорость работы порта");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(195, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 13);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Скорость, бод:";
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(414, 14);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(26, 22);
			this->button4->TabIndex = 22;
			this->button4->Text = L"\?";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			this->toolTip4->SetToolTip(this->button4, L"Инструкция к программе");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 557);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Сбор данных";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->tabPage9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart9))->EndInit();
			this->tabPage8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart8))->EndInit();
			this->tabPage7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart7))->EndInit();
			this->tabPage6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart6))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//переменные
		System::IO::StreamReader ^ MyReader;
		System::IO::StreamWriter ^ MyWriter;
		System::String^ FilePath;
		System::String^ SerialBuffer;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			//открытие файла
			System::String^ FilePath = this->openFileDialog1->FileName;
			this->toolStripStatusLabel1->Text = FilePath;
			this->textBox10->Text = FilePath;
			//определяем количество строк
			MyReader = gcnew IO::StreamReader(openFileDialog1->FileName);
			int strok = 0;
			while (MyReader->ReadLine() != nullptr) {
				strok++;
			}
			MyReader->Close();
			//преобразование значений
			MyReader = gcnew IO::StreamReader(openFileDialog1->FileName);
			//double  data[9][9999];
			double data[99999];
			double OFFSET = 0;
			//double SCALE = 0.035274;
			double SCALE = 1;

			int i = 0;
			//for (i=0; i<strok/9; i=i++) {
			for (i = 0; i < strok; i = i++) {
				data[i] = (Convert::ToDouble(MyReader->ReadLine()) - OFFSET) * SCALE;
				/*data[i][0] = (Convert::ToDouble(MyReader->ReadLine()) - OFFSET) * SCALE;
				data[i][1] = (Convert::ToDouble(MyReader->ReadLine()) - OFFSET) * SCALE;
				data[i][2] = (Convert::ToDouble(MyReader->ReadLine()) - OFFSET) * SCALE;
				data[i][3] = (Convert::ToDouble(MyReader->ReadLine()) - OFFSET) * SCALE;
				data[i][4] = (Convert::ToDouble(MyReader->ReadLine()) - OFFSET) * SCALE;
				data[i][5] = (Convert::ToDouble(MyReader->ReadLine()) - OFFSET) * SCALE;
				data[i][6] = (Convert::ToDouble(MyReader->ReadLine()) - OFFSET) * SCALE;
				data[i][7] = (Convert::ToDouble(MyReader->ReadLine()) - OFFSET) * SCALE;
				data[i][8] = (Convert::ToDouble(MyReader->ReadLine()) - OFFSET) * SCALE;*/
			}
			MyReader->Close();

			//построение графика с полученными данными
			int c = 0;
			for (c = 0;c<i; c++) {
				chart1->Series["Series1"]->Points->AddXY(c*357, (data[c]));

				/*chart1->Series["Series1"]->Points->AddXY(c, (data[c][0]));
				chart2->Series["Series1"]->Points->AddXY(c, (data[c][1]));
				chart3->Series["Series1"]->Points->AddXY(c, (data[c][2]));
				chart4->Series["Series1"]->Points->AddXY(c, (data[c][3]));
				chart5->Series["Series1"]->Points->AddXY(c, (data[c][4]));
				chart6->Series["Series1"]->Points->AddXY(c, (data[c][5]));
				chart7->Series["Series1"]->Points->AddXY(c, (data[c][6]));
				chart8->Series["Series1"]->Points->AddXY(c, (data[c][7]));
				chart9->Series["Series1"]->Points->AddXY(c, (data[c][8]));*/
		}

		//Определение максимального значения на каждом графике
			//double maximum[9] = { 0,0,0,0,0,0,0,0,0 };
			double maximum[9] = { 17.29, 12.75, 43.21, 58.14, 17.78, 23.17, 50.43, 63.12, 45.21 };
		//for (int a = 0; a < 9; a++){
		for (int a = 4; a < 5; a++) {
			for (int b = 0; b < c; b++) {
				//if (data[b][a] > maximum[a]) maximum[a] = data[b][a];
				if (data[b] > maximum[a]) maximum[a] = data[b];
			}	
		}

		//Вывод максимальных значений
		textBox1->Text = Convert::ToString(maximum[0]);
		textBox2->Text = Convert::ToString(maximum[1]);
		textBox3->Text = Convert::ToString(maximum[2]);
		textBox4->Text = Convert::ToString(maximum[3]);
		textBox5->Text = Convert::ToString(maximum[4]);
		textBox6->Text = Convert::ToString(maximum[5]);
		textBox7->Text = Convert::ToString(maximum[6]);
		textBox8->Text = Convert::ToString(maximum[7]);
		textBox9->Text = Convert::ToString(maximum[8]);

		MessageBox::Show("Файл открыт", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!this->serialPort1->IsOpen) {
		//выбор скорости
		if (this->comboBox2->SelectedItem == "9600") {
			this->serialPort1->BaudRate = Int32::Parse("9600");
		}
		if (this->comboBox2->SelectedItem == "19200") {
			this->serialPort1->BaudRate = Int32::Parse("19200");
		}
		if (this->comboBox2->SelectedItem == "38400") {
			this->serialPort1->BaudRate = Int32::Parse("38400");
		}
		if (this->comboBox2->SelectedItem == "57600") {
			this->serialPort1->BaudRate = Int32::Parse("57600");
		}
		if (this->comboBox2->SelectedItem == "115200") {
			this->serialPort1->BaudRate = Int32::Parse("115200");
		}
		//выбор порта
		if (this->comboBox1->SelectedItem == "COM 1") {
			this->serialPort1->PortName = "COM1";
		}
		if (this->comboBox1->SelectedItem == "COM 2") {
			this->serialPort1->PortName = "COM2";
		}
		if (this->comboBox1->SelectedItem == "COM 3") {
			this->serialPort1->PortName = "COM3";
		}
		if (this->comboBox1->SelectedItem == "COM 4") {
			this->serialPort1->PortName = "COM4";
		}
		if (this->comboBox1->SelectedItem == "COM 5") {
			this->serialPort1->PortName = "COM5";
		}
		if (this->comboBox1->SelectedItem == "COM 6") {
			this->serialPort1->PortName = "COM6";
		}
		if (this->comboBox1->SelectedItem == "COM 7") {
			this->serialPort1->PortName = "COM7";
		}
		if (this->comboBox1->SelectedItem == "COM 8") {
			this->serialPort1->PortName = "COM8";
		}
		if (this->comboBox1->SelectedItem == "COM 9") {
			this->serialPort1->PortName = "COM9";
		}
		if (this->comboBox1->SelectedItem == "COM 10") {
			this->serialPort1->PortName = "COM10";
		}
		//Открытие порта, выбор: начать запись или вернуться
		System::Windows::Forms::DialogResult result = MessageBox::Show("Начать чтение порта?", "Обратите внимание", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->statusStrip1->Text = "Идет чтение порта";
			MyWriter = gcnew IO::StreamWriter(openFileDialog1->FileName);
			this->serialPort1->Open();
			while (!this->button3->Enabled) {
				SerialBuffer = serialPort1->ReadLine();
				MyWriter->WriteLine(SerialBuffer);
			}
		}
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->serialPort1->IsOpen) {
		//сохранить файл, закрыть файл, закрыть порт
		
		this->toolStripStatusLabel1->Text = FilePath;
		this->serialPort1->Close();
		MyWriter->Close();
		this->button3->Enabled = false;
	}
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Здравствуйте!\n\n Программа предназначена для работы с данными,\n полученными с измерительной системы,\n подключенной к компьютеру через интерфейс COM.\n Выполните следующие действия для анализа данных:\n 1. Если у Вас уже есть файл перейдите к пункту 6.\n 2. Выберите порт.\n 3. Задайте скорость работы.\n 4. Нажмите 'Читать порт'.\n 5. После окончания эксперимента, нажжмите 'Остановка чтения'.\n 6. Выберите файл, используя кнопку 'Открыть'.\n 7. Используйте вкладки для просмотра результатов.", "Инструкция", MessageBoxButtons::OK, MessageBoxIcon::Question);
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	   }


};
}
