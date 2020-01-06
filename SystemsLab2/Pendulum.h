#pragma once
#include "Term.h"
#include "Runge.h"
#include "Table.h"

namespace SystemsLab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Pendulum
	/// </summary>
	public ref class Pendulum : public System::Windows::Forms::Form
	{
	public:
		Pendulum(void)
		{
			InitializeComponent();
			label17->Hide();
			label18->Hide();
			label19->Hide();
			label20->Hide();
			label21->Hide();
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Pendulum()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: ZedGraph::ZedGraphControl^ zedGraphControl2;
	private: ZedGraph::ZedGraphControl^ zedGraphControl3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Pendulum::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(222, 74);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Условие задачи";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Pendulum::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 7);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Уравнение:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(139, 7);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 61);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 151);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(223, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Начальное отклонение маятника U0";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(3, 74);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 47);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Задать значения по умолчанию";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Pendulum::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(230, 148);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(67, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"0,314";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(0, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Начальная скорость V0";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(156, 172);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(47, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(0, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Начальное время отчета x0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(180, 199);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(43, 22);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(0, 256);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Длина нити";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(81, 250);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(46, 22);
			this->textBox4->TabIndex = 11;
			this->textBox4->Text = L"0,1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(303, 151);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"радиан";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(213, 175);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 16);
			this->label7->TabIndex = 13;
			this->label7->Text = L"м/с";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(230, 205);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"с";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(133, 256);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(17, 16);
			this->label9->TabIndex = 15;
			this->label9->Text = L"м";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(3, 384);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(190, 40);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Построить графики. Показать справку и таблицу";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Pendulum::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(216, 384);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 40);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Сбросить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Pendulum::button4_Click);
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(380, 13);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(284, 255);
			this->zedGraphControl1->TabIndex = 18;
			this->zedGraphControl1->GraphPane->XAxis->Title->Text = "x";
			this->zedGraphControl1->GraphPane->YAxis->Title->Text = "V";
			this->zedGraphControl1->GraphPane->Title->Text = "Зависимость координаты от времени";
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(671, 11);
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(4);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(293, 257);
			this->zedGraphControl2->TabIndex = 19;
			this->zedGraphControl2->GraphPane->XAxis->Title->Text = "x";
			this->zedGraphControl2->GraphPane->YAxis->Title->Text = "V '";
			this->zedGraphControl2->GraphPane->Title->Text = "Зависимость скорости от времени";
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(380, 276);
			this->zedGraphControl3->Margin = System::Windows::Forms::Padding(4);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(584, 292);
			this->zedGraphControl3->TabIndex = 20;
			this->zedGraphControl3->GraphPane->XAxis->Title->Text = "V";
			this->zedGraphControl3->GraphPane->YAxis->Title->Text = "V '";
			this->zedGraphControl3->GraphPane->Title->Text = "Фазовый портрет";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(3, 128);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(249, 20);
			this->checkBox1->TabIndex = 21;
			this->checkBox1->Text = L"с контролем локальном погрешности";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Pendulum::checkBox1_CheckedChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(0, 361);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(214, 16);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Контроль локальной погрешности ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(220, 357);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 23;
			this->textBox5->Text = L"0,0001";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(0, 282);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(135, 16);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Количество итераций";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(0, 311);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(197, 16);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Максимальное значение угла x";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(0, 338);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(227, 16);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Точность выхода за правую границу";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(141, 276);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(43, 22);
			this->textBox6->TabIndex = 25;
			this->textBox6->Text = L"1000";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(203, 305);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(49, 22);
			this->textBox7->TabIndex = 26;
			this->textBox7->Text = L"2";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(230, 330);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(45, 22);
			this->textBox8->TabIndex = 27;
			this->textBox8->Text = L"0,05";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(258, 311);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(51, 16);
			this->label14->TabIndex = 28;
			this->label14->Text = L"радиан";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(0, 229);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(102, 16);
			this->label15->TabIndex = 29;
			this->label15->Text = L"Начальный шаг";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(108, 223);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(43, 22);
			this->textBox9->TabIndex = 30;
			this->textBox9->Text = L"0,01";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 12));
			this->label16->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label16->Location = System::Drawing::Point(10, 426);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(71, 18);
			this->label16->TabIndex = 31;
			this->label16->Text = L"Справка";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(13, 448);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(106, 16);
			this->label17->TabIndex = 32;
			this->label17->Text = L"Число удвоений";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(13, 468);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(99, 16);
			this->label18->TabIndex = 33;
			this->label18->Text = L"Число делений";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(13, 488);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(126, 16);
			this->label19->TabIndex = 34;
			this->label19->Text = L"Максимальный шаг";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(12, 508);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(120, 16);
			this->label20->TabIndex = 35;
			this->label20->Text = L"Минимальный шаг";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(12, 524);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(146, 16);
			this->label21->TabIndex = 36;
			this->label21->Text = L"Максимальная ошибка";
			// 
			// Pendulum
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(975, 585);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->zedGraphControl3);
			this->Controls->Add(this->zedGraphControl2);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Pendulum";
			this->Text = L"Pendulum";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		Table^ mytable = gcnew Table();
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Term^ term = gcnew Term();
		term->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		mytable->Remove();


		label17->Text = "Число удвоений";
		label18->Text = "Число делений";
		label19->Text = "Максимальный шаг";
		label20->Text = "Минимальный шаг";
		label21->Text = "Максимальная ошибка";

		double x0 = Convert::ToDouble(textBox3->Text);
		double xmax = Convert::ToDouble(textBox7->Text);
		double accuracy = Convert::ToDouble(textBox8->Text);
		double u0 = Convert::ToDouble(textBox1->Text);
		double v0 = Convert::ToDouble(textBox2->Text);
		double h0 = Convert::ToDouble(textBox9->Text);
		double n = Convert::ToDouble(textBox6->Text);
		double L = Convert::ToDouble(textBox4->Text);

		double x = x0;
		double v1 = u0; //установили начальные значения
		double v2 = v0; //установили начальные значения

		int c1 = 0, c2 = 0; //для таблицы
		int count_c1=0, count_c2 = 0;
		double min_h = h0, max_h = h0, maxolp = 0,xolp=0;

		ZedGraph::PointPairList^ listV1 = gcnew ZedGraph::PointPairList(); //список точек
		ZedGraph::PointPairList^ listV2 = gcnew ZedGraph::PointPairList(); //список точек
		ZedGraph::PointPairList^ listV1V2 = gcnew ZedGraph::PointPairList(); //список точек

		listV1->Add(x, v1);
		listV2->Add(x, v2);
		listV1V2->Add(v1, v2);

		double vn[2] = { v1, v2 };

		double vn_[2] = { v1, v2 }; //точки вычисленные половинным шагом

		double vn_help[2] = { 0,0 }; //дополнительный массив, который нужен

		double v1_current = v1, v2_current = v2; //запонимающие

		if (!checkBox1->Checked) //с постоянным шагом
		{
			int i = 1;
			double vn_[2] = { v1, v2 };
			double s = 0;
			mytable->Add(0, h0, x0, u0, u0, 0, 0);

			for (i; i <= n && x <= xmax + accuracy; i++)
			{

				PK2(x, h0, v1, v2, L, vn);

				PK2(x, h0 / 2, v1_current, v2_current, L, vn_help); //вспомагательные точки

				PK2(x + h0 / 2, h0 / 2, vn_help[0], vn_help[1], L, vn_); //точки с помощью двойного шага

				x += h0;

				v1_current = vn[0]; //запоминание текущей точки
				v2_current = vn[1];

				listV1->Add(x, vn[0]);
				listV2->Add(x, vn[1]);
				listV1V2->Add(vn[0], vn[1]);

				double s1 = GetS(vn_[0], vn[0]);
				double s2 = GetS(vn_[1], vn[1]);

				s= s1;
				if (s2 > s)
					s = s2;

				v1 = vn[0];
				v2 = vn[1];

				mytable->Add(i, h0, x, vn[0], vn_[0], 0, 0);

				if (fabs(maxolp) < fabs(s*16))
				{
					maxolp = s*16;
					xolp = x;
				}
			}
			ZedGraph::LineItem^ v1 = zedGraphControl1->GraphPane->AddCurve("Решение с постоянным шагом x0 = " + Convert::ToString(x0) + ", u0 = " + Convert::ToString(u0), listV1, System::Drawing::Color::Blue, ZedGraph::SymbolType::None);
			ZedGraph::LineItem^ v2 = zedGraphControl2->GraphPane->AddCurve("Решение с постоянным шагом x0 = " + Convert::ToString(x0) + ", u0 = " + Convert::ToString(u0), listV2, System::Drawing::Color::Blue, ZedGraph::SymbolType::None);
			ZedGraph::LineItem^ v1v2 = zedGraphControl3->GraphPane->AddCurve("Решение с постоянным шагом x0 = " + Convert::ToString(x0) + ", u0 = " + Convert::ToString(u0), listV1V2, System::Drawing::Color::Blue, ZedGraph::SymbolType::None);
		}
		else 
		{
			double e = Convert::ToDouble(textBox5->Text);
			int i = 1;

			mytable->Add(0, h0, x0, u0, u0, 0, 0);

			for (i; i <= n && x <= xmax + accuracy; i++)
			{
				PK2(x, h0, v1_current, v2_current, L, vn); //вычислили значения с шагом h

				PK2(x, h0 / 2, v1_current, v2_current, L, vn_help); //вспомагательные точки

				PK2(x + h0 / 2, h0 / 2, vn_help[0], vn_help[1], L, vn_); //точки с помощью двойного шага

				double s1 = GetS(vn_[0], vn[0]);
				double s2 = GetS(vn_[1], vn[1]);

				//получили два контроля локальной погрешности, но работать будем с наибольшим! 

				double s = s1;
				if (s2 > s)
					s = s2;
				if (fabs(maxolp) < fabs(s * 16))
				{
					maxolp = s * 16;
					xolp = x;
				}

				//условия на шаги
				if (s > e)
				{
					h0 = h0 / 2;
					if (min_h > h0)
						min_h = h0;
					i--;
					c2++;
					continue;
				}
				else
				{
					x += h0;
					v1_current = vn[0]; //запоминание текущей точки
					v2_current = vn[1];
					listV1->Add(x, vn[0]); //заполнение списка
					listV2->Add(x, vn[1]);
					listV1V2->Add(vn[0], vn[1]);
					mytable->Add(i, h0, x, vn[0], vn_[0], c1, c2);
					if (s < e / 15)
					{
						c1++;
						h0 = 2 * h0;
						if (max_h < h0)
							max_h = h0;
					}
				}
			}
			ZedGraph::LineItem^ v1_s = zedGraphControl1->GraphPane->AddCurve("Решение с переменным шагом x0 = " + Convert::ToString(x0) + ", u0 = " + Convert::ToString(u0), listV1, System::Drawing::Color::Red, ZedGraph::SymbolType::None);
			ZedGraph::LineItem^ v2_s = zedGraphControl2->GraphPane->AddCurve("Решение с переменным шагом x0 = " + Convert::ToString(x0) + ", u0 = " + Convert::ToString(u0), listV2, System::Drawing::Color::Red, ZedGraph::SymbolType::None);
			ZedGraph::LineItem^ v1v2_s = zedGraphControl3->GraphPane->AddCurve("Решение с переменным шагом x0 = " + Convert::ToString(x0) + ", u0 = " + Convert::ToString(u0), listV1V2, System::Drawing::Color::Red, ZedGraph::SymbolType::None);
		}

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();

		zedGraphControl2->AxisChange();
		zedGraphControl2->Invalidate();

		zedGraphControl3->AxisChange();
		zedGraphControl3->Invalidate();
		mytable->ShowDialog();
		label17->Text += " " + Convert::ToString(count_c1);
		label18->Text += " " + Convert::ToString(count_c2);
		label19->Text += " " + Convert::ToString(max_h);
		label20->Text += " " + Convert::ToString(min_h);
		label21->Text += " " + Convert::ToString(maxolp)+"в точке"+" "+Convert::ToString(xolp);
		Controls->Add(label17);
		Controls->Add(label18);
		Controls->Add(label19);
		Controls->Add(label20);
		Controls->Add(label21);

		label17->Show();
		label18->Show();
		label19->Show();
		label20->Show();
		label21->Show();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = Convert::ToString("");
	textBox2->Text = Convert::ToString("");
	textBox3->Text = Convert::ToString("");
	textBox4->Text = Convert::ToString("");
	textBox5->Text = Convert::ToString("");
	textBox6->Text = Convert::ToString("");
	textBox7->Text = Convert::ToString("");
	textBox8->Text = Convert::ToString("");
	textBox9->Text = Convert::ToString("");
	zedGraphControl1->GraphPane->CurveList->Clear();
	zedGraphControl2->GraphPane->CurveList->Clear();
	zedGraphControl3->GraphPane->CurveList->Clear();

	label17->Text = "Число удвоений";
	label18->Text = "Число делений";
	label19->Text = "Максимальный шаг";
	label20->Text = "Минимальный шаг";
	label21->Text = "Максимальная ошибка";

	Controls->Remove(label17);
	Controls->Remove(label18);
	Controls->Remove(label19);
	Controls->Remove(label20);
	Controls->Remove(label21);

	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();

	zedGraphControl2->AxisChange();
	zedGraphControl2->Invalidate();

	zedGraphControl3->AxisChange();
	zedGraphControl3->Invalidate();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = Convert::ToString("0,314");
	textBox2->Text = Convert::ToString("0");
	textBox3->Text = Convert::ToString("0");
	textBox4->Text = Convert::ToString("0,1");
	textBox5->Text = Convert::ToString("0,0001");
	textBox6->Text = Convert::ToString("1000");
	textBox7->Text = Convert::ToString("2");
	textBox8->Text = Convert::ToString("0,05");
	textBox9->Text = Convert::ToString("0,01");
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)
	{
		this->Controls->Add(this->textBox5);
		this->Controls->Add(this->label10);
	}
	else
	{
		this->Controls->Remove(this->textBox5);
		this->Controls->Remove(this->label10);
	}
}
};
}
