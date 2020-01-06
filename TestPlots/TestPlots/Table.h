#pragma once


namespace TestPlots {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл¤ Table
	/// </summary>
	public ref class Table : public System::Windows::Forms::Form
	{
	public:
		Table(void)
		{
			InitializeComponent();
			//dataGridView1->Rows->Add();
		}
		void Create_Table(int i, int j)
		{
			dataGridView1->ColumnCount = i;
			dataGridView1->RowCount = j;
		}
		void Fill_Line(int i, int j, double value) {
			dataGridView1[i, j]->Value = value;
		}
		void Fill_Table(int j, int n, double h, double x, double v, double v_, double e, double c1, double c2)
		{
			Fill_Line(0, j, n);
			Fill_Line(1, j, x);
			Fill_Line(2, j, h);//здесь вместо нул¤ в общем случае x
			Fill_Line(3, j, v);
			Fill_Line(4, j, v_);
			Fill_Line(5, j, v-v_);
			Fill_Line(6, j, e);
			Fill_Line(7, j, c1);
			Fill_Line(8, j, c2);
		}
		void Remove_Tabe(int j)
		{
			dataGridView1->RowCount = j;
		}
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Table()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ hi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ xi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ vi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ v_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c2;





























































	protected:
















	protected:









	private:
		/// <summary>
		/// ќб¤зательна¤ переменна¤ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл¤ поддержки конструктора Ч не измен¤йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->i, this->hi,
					this->xi, this->vi, this->v_i, this->Column6, this->Column8, this->c1, this->c2
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(1121, 594);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Table::DataGridView1_CellContentClick_1);
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->Name = L"i";
			this->i->ReadOnly = true;
			this->i->Width = 50;
			// 
			// hi
			// 
			this->hi->HeaderText = L"x[i]";
			this->hi->Name = L"hi";
			this->hi->ReadOnly = true;
			this->hi->Width = 130;
			// 
			// xi
			// 
			this->xi->HeaderText = L"h[i]";
			this->xi->Name = L"xi";
			this->xi->ReadOnly = true;
			this->xi->Width = 130;
			// 
			// vi
			// 
			this->vi->HeaderText = L"v[i]";
			this->vi->Name = L"vi";
			this->vi->ReadOnly = true;
			this->vi->Width = 130;
			// 
			// v_i
			// 
			this->v_i->HeaderText = L"v^[i]";
			this->v_i->Name = L"v_i";
			this->v_i->ReadOnly = true;
			this->v_i->Width = 130;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"v[i]-v^[i]";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 130;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"olp";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 130;
			// 
			// c1
			// 
			this->c1->HeaderText = L"”в. шага";
			this->c1->Name = L"c1";
			this->c1->ReadOnly = true;
			this->c1->Width = 60;
			// 
			// c2
			// 
			this->c2->HeaderText = L"”м.шага";
			this->c2->Name = L"c2";
			this->c2->ReadOnly = true;
			this->c2->Width = 60;
			// 
			// Table
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1121, 594);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Table";
			this->Text = L"Table";
			this->Load += gcnew System::EventHandler(this, &Table::Table_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Table_Load(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void DataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) \
	{
		/*int i = 0;
		int n = 0;
		int j = 0;
		dataGridView1->Rows->Add();
		for (int n = 0; n < 32; n++)
		{
			if (i==8)
			{
				i = 0;
				j++;
				dataGridView1->Rows->Add();
			}
			dataGridView1[i, j]->Value = i + j;
			i++;
		}*/
		/*int i = Convert::ToInt32(textBox1->Text);
		int j = Convert::ToInt32(textBox2->Text);
		double value= Convert::ToDouble(textBox3->Text);
		if (i == 7)
			dataGridView1->Rows->Add();
		dataGridView1[i, j]->Value = value;*/
	}
	};
}