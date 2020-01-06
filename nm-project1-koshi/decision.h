#pragma once

#include "RungeKutt.h"
#include "table.h"

namespace nmproject1koshi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для decision
	/// </summary>
	public ref class decision : public System::Windows::Forms::Form
	{
	public:
		decision(void)
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
		~decision()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label_online;
	private: System::Windows::Forms::TextBox^ textbox_online;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(decision::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label_online = (gcnew System::Windows::Forms::Label());
			this->textbox_online = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(14, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Условие задачи";
			this->label1->Click += gcnew System::EventHandler(this, &decision::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(16, 34);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(230, 67);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(16, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Начальные условия:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(39, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Начальная абцисса";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(39, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Максимальная абцисса";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(39, 240);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(152, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Точность выхода за границу";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(39, 269);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Начальное значение";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(39, 299);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Начальный шаг";
			// 
			// label_online
			// 
			this->label_online->AutoSize = true;
			this->label_online->Location = System::Drawing::Point(39, 353);
			this->label_online->Name = L"label_online";
			this->label_online->Size = System::Drawing::Size(86, 13);
			this->label_online->TabIndex = 0;
			this->label_online->Text = L"Контроль лок.погрешности";
			// 
			// textbox_online
			// 
			this->textbox_online->Location = System::Drawing::Point(212, 348);
			this->textbox_online->Name = L"textbox_online";
			this->textbox_online->Size = System::Drawing::Size(57, 20);
			this->textbox_online->TabIndex = 0;
			this->textbox_online->Text = L"0,00001";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(42, 153);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(196, 17);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"с учетом локальной погрешности";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &decision::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(176, 114);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"по умолчанию";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &decision::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(212, 180);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(56, 20);
			this->textBox1->TabIndex = 11;
			this->textBox1->Text = L"1";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(212, 209);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(56, 20);
			this->textBox2->TabIndex = 12;
			this->textBox2->Text = L"1,5";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(212, 237);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(56, 20);
			this->textBox3->TabIndex = 13;
			this->textBox3->Text = L"0,01";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(212, 266);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(56, 20);
			this->textBox4->TabIndex = 14;
			this->textBox4->Text = L"1";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(212, 292);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(56, 20);
			this->textBox5->TabIndex = 15;
			this->textBox5->Text = L"0,01";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(20, 382);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 59);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Построить график. Показать справку";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &decision::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(176, 382);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 59);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Сбросить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &decision::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(82, 447);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 51);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Показать таблицу";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &decision::button4_Click);
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(316, 131);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(530, 379);
			this->zedGraphControl1->TabIndex = 19;
			this->zedGraphControl1->GraphPane->XAxis->Title->Text = "x";
			this->zedGraphControl1->GraphPane->YAxis->Title->Text = "V";
			this->zedGraphControl1->GraphPane->Title->Text = "Основная задача";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Location = System::Drawing::Point(326, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(173, 106);
			this->label8->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(39, 328);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(170, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Максимальное кол-во итераций";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(212, 321);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(56, 20);
			this->textBox6->TabIndex = 21;
			this->textBox6->Text = L"1000";
			// 
			// decision
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(856, 522);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name = L"decision";
			this->Text = L"project1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked)
		{
			this->Controls->Add(label_online);
			this->Controls->Add(textbox_online);
		}
		else
		{
			this->Controls->Remove(label_online);
			this->Controls->Remove(textbox_online);
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		zedGraphControl1->GraphPane->CurveList->Clear();

		nmpproject1koshi::Table^ table;
		table = gcnew nmpproject1koshi::Table();

		int n = Convert::ToInt32(textBox6->Text); //максимальное количество шагов

		//начальные значения
		
		double x0 = Convert::ToDouble(textBox1->Text);
		double xmax = Convert::ToDouble(textBox2->Text);
		double accuracy = Convert::ToDouble(textBox3->Text);
		double u0 = Convert::ToDouble(textBox4->Text);
		double h0 = Convert::ToDouble(textBox5->Text);

		ZedGraph::PointPairList ^ list1 = gcnew ZedGraph::PointPairList(); //список точек

		double x = x0;
		double v = u0;

		double v_current = u0, v_, s;

		double x_current = x0;

		int plus = 0, minus = 0;

		list1->Add(x, v);

		table->dataGridView1->Rows->Add(0, x0, h0, u0, u0, 0, 0, 0, 0);

		double hmax = h0;
		double hmin = h0;
		double olpmax = 0;
		double x_olp = 0;

		int i = 1;

		if (!checkBox1->Checked)
		{
			for (i; i <= n && x <= xmax; i++)
			{
				
				v = PK4(x, v, h0);
				v_ = PK4(x, v_current, h0 / 2);
				v_ = PK4(x + h0 / 2, v_, h0 / 2);
				x = x + h0;
				if (x > xmax)
					break;
				double olp = GetS(v_, v) * 16;
				if (olp > olpmax)
				{
					olpmax = olp;
					x_olp = x;
				}
				table->dataGridView1->Rows->Add(i, x, h0, v, v_, v_ - v, olp, 0, 0);

				list1->Add(x, v);
				v_current = v; //запоминание текущей точки
			}
			int j = 2;
			while (x > xmax + accuracy)
			{
				x = x - h0;
				h0 = h0 / j;
				x = x + h0;
				minus++;
				j++;
			}
			list1->Add(x + h0, PK4(x, v_current, h0));
			v = PK4(x, v, h0);
			v_ = PK4(x, v_current, h0 / 2);
			v_ = PK4(x + h0 / 2, v_, h0 / 2);
			double olp = GetS(v_, v) * 16;
			table->dataGridView1->Rows->Add(i, x, h0, v, v_, v_ - v, olp, 0, 0);

			ZedGraph::LineItem^ myfunc = zedGraphControl1->GraphPane->AddCurve("Решение с постоянным шагом x0 = " + Convert::ToString(x0) + ", u0 = " + Convert::ToString(u0), list1, System::Drawing::Color::Blue, ZedGraph::SymbolType::None);
		}
		else
		{
			double e = Convert::ToDouble(textbox_online->Text);
			for (i; i <= n && x < xmax; i++)
			{
				v = PK4(x, v_current, h0);
				v_ = PK4(x, v_current, h0 / 2);
				v_ = PK4(x + h0 / 2, v_, h0 / 2);
				s = GetS(v_, v);
				if (s > e)
				{
					h0 = h0 / 2;
					i--;
					minus++;
				}
				else
				{
					x += h0;
					if (x > xmax)
						break;
					if (h0 > hmax)
						hmax = h0;
					if (h0 < hmin)
						hmin = h0;
					double olp = s * 16;
					if (olp > olpmax)
					{
						olpmax = olp;
						x_olp = x;
					}
					table->dataGridView1->Rows->Add(i, x, h0, v, v_, v_ - v, olp, plus, minus);
					table->dataGridView1->Rows[i - 1]->Cells[2]->Value = h0;
					table->dataGridView1->Rows[i - 1]->Cells[7]->Value = plus;
					table->dataGridView1->Rows[i - 1]->Cells[8]->Value = minus;
					v_current = v; //запоминание текущей точки
					list1->Add(x, v);
					if (s < e / 15)
					{
						h0 = 2 * h0;
						plus++;
					}
				}
			}
			int j = 2;
			while (x > xmax + accuracy)
			{
				x = x - h0;
				h0 = h0 / j;
				x = x + h0;
				minus++;
				j++;
			}
			list1->Add(x + h0, PK4(x, v_current, h0));
			v = PK4(x, v, h0);
			v_ = PK4(x, v_current, h0 / 2);
			v_ = PK4(x + h0 / 2, v_, h0 / 2);
			double olp = GetS(v_, v) * 16;
			table->dataGridView1->Rows->Add(i, x, h0, v, v_, v_ - v, olp, plus, minus);
			ZedGraph::LineItem^ myfunc = zedGraphControl1->GraphPane->AddCurve("Решение с переменным шагом x0 = " + Convert::ToString(x0) + ", u0 = " + Convert::ToString(u0), list1, System::Drawing::Color::Red, ZedGraph::SymbolType::None);
		}

		zedGraphControl1->GraphPane->XAxis->Scale->Min = x0;
		zedGraphControl1->GraphPane->XAxis->Scale->Max = xmax;

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();

		this->label8->Text = L"Справка: \r\n\r\nКоличество итераций:"+i+"\r\nЧисло удвоений:"+plus+"\r\nЧисло делений:"+minus+"\r\nМаксимальный "
			L"шаг:"+hmax+"\r\nМинимальный шаг:"+hmin+"\r\nМаксимальная ошибка: "+olpmax+" в точке: "+x_olp+"";
		this->Controls->Add(this->label8);
		table->Show();

	}
private: System::Void toolStripContainer1_TopToolStripPanel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripContainer1_ContentPanel_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	textBox1->Text = Convert::ToString("1");
	textBox2->Text = Convert::ToString("1,5");
	textBox3->Text = Convert::ToString("0,01");
	textBox4->Text = Convert::ToString("1");
	textBox5->Text = Convert::ToString("0,01");
	textBox6->Text = Convert::ToString("1000");
	textbox_online->Text = Convert::ToString("0,00001");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = Convert::ToString("");
	textBox2->Text = Convert::ToString("");
	textBox3->Text = Convert::ToString("");
	textBox4->Text = Convert::ToString("");
	textBox5->Text = Convert::ToString("");
	textBox6->Text = Convert::ToString("");
	textbox_online->Text = Convert::ToString("");
	zedGraphControl1->GraphPane->CurveList->Clear();
	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();
	this->Controls->Remove(this->label8);

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
