#pragma once


namespace TestPlots {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Table
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
		void Fill_Table(int i, int j, double value) {
			dataGridView1[i, j]->Value = value;
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ xi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ hi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ vi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ v_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	protected:
















	protected:









	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->i, this->xi,
					this->hi, this->vi, this->v_i, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(1028, 594);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Table::DataGridView1_CellContentClick_1);
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->Name = L"i";
			this->i->ReadOnly = true;
			this->i->Width = 120;
			// 
			// xi
			// 
			this->xi->HeaderText = L"x[i]";
			this->xi->Name = L"xi";
			this->xi->ReadOnly = true;
			this->xi->Width = 120;
			// 
			// hi
			// 
			this->hi->HeaderText = L"h[i]";
			this->hi->Name = L"hi";
			this->hi->ReadOnly = true;
			this->hi->Width = 120;
			// 
			// vi
			// 
			this->vi->HeaderText = L"v[i]";
			this->vi->Name = L"vi";
			this->vi->ReadOnly = true;
			this->vi->Width = 120;
			// 
			// v_i
			// 
			this->v_i->HeaderText = L"v^[i]";
			this->v_i->Name = L"v_i";
			this->v_i->ReadOnly = true;
			this->v_i->Width = 120;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"v[i]-v^[i]";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 120;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"ќценка л.п";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 120;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"v[i]кор";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 120;
			// 
			// Table
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 594);
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
