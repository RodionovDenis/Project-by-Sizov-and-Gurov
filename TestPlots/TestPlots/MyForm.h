#pragma once
#include "Table.h"
#include <cmath>

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
			zedGraphControl1->GraphPane->Title ->Text= "Зависимость температуры от времени";
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label9;










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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 18);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Задача";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(206, 18);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Максимальное число шагов";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 18);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Начальный шаг";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(8, 197);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(86, 24);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(8, 125);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(86, 24);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(6, 266);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(86, 24);
			this->textBox5->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->ForeColor = System::Drawing::Color::DarkBlue;
			this->button2->Location = System::Drawing::Point(66, 474);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 33);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(313, 28);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(711, 549);
			this->zedGraphControl1->TabIndex = 15;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::ZedGraphControl1_Load);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(147, 574);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(73, 24);
			this->textBox1->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(5, 577);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 18);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Прошло итераций ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(5, 245);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 18);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Начальные условия";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SteelBlue;
			this->label7->Location = System::Drawing::Point(77, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(165, 18);
			this->label7->TabIndex = 21;
			this->label7->Text = L"du/dx=0.25(Q1-Q2)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(5, 329);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(156, 18);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Значение регулятора";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(8, 350);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(86, 24);
			this->textBox2->TabIndex = 23;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->ForeColor = System::Drawing::Color::DarkBlue;
			this->button1->Location = System::Drawing::Point(66, 513);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 33);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Показать таблицу";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(8, 422);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(86, 24);
			this->textBox6->TabIndex = 25;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(7, 401);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(204, 18);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Контроль лок. погрешности";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(189, 49);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 38);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Push";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label9->Location = System::Drawing::Point(5, 49);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(178, 38);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Использовать стандартные параметры";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(1066, 638);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
		double f(double x, double u, int Q1)
		{
			return (0.25 * (Q1 - 500 * u));
		}
		double u1(double x, double Q1)
		{
			return(0.002*Q1+(10-0.002*Q1)*exp(-125*x));
		}
		double u2(double x)
		{
			return (10 * exp(-125 * x) + 15.6);
		}
		int CheckLocalFault(double S, double E,double h) 
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
		double RK4(double &x, double v, double h, int Q1)
		{
			double k1 = f(x, v, Q1);
			double k2 = f(x + h / 2, v + h / 2 * k1,Q1);
			double k3 = f(x + h / 2,v+h/2*k2,Q1);
			double k4 = f(x+h,v+h*k3,Q1);
			x = x + h;
			v = v + h / 6*(k1 + 2 * k2 + 2 * k3 + k4);
			return v;
		}
		double RK4_(double x, double v, double h, int Q1)
		{
			for (int i = 0; i < 2; i++)
			{
				double k1 = f(x, v, Q1);
				double k2 = f(x + h / 4, v + h / 4 * k1, Q1);
				double k3 = f(x + h / 4, v + h / 4 * k2, Q1);
				double k4 = f(x + h / 2, v + h / 2 * k3, Q1);
				x = x + h / 2;
				v = v + h / 12 * (k1 + 2 * k2 + 2 * k3 + k4);
			}
			return v;
		}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ q) {
		//mytable->Clear_Table();
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		int n = 1,j=0;
		double x = 0;
		double xmax = Convert::ToDouble(textBox4->Text);
		double h = Convert::ToDouble(textBox3->Text);//шаг
		double up = Convert::ToDouble(textBox2->Text);//значение регулятора
		double u0 = Convert::ToDouble(textBox5->Text);
		double E= Convert::ToDouble(textBox6->Text);//контроль лок. погрешности
		double v[2] = { u0 ,u0};
		double v_ = u0;
		double S=v[0]-v_, e=S*16;//вспомогательная величина и оценка лок.погершности
		int Q1;
		int check;
		if (u0 <= up+1)
			Q1 = 30000;
		if (u0 > up + 1)
			Q1 = 0;
		int Q1_ = Q1;
		//заполним начальные условия в таблице
		f1_list->Add(x, v[1]);
		mytable->Create_Table(8,xmax);
		mytable->Fill_Table(0, j, n);
		mytable->Fill_Table(1, j, 0);//здесь вместо нуля в общем случае x
		mytable->Fill_Table(2, j, h);
		mytable->Fill_Table(3, j, v[0]);
		mytable->Fill_Table(4, j, v_);
		mytable->Fill_Table(5, j, S);
		mytable->Fill_Table(6, j, e);
		mytable->Fill_Table(7, j, v[1]+e);
		n++,j++;
		for (int i=0;i<xmax-1;i++)
		{
			double xn = x;//сохраняем предыдущий икс так как после RK значение х поменяется
			v[1] = RK4(x,v[0],h,Q1);
			v_ = RK4_(xn, v[0], h, Q1);
			S = (v[1]-v_) / 15;
			e = S * 16;
			check = CheckLocalFault(S, E, h);
			if (check == 0)
			{
				x = x - h;
				h = h / 2;
				i--;
				continue;
			}
			if (v[1] >= up + 1)
				Q1 = 0;
			if (v[1] < up - 1)
				Q1 = 30000;
			if (check == 1)
			{
				f1_list->Add(x, v[1]);
				mytable->Fill_Table(0, j, n);
				mytable->Fill_Table(1, j, x);//здесь вместо нуля в общем случае x
				mytable->Fill_Table(2, j, h);
				mytable->Fill_Table(3, j, v[1]);
				mytable->Fill_Table(4, j, v_);
				mytable->Fill_Table(5, j, S);
				mytable->Fill_Table(6, j, e);
				mytable->Fill_Table(7, j, v[1] + e);
				n++,j++;
			}
			if (check == 2)
			{
				f1_list->Add(x, v[1]);
				mytable->Fill_Table(0, j, n);
				mytable->Fill_Table(1, j, x);//здесь вместо нуля в общем случае x
				mytable->Fill_Table(2, j, h);
				mytable->Fill_Table(3, j, v[1]);
				mytable->Fill_Table(4, j, v_);
				mytable->Fill_Table(5, j, S);
				mytable->Fill_Table(6, j, e);
				mytable->Fill_Table(7, j, v[1] + e);
				h = 2*h;
				n++,j++;
			}
			v[0] = v[1];
		}
		h = 0.00001;
		double y = 10;
		long double x1 = 0.001987690874387997; //при ку = 30к график пересекает у = 21
		long double x2 = 0.004929489115390535; // при ку = 0 график пересекает у = 21
		long double rank = 0.002408840742271373; // нарушение дифференцируемости у = 23
		long double T = x2 - x1; // период так называемый
		int i = 0;
		long double x_new = 0;
		for (long double x_=0;x_<x;x_=x_+h)
		{	
			x_new = x_ - i * T;
			if (x_new <= rank)
			{
				f2_list->Add(x_, u1(x_new, 30000));
				continue;
			}
			else if (x_new <= x2)
			{
				f2_list->Add(x_, u2(x_new));
				continue;
			}
			i++;
		}
		LineItem ^Curve1 = panel->AddCurve("F1", f1_list, Color::Red, SymbolType::None);
		LineItem ^Curve2 = panel->AddCurve("F2", f2_list, Color::Green, SymbolType::None);
		Curve1->Line->Width = 0.05f;
		Curve2->Line->Width = 0.05f;
		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
	}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Text = "1000";
	textBox3->Text = "0,0001";
	textBox5->Text = "10";
	textBox2->Text = "22";
	textBox6->Text = "0,0001";
}
private: System::Void ZedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

}
};
}
