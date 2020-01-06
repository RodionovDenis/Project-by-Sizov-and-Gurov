#pragma once
#include "Table.h"
#include <cmath>
#include "Task.h"
#include <string>
#include "RungeKutt.h"

namespace TestPlots {
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
			zedGraphControl1->GraphPane->XAxis->Title->Text = "Ось X";
			zedGraphControl1->GraphPane->YAxis->Title->Text = "Ось U";
			zedGraphControl1->GraphPane->Title->Text = "Зависимость температуры от времени";
			textBox6->Text = "0";
			label10->Hide();
			label11->Hide();
			label12->Hide();
			label13->Hide();
			label8->Hide();
			label7->Hide();
			textBox6->Hide();
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

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button2;
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;



	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
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
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;










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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
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
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(206, 18);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Максимальное число шагов";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 18);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Начальный шаг";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(8, 213);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(86, 24);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(9, 165);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(86, 24);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(9, 263);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(86, 24);
			this->textBox5->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->ForeColor = System::Drawing::Color::DarkBlue;
			this->button2->Location = System::Drawing::Point(2, 563);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 33);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(346, 12);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(697, 584);
			this->zedGraphControl1->TabIndex = 15;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::ZedGraphControl1_Load);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 18);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Начальные условия";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 291);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(156, 18);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Значение регулятора";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(9, 312);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(86, 24);
			this->textBox2->TabIndex = 23;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->ForeColor = System::Drawing::Color::DarkBlue;
			this->button1->Location = System::Drawing::Point(180, 563);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 33);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Показать таблицу";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(9, 360);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(86, 24);
			this->textBox6->TabIndex = 25;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(8, 339);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(204, 18);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Контроль лок. погрешности";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(196, 49);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 38);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Принять";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label9->Location = System::Drawing::Point(12, 49);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(178, 38);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Использовать стандартные параметры";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(1, 399);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 31);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Справка:";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::Label5_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 430);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(125, 18);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Число удвоений:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 460);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(118, 18);
			this->label11->TabIndex = 31;
			this->label11->Text = L"Число делений:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 487);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(149, 18);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Максимальный шаг:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(8, 514);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(141, 18);
			this->label13->TabIndex = 33;
			this->label13->Text = L"Минимальный шаг:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->checkBox1->Location = System::Drawing::Point(6, 103);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(273, 26);
			this->checkBox1->TabIndex = 34;
			this->checkBox1->Text = L"Использовать контроль шага";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox1_CheckedChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(177, 192);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(117, 18);
			this->label14->TabIndex = 35;
			this->label14->Text = L"Правая граница";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(180, 213);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(86, 24);
			this->textBox1->TabIndex = 36;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(177, 246);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 36);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Контроль выхода на \r\nграницу";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(180, 285);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(86, 24);
			this->textBox7->TabIndex = 39;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox7_TextChanged);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->ForeColor = System::Drawing::Color::DarkBlue;
			this->button5->Location = System::Drawing::Point(88, 602);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(145, 33);
			this->button5->TabIndex = 40;
			this->button5->Text = L"Очистить график";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(61, 10);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(172, 33);
			this->button4->TabIndex = 41;
			this->button4->Text = L"Постановка задачи";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(8, 542);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(174, 18);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Максимальная ошибка:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(1066, 638);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label14);
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
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Laba";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		Table^ mytable = gcnew Table();
		int push = 0;
		double abs(double num)
		{
			if (num < 0)
				return (num * (-1));
			return num;
		}
		double f(double x, double u, int Q1)
		{
			return (0.25 * (Q1 - 500 * u));
		}
		double u1(double x, double Q1)
		{
			return(0.002 * Q1 + (10 - 0.002 * Q1) * exp(-125 * x));
		}
		double u2(double x)
		{
			return (10 * exp(-125 * x) + 15.6);
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
		   double RK4(double x, double v, double h, int Q1)
		   {
			   double k1 = f(x, v, Q1);
			   double k2 = f(x + h / 2, v + (h / 2 * k1), Q1);
			   double k3 = f(x + h / 2, v + (h / 2 * k2), Q1);
			   double k4 = f(x + h, v + (h * k3), Q1);
			   v = v + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
			   return v;
		   }
		   double RK4_(double x, double v, double h, int Q1)
		   {
			   for (int i = 0; i < 2; i++)
			   {
				   double k1 = f(x, v, Q1);
				   double k2 = f(x + h / 4, v + (h / 4 * k1), Q1);
				   double k3 = f(x + h / 4, v + (h / 4 * k2), Q1);
				   double k4 = f(x + h / 2, v + (h / 2 * k3), Q1);
				   v = v + h / 12 * (k1 + 2 * k2 + 2 * k3 + k4);
			   }
			   return v;
		   }
		   void Reference(int c1, int c2, double max_h, double min_h,double maxolp,double x)
		   {
			   label11->Text = "Число делений" + " " + Convert::ToString(c1);
			   label10->Text = "Число удвоений" + " " + Convert::ToString(c2);
			   label12->Text = "Максимальный шаг" + " " + Convert::ToString(max_h);
			   label13->Text = "Минимальный шаг" + " " + Convert::ToString(min_h);
			   label7->Text = "Максимальная ошибка " + Convert::ToString(maxolp) + " в точке " + Convert::ToString(x);
			   label10->Show();
			   label11->Show();
			   label12->Show();
			   label13->Show();
			   label7->Show();
		   }
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ q) {

		GraphPane^ panel = zedGraphControl1->GraphPane;

		//panel->CurveList->Clear();

		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

		int n = 1, j = 0;
		bool c1 = false;
		int  c2 = 0;//счетчики увеличения/уменьшения шага

		double x = 0;
		double N = Convert::ToDouble(textBox4->Text);
		double h = Convert::ToDouble(textBox3->Text);//шаг
		double up = Convert::ToDouble(textBox2->Text);//значение регулятора
		double u0 = Convert::ToDouble(textBox5->Text);
		double E = Convert::ToDouble(textBox6->Text);//контроль лок. погрешности
		double xmax = Convert::ToDouble(textBox1->Text);
		double accuracy = Convert::ToDouble(textBox7->Text);

		double olpmax = 0;
		double x_olp = 0;

		double v[2] = { u0 ,u0 };
		double v_ = u0;
		double S = v[0] - v_, e = S * 16;//вспомогательная величина и оценка лок.погершности
		double max_h = h, min_h = h;
		int count_div = 0, count_mult = 0;
		int Q1;
		int check;
		if (u0 <= up + 1)
			Q1 = 30000;
		if (u0 > up + 1)
			Q1 = 0;

		f1_list->Add(x, v[1]);
		mytable->Create_Table(9, N);

		//заполним начальные условия в таблице
		mytable->Fill_Table(j, n, h, x, v[1], v_,e, 0, 0);
		n++, j++;
		if (checkBox1->Checked == true)// используется метод контроля шага 
		{
			for (int i = 0; i < N-1; i++)
			{
				if (x >= xmax + accuracy)
				{
					mytable->Remove_Tabe(i);
					break;
				}
				v[1] = RK4(x, v[0], h, Q1);
				v_ = RK4_(x, v[0], h, Q1);
				x = x + h;
				S = (v[1] - v_) / 15;
				e = S * 16;
				if (olpmax < e)
				{
					olpmax = e;
					x_olp = x;
				}
				check = CheckLocalFault(S, E, h);
				if (check == 0)
				{
					x = x - h;
					h = h / 2;
					if (h < min_h)
						min_h = h;
					i--;
					c2++;
					count_div++;
					continue;
				}
				if (v[1] >= up + 1)
					Q1 = 0;
				else if (v[1] < up - 1)
					Q1 = 30000;
				if (check == 1)
				{
					f1_list->Add(x, v[1]);
					mytable->Fill_Table(j, n, h, x, v[1], v_, e, c1, c2);
					n++, j++;
					c2 = 0;
					c1 = false;
				}
				if (check == 2)
				{
					f1_list->Add(x, v[1]);
					mytable->Fill_Table(j, n, h, x, v[1], v_, e, c1, c2);
					h = 2 * h;
					count_div++;
					c1 = true;
					if (h > max_h)
						max_h = h;
					n++, j++;
				}
				v[0] = v[1];
			}
		}
		if (checkBox1->Checked == false)//с постоянным шагом
		{
			for (int i = 0; i < N-1; i++)
			{
				if (x >= xmax + accuracy)
				{
					mytable->Remove_Tabe(i);
					break;
				}
				v[1] = RK4(x, v[0], h, Q1);
				v_ = RK4_(x, v[0], h, Q1);
				x = x + h;
				S = (v[1] - v_) / 15;
				e = S * 16;
				if (olpmax < e)
				{
					olpmax = e;
					x_olp = x;
				}
				if (v[1] >= up + 1)
					Q1 = 0;
				else if (v[1] < up - 1)
					Q1 = 30000;
				f1_list->Add(x, v[1]);
				mytable->Fill_Table(j, n, h, x, v[1], v_, e, 0, 0);
				n++, j++;
				v[0] = v[1];
			}
		}

  
		std::string colors[4] = { "Red","Black","Brown","LightBlue" };
		String^ str = gcnew System::String(colors[push].c_str());
		Color curve_color = Color::FromName(str);
		LineItem^ Curve1 = panel->AddCurve("Численное решение", f1_list, curve_color, SymbolType::None);
	//	LineItem^ Curve2 = panel->AddCurve("Точное Решение", f2_list, Color::Green, SymbolType::None);
		Curve1->Line->Width = 0.05f;
	//	Curve2->Line->Width = 0.05f;
		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
		Reference(0, 0, h, h, olpmax, x_olp);
		push++;
	}
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox4->Text = "10000";
		textBox3->Text = "0,00001";
		textBox5->Text = "10";
		textBox2->Text = "22";
		textBox6->Text = "0,000000000001";
		textBox7->Text = "0,0001";
		textBox1->Text = "1";
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
	private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Task^ mytask = gcnew Task;
		mytask->ShowDialog();
	}
	private: System::Void TextBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
		zedGraphControl1->GraphPane->CurveList->Clear();
		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
		push = 0;
	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Task^ mytask = gcnew Task;
		mytask->ShowDialog();
	}
};
}