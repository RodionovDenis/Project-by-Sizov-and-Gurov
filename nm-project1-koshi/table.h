#pragma once

namespace nmpproject1koshi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Table
	/// </summary>
	public ref class Table : public System::Windows::Forms::Form
	{
	public:
		Table(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	public:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Table()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ i;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ h_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V2_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ raznost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ОЛП;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C2;



























	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->h_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V2_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->raznost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ОЛП = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->i, this->x_i,
					this->h_i, this->V_i, this->V2_i, this->raznost, this->ОЛП, this->C1, this->C2
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(946, 536);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Table::dataGridView1_CellContentClick);
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->Name = L"i";
			this->i->Width = 102;
			// 
			// x_i
			// 
			this->x_i->HeaderText = L"x_i";
			this->x_i->Name = L"x_i";
			// 
			// h_i
			// 
			this->h_i->HeaderText = L"h_i";
			this->h_i->Name = L"h_i";
			// 
			// V_i
			// 
			this->V_i->HeaderText = L"V_i";
			this->V_i->Name = L"V_i";
			// 
			// V2_i
			// 
			this->V2_i->HeaderText = L"V2_i";
			this->V2_i->Name = L"V2_i";
			// 
			// raznost
			// 
			this->raznost->HeaderText = L"v2_i - v_i";
			this->raznost->Name = L"raznost";
			// 
			// ОЛП
			// 
			this->ОЛП->HeaderText = L"ОПЛ";
			this->ОЛП->Name = L"ОЛП";
			// 
			// C1
			// 
			this->C1->HeaderText = L"C1";
			this->C1->Name = L"C1";
			// 
			// C2
			// 
			this->C2->HeaderText = L"C2";
			this->C2->Name = L"C2";
			// 
			// Table
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(946, 536);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Table";
			this->Text = L"Table";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
