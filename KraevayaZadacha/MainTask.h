#pragma once
#include "Task.h"
#include "Koefficient.h"

namespace KraevayaZadacha {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainTask
	/// </summary>
	public ref class MainTask : public System::Windows::Forms::Form
	{

		double E = 0.25;
		double m1 = 0;

	private: ZedGraph::ZedGraphControl^ zedGraphControl2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;

		double m2 = 1;

	public:
		MainTask(void)
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
		~MainTask()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Постановка задачи";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainTask::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Размер сетки:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(99, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(48, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"1000";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(307, 41);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(178, 50);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Решить основную задачу";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainTask::button2_Click);
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(873, 1);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(360, 517);
			this->zedGraphControl1->TabIndex = 4;
			this->zedGraphControl1->GraphPane->Title->Text = "Численное решение";
			this->zedGraphControl1->GraphPane->XAxis->Title->Text = "x";
			this->zedGraphControl1->GraphPane->YAxis->Title->Text = "V(x)";
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(491, 1);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(376, 516);
			this->zedGraphControl2->TabIndex = 5;
			this->zedGraphControl2->Load += gcnew System::EventHandler(this, &MainTask::zedGraphControl2_Load);
			this->zedGraphControl2->GraphPane->Title->Text = "Разность решений";
			this->zedGraphControl2->GraphPane->XAxis->Title->Text = "x";
			this->zedGraphControl2->GraphPane->YAxis->Title->Text = "V(x) - U(x)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(7, 373);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Справка:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(7, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"\r\n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::AliceBlue;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(190, 380);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 16);
			this->label4->TabIndex = 9;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(133, 41);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(168, 49);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Решить тестовую задачу";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainTask::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(3, 96);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(482, 271);
			this->dataGridView1->TabIndex = 10;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"n";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 40;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"x[i]";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"v[i]";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"u[i]";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"u[i] - v[i]";
			this->Column5->Name = L"Column5";
			// 
			// MainTask
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1240, 519);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->zedGraphControl2);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MainTask";
			this->Text = L"MainTask";
			this->Load += gcnew System::EventHandler(this, &MainTask::MainTask_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Task^ task = gcnew Task();
		task->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		dataGridView1->Rows->Clear();

		zedGraphControl1->GraphPane->CurveList->Clear();
		zedGraphControl2->GraphPane->CurveList->Clear();

		int n = Convert::ToInt32(textBox1->Text);
		int n2 = 2 * n;
		double h = 1.0 / n;
		double h2 = 1.0 / n2;

		double* vcurve = v(n, E, m1, m2,0);
		double* v2curve = v(n2, E, m1, m2,0);

		//посроение графика

		double maxerror = 0;
		double xmax = 0;

		ZedGraph::PointPairList^ list1 = gcnew ZedGraph::PointPairList();
		ZedGraph::PointPairList^ list2 = gcnew ZedGraph::PointPairList();
		ZedGraph::PointPairList^ list3 = gcnew ZedGraph::PointPairList();

		list1->Add(0, vcurve[0]);
		list2->Add(0, v2curve[0]);
		list3->Add(0, v2curve[0] - vcurve[0]);

		dataGridView1->Rows->Add(0,0, vcurve[0], v2curve[0], v2curve[0]-vcurve[0]);

		for (int i = 1,j = 1; i <= n; i++, j = j + 2)
		{
			double xn = i * h;

			double error = fabs(v2curve[i * 2] - vcurve[i]);

			if (error > maxerror)
			{
				maxerror = error;
				xmax = xn;
			}
			list1->Add(xn, vcurve[i]);

			list2->Add(j * h2, v2curve[j]);
			list2->Add((j+1) * h2, v2curve[j+1]);

			list3->Add(xn, fabs(v2curve[i * 2]-vcurve[i]));
			dataGridView1->Rows->Add(i, i * h, vcurve[i], v2curve[i * 2], error);
		}

		ZedGraph::LineItem^ v1 = zedGraphControl1->GraphPane->AddCurve("v(x) - шаг n", list1, 
			System::Drawing::Color::Blue, ZedGraph::SymbolType::None);
		ZedGraph::LineItem^ v2 = zedGraphControl1->GraphPane->AddCurve("v2(x) - шаг 2*n", list2,
			System::Drawing::Color::Red, ZedGraph::SymbolType::None);
		ZedGraph::LineItem^ v3 = zedGraphControl2->GraphPane->AddCurve("v2(x) - v(x)", list3,
			System::Drawing::Color::Black, ZedGraph::SymbolType::None);
		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
		zedGraphControl2->AxisChange();
		zedGraphControl2->Invalidate();

		//справка

		label4->Text = L"n = "+n+"\r\n\r\nдолжно быть e = 0.5*E-6\r\n\r\nнаблюдается\r\n e = "+maxerror+"\r\n\r\nв точке x = "+xmax+"\r\n";
		Controls->Add(label4);

	}
private: System::Void MainTask_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void zedGraphControl2_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


	dataGridView1->Rows->Clear();

	zedGraphControl1->GraphPane->CurveList->Clear();
	zedGraphControl2->GraphPane->CurveList->Clear();

	int n = Convert::ToInt32(textBox1->Text);
	double h = 1.0 / n;

	double* vcurve = v(n, E, m1, m2,1);
	double* u = new double[n + 1];

	//посроение графика

	double maxerror = 0;
	double xmax = 0;

	ZedGraph::PointPairList^ list1 = gcnew ZedGraph::PointPairList();
	ZedGraph::PointPairList^ list2 = gcnew ZedGraph::PointPairList();
	ZedGraph::PointPairList^ list3 = gcnew ZedGraph::PointPairList();

	for (int i = 0; i <= n; i++)
	{
		double xn = i * h;

		//получение точного решения:

		if (xn < E)
			u[i] = u1(xn);
		else
			u[i] = u2(xn);

		double error = fabs(u[i] - vcurve[i]);

		if (error > maxerror)
		{
			maxerror = error;
			xmax = xn;
		}

		list1->Add(xn, vcurve[i]);

		list2->Add(xn, u[i]);

		list3->Add(xn, error);
		dataGridView1->Rows->Add(i, i * h, vcurve[i], u[i], error);
	}

	ZedGraph::LineItem^ v1 = zedGraphControl1->GraphPane->AddCurve("v(x) - шаг n", list1,
		System::Drawing::Color::Blue, ZedGraph::SymbolType::None);
	ZedGraph::LineItem^ v2 = zedGraphControl1->GraphPane->AddCurve("u(x) - точное решение", list2,
		System::Drawing::Color::Red, ZedGraph::SymbolType::None);
	ZedGraph::LineItem^ v3 = zedGraphControl2->GraphPane->AddCurve("u(x) - v(x)", list3,
		System::Drawing::Color::Black, ZedGraph::SymbolType::None);
	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();
	zedGraphControl2->AxisChange();
	zedGraphControl2->Invalidate();

	//справка

	label4->Text = L"n = " + n + "\r\n\r\nдолжно быть e = 0.5*E-6\r\n\r\nнаблюдается\r\n e = " + maxerror + "\r\n\r\nв точке x = " + xmax + "\r\n";
	Controls->Add(label4);

}
};
}
