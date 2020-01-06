#pragma once
#define pi            3.14159265 
#include <math.h> 
namespace DirihleZeidel {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label8;
	protected:
	protected:
	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 191);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(267, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"1";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 230);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(267, 20);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"0,00000001";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(0, 0);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Задача:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Максимальное число шагов:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Точность метода:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(0, 0);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 0;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(12, 82);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(267, 26);
			this->textBox7->TabIndex = 18;
			this->textBox7->Text = L"Δu(x,y) = - f(x,y)  , x∈(a,b)  , y∈(c,d)  ";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(12, 114);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(267, 26);
			this->textBox8->TabIndex = 19;
			this->textBox8->Text = L"a = -1, b = 1 , c = -1 , d = 1";
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::Window;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox11->Location = System::Drawing::Point(12, 146);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(267, 26);
			this->textBox11->TabIndex = 22;
			this->textBox11->Text = L" Uтест = 1-x^2-y^2";
			// 
			// button1
			// 
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button1->Location = System::Drawing::Point(12, 421);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 38);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->Format = L"N3";
			dataGridViewCellStyle1->NullValue = nullptr;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->Format = L"N3";
			dataGridViewCellStyle2->NullValue = nullptr;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->Format = L"N3";
			dataGridViewCellStyle3->NullValue = nullptr;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->Location = System::Drawing::Point(371, 61);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(835, 467);
			this->dataGridView1->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 253);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(229, 13);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Количество проведенных итераций метода:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 269);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(267, 20);
			this->textBox1->TabIndex = 24;
			this->textBox1->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 292);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 13);
			this->label6->TabIndex = 27;
			this->label6->Text = L"| V(s) - V(s-1) |";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(12, 308);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(267, 20);
			this->textBox6->TabIndex = 26;
			this->textBox6->Text = L"0";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(12, 386);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(267, 20);
			this->textBox9->TabIndex = 28;
			this->textBox9->Text = L"0";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(12, 347);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(267, 20);
			this->textBox10->TabIndex = 29;
			this->textBox10->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 292);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 30;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 370);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 13);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Невязка на выходе:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 331);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(111, 13);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Общая погрешность";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1270, 626);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DiffLab";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		double f(double x, double y)
		{
			return -4;
		}
		double uTest(double x, double y)
		{
			return (1 - x * x - y * y);
		}
		void DrawGraph()
		{
			int nmax = Convert::ToInt32(textBox2->Text); // максимальное число итераций(вводим)
			double eps = Convert::ToDouble(textBox3->Text); // точность метода(вводим)
			// Граничные условия:
			double a = -1.0;
			double b = 1.0;
			double c = -1.0;
			double d = 1.0;
			// Вспомогательные переменные:
			double h = 0.5;
			double k = 0.5;
			double ai = 4.0;
			double bi = 4.0;
			double ci = -16.0;
			int p, r; //индексы
			int i, j; //индексы
			int iter = 0; // счетчик итераций
			double eps_max = 0; // текущее значение прироста
			double eps_cur = 0; // для подсчета текущего значения прироста
			double u_old; // старое значение преобразуемой компоненты вектора u
			double u_new; // новое значение преобразуемой компоненты вектора u 
			bool flag = false; // условие остановки
			double u[5][5];
			double R[5][5] = {};
			double sum = 0;
			//краевые условия
			for (i = 0; i < 5; i++)
			{
				u[i][0] = uTest(-1.0, i * k - 1);
			}
			for (j = 0; j < 5; j++)
			{
				u[4][j] = uTest(j * h - 1, 1.0);
			}
			for (j = 0; j < 5; j++)
			{
				u[0][j] = uTest(j * h - 1, -1.0);
			}
			for (i = 0; i < 5; i++)
			{
				u[i][4] = uTest(1.0, i * k - 1);
			}
			for (i = 1; i < 4; i++)
			{
				for (j = 1; j < 4; j++)
				{
					u[i][j] = 0;
				}
			}

			do
			{
				eps_max = 0;
				for (i = 1; i < 4; i++)
				{
					for (j = 1; j < 4; j++)
					{
						u_old = u[i][j];
						u_new = -(bi * (u[i + 1][j] + u[i - 1][j]) + ai * (u[i][j + 1] + u[i][j - 1]));
						R[i][j] = ci * u[i][j] + (bi * (u[i + 1][j] + u[i - 1][j]) + ai * (u[i][j + 1] + u[i][j - 1])) - f(h * j - 1, k * i - 1);
						u_new = u_new + f(h * j - 1, k * i - 1);
						u_new = u_new / ci;
						eps_cur = fabs(u_old - u_new);
						if (eps_cur > eps_max)
						{
							eps_max = eps_cur;
						}
						u[i][j] = u_new;
					}
				}
				iter++;
				if ((eps_max < eps) || (iter >= nmax))
				{
					flag = true;
				}
			} while (!flag);
			this->textBox10->Text = Convert::ToString(eps_cur);
			double maxeps = 0;
			double cureps = 0;
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 5; j++)
				{
					cureps = fabs(uTest(j * h - 1, i * k - 1) - u[i][j]);
					double res = sqrt(sum);
					if (cureps >= maxeps)
					{
						maxeps = cureps;
					}
				}
			}
			for (i = 1; i < 4; i++)
			{
				for (j = 1; j < 4; j++)
				{
					sum += pow(R[i][j], 2);
				}
			}
			double res = sqrt(sum);
			this->textBox9->Text = Convert::ToString(res);
			this->textBox1->Text = Convert::ToString(iter);
			this->textBox6->Text = Convert::ToString(maxeps);
			this->dataGridView1->ColumnCount = 6;
			this->dataGridView1->RowCount = 6;
			dataGridView1->Columns[0]->HeaderText = "i";
			dataGridView1->Rows[0]->HeaderCell->Value = "j";
			dataGridView1->Rows[0]->Cells[0]->Value = "Y/X";
			for (int i = 1; i < 6; i++)
			{
				for (int j = 1; j < 6; j++)
				{

					dataGridView1->Rows[i]->Cells[j]->Value = u[5 - i][j - 1];
				}
			}
			for (int i = 1; i <= 5; i++)
			{
				dataGridView1->Rows[0]->Cells[i]->Value = (i - 1) * h - 1;
				dataGridView1->Columns[i]->HeaderText = Convert::ToString(i - 1);
			}
			dataGridView1->RowHeadersVisible = true;
			p = 1;
			for (int j = 5; j >= 1; j--)
			{
				dataGridView1->Rows[p]->Cells[0]->Value = (j - 1) * k - 1;
				dataGridView1->Rows[p]->HeaderCell->Value = Convert::ToString(j - 1);
				p++;
			}
		}
	private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		DrawGraph();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}