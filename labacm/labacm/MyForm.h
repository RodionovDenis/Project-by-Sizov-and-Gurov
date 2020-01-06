#pragma once
#include<math.h>   
#include<cmath>   
namespace labacm {

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
	private: System::Windows::Forms::Button^  button1;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(333, 455);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Построить график ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(603, 154);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(2);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(382, 286);
			this->zedGraphControl1->TabIndex = 1;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			this->zedGraphControl1->GraphPane->XAxis->Title->Text = "x";
			this->zedGraphControl1->GraphPane->YAxis->Title->Text = "U";
			this->zedGraphControl1->GraphPane->Title->Text = "Тестовая задача";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(11, 42);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(105, 99);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 21);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Тестовая задача: ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(719, 10);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(119, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"0,01";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(719, 33);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(119, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"1";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(719, 59);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(119, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(621, 10);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Начальный шаг";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(623, 33);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Начальный x";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(623, 61);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Начальный u";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(767, 124);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(71, 20);
			this->textBox4->TabIndex = 11;
			this->textBox4->Text = L"0,00001";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(623, 114);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 26);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Параметр \r\nлокальной погрешности";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {
				L"Без контроля локальной погрешности( с постоянным шагом) ",
					L"С контролем локальной погрешности"
			});
			this->comboBox1->Location = System::Drawing::Point(866, 24);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(138, 21);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->Text = L"Без контроля локальной погрешности( с постоянным шагом) ";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(621, 85);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 26);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Максимальное \r\nчисло шагов";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(719, 85);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(119, 20);
			this->textBox5->TabIndex = 14;
			this->textBox5->Text = L"1000";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 154);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(564, 286);
			this->dataGridView1->TabIndex = 16;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"i";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"xi";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"hi";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"vi";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"v2i";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"vi-v2i";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"ОЛП";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"с1";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"с2";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"ui";
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"|ui-vi|";
			this->Column11->Name = L"Column11";
			this->Column11->Width = 200;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(128, 14);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Справка";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(125, 31);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(125, 49);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(125, 77);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 21;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(125, 63);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 13);
			this->label11->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(863, 9);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(132, 13);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Построение с помощью:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(863, 53);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(94, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Максимальный x";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(866, 68);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(119, 20);
			this->textBox6->TabIndex = 24;
			this->textBox6->Text = L"5";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(863, 90);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(94, 26);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Точность выхода\r\n за границу";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(866, 122);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(119, 20);
			this->textBox7->TabIndex = 26;
			this->textBox7->Text = L"0,005";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(125, 91);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 13);
			this->label15->TabIndex = 27;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(125, 114);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 13);
			this->label16->TabIndex = 28;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(1024, 506);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Laboratory work";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		double f1(double x, double u)
		{
			return u;
		}
	private:
		double f2(double x, double x0, double u)
		{
			return((u * exp(x)) / exp(x0));
		}

	private:
		void Reference(int cd, int cy, double hmax, double hmin,double maxolp,double xmaxolp, double maxglobal, double xmaxglobal)
		{
			label8->Text = "Число делений" + " " + Convert::ToString(cd);
			label9->Text = "Число удвоений" + " " + Convert::ToString(cy);
			label10->Text = "Максимальный шаг" + " " + Convert::ToString(hmax);
			label11->Text = "Минимальный шаг" + " " + Convert::ToString(hmin);
			label15->Text = "Максимальная л.п. :" + " " + Convert::ToString(maxolp)+ " в точке:" + Convert::ToString(xmaxolp);
			label16->Text = "Максимальная г.п. :" + " " + Convert::ToString(maxglobal) + " в точке:" + Convert::ToString(xmaxglobal);
		}
		double RK4(double& x, double v, double h)
		{
			double k1 = f1(x, v);
			double k2 = f1(x + h / 2, v + h / 2 * k1);
			double k3 = f1(x + h / 2, v + h / 2 * k2);
			double k4 = f1(x + h, v + h * k3);
			v = v + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
			x = x + h;
			return v;
		}
	private:
		double RK42(double& x, double v, double h)
		{
			for (int i = 0; i < 2; i++)
			{
				double k1 = f1(x, v);
				double k2 = f1(x + h / 4, v + h / 4 * k1);
				double k3 = f1(x + h / 4, v + h / 4 * k2);
				double k4 = f1(x + h, v + h * k3);
				v = v + h / 12 * (k1 + 2 * k2 + 2 * k3 + k4);
				x = x + h / 2;
			}
			return v;
		}
	private:
		void fill_Table(int j, double xi, double hi, double vi, double v_i, int c1, int c2, double ui, double & maxglobal, double & xmaxglobal)
		{
	/*		dataGridView1[0, j]->Value = j+1; dataGridView1[1, j]->Value = xi;
			dataGridView1[2, j]->Value = hi; dataGridView1[3, j]->Value = vi;
			dataGridView1[4, j]->Value = v_i; dataGridView1[5, j]->Value = vi - v_i;
			dataGridView1[6, j]->Value = (vi - v_i) * 16 / 15; dataGridView1[7, j]->Value = c1;
			dataGridView1[8, j]->Value = c2;	dataGridView1[10, j]->Value = abs(ui - vi);*/
			double gl = abs(ui - vi);
			if (gl > maxglobal)
			{
				maxglobal = gl;
				xmaxglobal = xi;
			}
			dataGridView1->Rows->Add(j + 1, xi, hi, vi, v_i, vi - v_i, (vi - v_i) * 16 / 15, c1, c2, ui, gl);
			
		}

	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		ZedGraph::GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		ZedGraph::PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		ZedGraph::PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		double xmin = Convert::ToDouble(Convert::ToDouble(textBox2->Text));
		double xmax = Convert::ToDouble(Convert::ToDouble(textBox5->Text));
		double h = Convert::ToDouble(Convert::ToDouble(textBox1->Text));
		double u = Convert::ToDouble(Convert::ToDouble(textBox3->Text));
		double E = Convert::ToDouble(Convert::ToDouble(textBox4->Text));
		double right_border= Convert::ToDouble(Convert::ToDouble(textBox6->Text));
		double accuracy = Convert::ToDouble(Convert::ToDouble(textBox7->Text));
		double maxolp = 0;
		int c1, c2;
		double S = 0;
		double v = u;
		double v1 = u;
		double x = xmin;
		double hmin = h, hmax = h;
		double vs = v;
		int cy=0, cd=0;
		double p = 0;//ОЛП
		double xmaxolp = 0;
		double maxglobal = 0, xmaxglobal = 0;
		//dataGridView1->RowCount = xmax;
		//точное решение 
		dataGridView1->Rows->Clear();
		switch (comboBox1->SelectedIndex)
		{
		case 0:
		{
			for (int i = 0; i < xmax && x<=right_border + accuracy; i++) // c постоянным шагом
			{
				/*if (x >=right_border + accuracy)
					break;*/
				double xs = x;
				f1_list->Add(x, v);
				//dataGridView1[9, i]->Value = f2(x, xmin, u);
				//double u = Convert::ToDouble(dataGridView1[9, i]->Value);
				fill_Table(i, x, h, v, v1, 0, 0, f2(x, xmin, u), maxglobal,xmaxglobal);
				if (abs(p) > abs(maxolp))
				{
					maxolp = p;
					xmaxolp = x;
				}
				v = RK4(x, v, h);
				v1 = RK42(xs, v, h);
				p = (v - v1) / 15 * 16;
			}
			break;
		}
		case 1:
		{
			f1_list->Add(x, v);
			fill_Table(0, x, h, v, v1, c1, c2, u,maxglobal,xmaxglobal);
			for (int i = 1; i < xmax && x <= right_border + accuracy; i++)
			{
				/*if (x >=right_border + accuracy)
					break;*/
				double xs = x;//запоминаем текущий x
				double vs = v;//запоминаем текущий v
				v = RK4(x, v, h);
				v1 = RK42(xs, vs, h);
				S = (v1 - v) / 15;
				p = S * 16;
				if (abs(S) > E)
				{
					x = x - h;
					h = h / 2;
					i--;
					c1++;
					cd++;
					v = vs;
					if (hmin > h)
						hmin = h;
					continue;

				}
				if (abs(p) > abs(maxolp))
				{
					maxolp = p;
					xmaxolp = x;
				}
				f1_list->Add(x, v);
				vs = v;
				if ((E / 32.0) <= (abs(S)) && (abs(S) <= E))
				{
					h = h;
					//dataGridView1[9, i]->Value = f2(x, xmin, u);
				//	double u = Convert::ToDouble(dataGridView1[9, i]->Value);
					fill_Table(i, x, h, v, v1, c1, c2, f2(x, xmin, u), maxglobal,xmaxglobal);
					c1 = 0;
					c2 = 0;

				}
				if (abs(S) < E / 32.0)
				{
					//dataGridView1[9, i]->Value = f2(x, xmin, u);
					//double u = Convert::ToDouble(dataGridView1[9, i]->Value);
					fill_Table(i, x, h, v, v1, c1, c2, f2(x,xmin,u),maxglobal, xmaxglobal);
					h = 2 * h;
					if (hmax < h)
						hmax = h;
					c2 = 1;
					cy++;
				}
			}
			break;
		}
		}
		for (double x_ = xmin; x_ < x; x_ += 0.0001)
		{
			if (x_ >=right_border)
				break;
			f2_list->Add(x_, f2(x_, xmin, u));
		}
	   Reference( cd, cy, hmax,hmin,abs(maxolp),xmaxolp, maxglobal, xmaxglobal);
		ZedGraph::LineItem ^Curve1= panel->AddCurve("Численное решение", f1_list, Color::Red, ZedGraph::SymbolType::None);
		ZedGraph::LineItem ^Curve2= panel->AddCurve("Точное решение", f2_list, Color::Blue, ZedGraph::SymbolType::None);
		Curve1->Line->Width = 0.005f;
		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
