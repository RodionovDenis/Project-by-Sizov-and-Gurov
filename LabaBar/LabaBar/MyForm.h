#pragma once
#include "Table.h"
#include <cmath>
#include <iostream>

namespace LabaBar {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			zedGraphControl1->GraphPane->XAxis->Title->Text = "Ось U";
			zedGraphControl1->GraphPane->YAxis->Title->Text = "Ось U'";
			zedGraphControl1->GraphPane->Title->Text = "Фазовая плоскость";
			zedGraphControl2->GraphPane->XAxis->Title->Text = "Ось X";
			zedGraphControl2->GraphPane->YAxis->Title->Text = "Ось U";
			zedGraphControl3->GraphPane->XAxis->Title->Text = "Ось X";
			zedGraphControl3->GraphPane->YAxis->Title->Text = "Ось U'";
			textBox6->Text = "0";
			label10->Hide();
			label11->Hide();
			label12->Hide();
			label13->Hide();
			label8->Hide();
			textBox6->Hide();
			label16->Hide();
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

	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button2;
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;



	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: ZedGraph::ZedGraphControl^ zedGraphControl2;
	private: ZedGraph::ZedGraphControl^ zedGraphControl3;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox9;












	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_1;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F));
			this->label1->Location = System::Drawing::Point(7, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 22);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Задача:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 217);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(206, 18);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Максимальное число шагов";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(0, 265);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 18);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Начальный шаг";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::Label3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(5, 287);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(86, 24);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(5, 238);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(86, 24);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(5, 335);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(86, 24);
			this->textBox5->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->ForeColor = System::Drawing::Color::DarkBlue;
			this->button2->Location = System::Drawing::Point(109, 593);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 33);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(-4, -5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(608, 578);
			this->zedGraphControl1->TabIndex = 15;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::ZedGraphControl1_Load);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(0, 314);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(175, 18);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Начальные условия U0 ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->ForeColor = System::Drawing::Color::DarkBlue;
			this->button1->Location = System::Drawing::Point(260, 593);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 33);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Показать таблицу";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(5, 430);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(86, 24);
			this->textBox6->TabIndex = 25;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(2, 409);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(204, 18);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Контроль лок. погрешности";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(189, 125);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 35);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Принять";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label9->Location = System::Drawing::Point(5, 122);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(178, 38);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Использовать стандартные параметры";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(3, 457);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 26);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Справка:";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::Label5_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(5, 483);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(125, 18);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Число удвоений:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(5, 501);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(118, 18);
			this->label11->TabIndex = 31;
			this->label11->Text = L"Число делений:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(5, 519);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(149, 18);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Максимальный шаг:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(5, 537);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(141, 18);
			this->label13->TabIndex = 33;
			this->label13->Text = L"Минимальный шаг:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->checkBox1->Location = System::Drawing::Point(5, 175);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(273, 26);
			this->checkBox1->TabIndex = 34;
			this->checkBox1->Text = L"Использовать контроль шага";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox1_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(8, 34);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(228, 85);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 35;
			this->pictureBox1->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(257, 217);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(174, 18);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Значение параметра \"a\"";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(260, 286);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(86, 24);
			this->textBox1->TabIndex = 37;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(257, 265);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(174, 18);
			this->label14->TabIndex = 38;
			this->label14->Text = L"Значение параметра \"b\"";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::Label14_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(260, 238);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(86, 24);
			this->textBox7->TabIndex = 39;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox7_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(2, 362);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(174, 18);
			this->label6->TabIndex = 40;
			this->label6->Text = L"Начальные условия U\'0";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(5, 383);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(86, 24);
			this->textBox2->TabIndex = 41;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(487, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(607, 600);
			this->tabControl1->TabIndex = 42;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->zedGraphControl1);
			this->tabPage1->Location = System::Drawing::Point(4, 27);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(599, 569);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Фазовый Портрет";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->zedGraphControl2);
			this->tabPage2->Location = System::Drawing::Point(4, 27);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(599, 569);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Оси X, U";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(-4, -5);
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(4);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(608, 578);
			this->zedGraphControl2->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->zedGraphControl3);
			this->tabPage3->Location = System::Drawing::Point(4, 27);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(599, 569);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Оси X, U\'";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(-4, -5);
			this->zedGraphControl3->Margin = System::Windows::Forms::Padding(4);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(608, 578);
			this->zedGraphControl3->TabIndex = 0;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(257, 314);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(127, 18);
			this->label15->TabIndex = 43;
			this->label15->Text = L"Максимальный x";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(260, 335);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(86, 24);
			this->textBox8->TabIndex = 44;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox8_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(5, 555);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(170, 18);
			this->label16->TabIndex = 45;
			this->label16->Text = L"Максимальная ошибка";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(257, 362);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(209, 18);
			this->label17->TabIndex = 46;
			this->label17->Text = L"Контроль выхода на границу";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(260, 383);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(86, 24);
			this->textBox9->TabIndex = 47;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(1107, 638);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label16);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Laba";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		Table^ mytable = gcnew Table();
		double abs(double num)
		{
			if (num < 0)
				return (num * (-1));
			return num;
		}
		double f1(double x, double u1 ,double u2)
		{
			return u2;
		}
		double f2(double x, double u1, double u2,double a,double b)
		{
			return((-a) * u2 - b * sin(u1));
		}
		void RK4(double x, double h, double *v,double a,double b)
		{
			double k1[2] = {f1(x,v[0],v[1]),f2(x,v[0],v[1],a,b)};
			double k2[2] = {f1(x + h / 2,v[0] + h / 2 * k1[0],v[1] + h / 2 * k1[1]),f2(x + h / 2,v[0] + h / 2 * k1[0],v[1] + h / 2 * k1[1],a,b)};
			double k3[2] = {f1(x + h / 2,v[0] + h / 2 * k2[0],v[1] + h / 2 * k2[1]),f2(x + h / 2,v[0] + h / 2 * k2[0],v[1] + h / 2 * k2[1],a,b) };
			double k4[2] = {f1(x + h,v[0] + h * k3[0],v[1] + h * k3[1]),f2(x + h,v[0] + h * k3[0],v[1] + h * k3[1],a,b) };
			v[0] = v[0] + h / 6 * (k1[0] + 2 * k2[0] + 2 * k3[0] + k4[0]);
			v[1] = v[1] + h / 6 * (k1[1] + 2 * k2[1] + 2 * k3[1] + k4[1]);
		}
		void RK4_(double _x, double _h, double* v, double a, double b)
		{
			double h = _h * 0.5;
			double x = _x;
			for (int i = 0; i < 2; i++)
			{
				double k1[2] = { f1(x,v[0],v[1]),f2(x,v[0],v[1],a,b) };
				double k2[2] = { f1(x + h / 2,v[0] + h / 2 * k1[0],v[1] + h / 2 * k1[1]),f2(x + h / 2,v[0] + h / 2 * k1[0],v[1] + h / 2 * k1[1],a,b) };
				double k3[2] = { f1(x + h / 2,v[0] + h / 2 * k2[0],v[1] + h / 2 * k2[1]),f2(x + h / 2,v[0] + h / 2 * k2[0],v[1] + h / 2 * k2[1],a,b) };
				double k4[2] = { f1(x + h,v[0] + h * k3[0],v[1] + h * k3[1]),f2(x + h,v[0] + h * k3[0],v[1] + h * k3[1],a,b) };
				x = x + h;
				v[0] = v[0] + h / 6 * (k1[0] + 2 * k2[0] + 2 * k3[0] + k4[0]);
				v[1] = v[1] + h / 6 * (k1[1] + 2 * k2[1] + 2 * k3[1] + k4[1]);
			}
		}
		double Norm(double* v)
		{
			if (abs(v[0]) >= abs(v[1]))
				return abs(v[0]);
			return abs(v[1]);
		}
		double max(double a, double b)
		{
			if (abs(a) > abs(b))
				return a;
			else return b;
		}
		int CheckLocalFault(double S, double E, double h)
		{
			if ((abs(S)) > E)//return 0
				return 0;
			if ((E / 32.0) <= (abs(S)) && (abs(S)) <= E)//return 1
				return 1;
			if (abs(S) < (E / 32.0))//return 2
				return 2;
		}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		mytable->ShowDialog();
	}
			 void Reference(int c1, int c2, double max_h, double min_h, double maxolp, double xolp)
		{
			label11->Text = "Число делений" + " " + Convert::ToString(c2);
			label10->Text = "Число удвоений" + " " + Convert::ToString(c1);
			label12->Text = "Максимальный шаг" + " " + Convert::ToString(max_h);
			label13->Text = "Минимальный шаг" + " " + Convert::ToString(min_h);
			label16->Text = "Максимальная ошибка"+" "+ Convert::ToString(maxolp)+" "+ "в точке "+ Convert::ToString(xolp);
			label10->Show();
			label11->Show();
			label12->Show();
			label13->Show();
			label16->Show();
		}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ q) {
		GraphPane^ panel1 = zedGraphControl1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2->GraphPane;
		GraphPane^ panel3 = zedGraphControl3->GraphPane;
		panel1->CurveList->Clear();
		panel2->CurveList->Clear();
		panel3->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList;
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList;
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList;
		double x = 0;
		double h = Convert::ToDouble(textBox3->Text);
		double xmax = Convert::ToDouble(textBox4->Text);
		double u01= Convert::ToDouble(textBox5->Text);
		double u02= Convert::ToDouble(textBox2->Text);
		double a= Convert::ToDouble(textBox7->Text);
		double b = Convert::ToDouble(textBox1->Text);
		double E = Convert::ToDouble(textBox6->Text);
		double right_border= Convert::ToDouble(textBox8->Text);
		double accuracy= Convert::ToDouble(textBox9->Text);
		double S=0,e=0;
		double v[2], v_[2];
		double maxolp = e, xolp = 0;;
		int j = 0;
		int check = 0;
		int c2 = 0, c1 = 0;
		double s1;
		double s2;
		v[0] = u01;
		v[1] = u02;
		v_[0]= u01;
		v_[1] = u02;
		int count_mult=0, count_div=0;
		double max_h=h, min_h=h;
		mytable->Create_Table(10, xmax);
		if (checkBox1->Checked == false)
		{
			for (int i = 0; i < xmax; i++)
			{
				if (x >= right_border - accuracy)
				{
					mytable->Remove_Table(i);
					break;
				}
				mytable->Fill_Table(0, j, i + 1);
				mytable->Fill_Table(1, j, h);//здесь вместо нуля в общем случае x
				mytable->Fill_Table(2, j, x);
				mytable->Fill_Table(3, j, v[0]);
				mytable->Fill_Table(4, j, v_[0]);//половинный шаг 
				mytable->Fill_Table(5, j, S);
				mytable->Fill_Table(6, j, e);
				mytable->Fill_Table(7, j, v[0] + e);
				mytable->Fill_Table(8, j, c2);
				mytable->Fill_Table(9, j, c1);
				j++;
				f1_list->Add(v[0], v[1]);
				f2_list->Add(x, v[0]);
				f3_list->Add(x, v[1]);
				RK4(x, h, v, a, b);
				RK4_(x, h,v_, a, b);
				x += h;
				s1 = (v[0] - v_[0]) / 15;
				s2 = (v[1] - v_[1]) / 15;
				S = max(s1, s2);
				e = S * 16;
				if (abs(maxolp) < abs(e))
				{
					maxolp = e;
					xolp = x;
				}
			}
		}
		if (checkBox1->Checked == true)
		{
			mytable->Fill_Table(0, j, 1);
			mytable->Fill_Table(1, j, h);//здесь вместо нуля в общем случае x
			mytable->Fill_Table(2, j, x);
			mytable->Fill_Table(3, j, v[0]);
			mytable->Fill_Table(4, j, v_[0]);//половинный шаг 
			mytable->Fill_Table(5, j, S);
			mytable->Fill_Table(6, j, e);
			mytable->Fill_Table(7, j, v[0] + e);
			mytable->Fill_Table(8, j, c2);
			mytable->Fill_Table(9, j, c1);
			j++;
			for (int i = 0; i < xmax-1; i++)
			{
				if (x >= right_border - accuracy)
				{
					mytable->Remove_Table(i);
					break;
				}
				double V[2] = {v[0],v[1]};
				double save_v[2] = {v[0],v[1]};
				double save_v_[2] = {v_[0],v_[1]};
				RK4(x, h, v, a, b);
				RK4_(x, h, V, a, b);
				v_[0] = V[0];
				v_[1] = V[1];
				s1 = (v[0] - v_[0]) / 15;
				s2 = (v[1] - v_[1]) / 15;
				S = max(s1, s2);
				e = S * 16;
				check = CheckLocalFault(S, E, h);
				if (check == 0)
				{
					h = h / 2;
					if (min_h>h)
						min_h = h;
					i--;
					c2++;
					count_div++;
					v[0] = save_v[0];
					v[1] = save_v[1];
					v_[0] = save_v_[0];
					v_[1] = save_v_[1];
					continue;
				}
				if (abs(maxolp) < abs(e))
				{	
					maxolp = e;
					xolp = x;
				}
				if (check == 1)
				{
					mytable->Fill_Table(0, j, i + 2);
					mytable->Fill_Table(1, j, h);//здесь вместо нуля в общем случае x
					mytable->Fill_Table(2, j, x);
					mytable->Fill_Table(3, j, v[0]);
					mytable->Fill_Table(4, j, v_[0]);//половинный шаг 
					mytable->Fill_Table(5, j, S);
					mytable->Fill_Table(6, j, e);
					mytable->Fill_Table(7, j, v[0] + e);
					mytable->Fill_Table(8, j, c2);
					mytable->Fill_Table(9, j, c1);
					j++;
					f1_list->Add(v[0], v[1]);
					f2_list->Add(x, v[0]);
					f3_list->Add(x, v[1]);
					x += h;
					c2 = 0;
					c1 = 0;
				}
				if (check == 2)
				{
					mytable->Fill_Table(0, j, i + 2);
					mytable->Fill_Table(1, j, h);//здесь вместо нуля в общем случае x
					mytable->Fill_Table(2, j, x);
					mytable->Fill_Table(3, j, v[0]);
					mytable->Fill_Table(4, j, v_[0]);//половинный шаг 
					mytable->Fill_Table(5, j, S);
					mytable->Fill_Table(6, j, e);
					mytable->Fill_Table(7, j, v[0] + e);
					mytable->Fill_Table(8, j, c2);
					mytable->Fill_Table(9, j, c1);
					j++;
					f1_list->Add(v[0], v[1]);
					f2_list->Add(x, v[0]);
					f3_list->Add(x, v[1]);
					x += h;
					h = 2 * h;
					count_mult++;
					c1 = 1;
					if (h > max_h)
						max_h = h;
				}
			}
		}
		LineItem^ Curve1 = panel1->AddCurve("Численное решение", f1_list, Color::Red, SymbolType::None);
		LineItem^ Curve2 = panel2->AddCurve("Численное решение", f2_list, Color::Red, SymbolType::None);
		LineItem^ Curve3 = panel3->AddCurve("Численное решение", f3_list, Color::Red, SymbolType::None);
		Curve1->Line->Width = 0.05f;
		Curve2->Line->Width = 0.05f;
		Curve3->Line->Width = 0.05f;
		Curve1->Line->IsSmooth = true;
		Curve2->Line->IsSmooth = true;
		Curve3->Line->IsSmooth = true;
		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
		Reference(count_mult, count_div, max_h, min_h,abs(maxolp),xolp);
	}
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox4->Text = "10000";
		textBox3->Text = "0,001";
		textBox5->Text = "1";
		textBox2->Text = "2";
		textBox7->Text = "1";
		textBox1->Text = "5";
		textBox6->Text = "0,000001";
		textBox8->Text = "5";
		textBox9->Text = "0,001";
	}
	private: System::Void ZedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked == true)
		{
			label8->Show();
			textBox6->Show();
		}
		if (checkBox1->Checked == false)
		{
			label8->Hide();
			textBox6->Hide();
		}
	}
	private: System::Void PictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void TextBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
