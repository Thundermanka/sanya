#pragma once

namespace Visual6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Menu;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(55, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(721, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Дан двумерный массив NxM. Посчитать сумму отрицательных элементов";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введите N:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(56, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Введите M:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(157, 92);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(68, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(157, 117);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(68, 22);
			this->textBox2->TabIndex = 4;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(33, 185);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(760, 425);
			this->dataGridView1->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(77, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Введите массив:";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(891, 378);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 41);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Посчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(947, 441);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Ответ:";
			this->label5->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1001, 437);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(68, 22);
			this->textBox3->TabIndex = 9;
			this->textBox3->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(245, 86);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 59);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Создать сетку";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1075, 597);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button2_Click(System::Object^
		sender, System::EventArgs^ e) {

		//Считываем размер массива:
		int n, m;
		n = System::Convert::ToInt32(textBox1->Text);
		m = System::Convert::ToInt32(textBox2->Text);

		//Строим сетку
		dataGridView1->RowCount = n;
		dataGridView1->ColumnCount = m;

		//активация второй кнопки
		button1->Enabled = true;//активация нажатия на кнопку


	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		int n, m, a[100][100];
		n = System::Convert::ToInt32(textBox1->Text);
		m = System::Convert::ToInt32(textBox2->Text);

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				a[i][j] = System::Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
			}
		}

		label5->Visible = true;//активация видимости ответа на форме
		textBox3->Visible = true;

		textBox3->Text = Convert::ToString(reshenie(n, m, a));

	}

		   int reshenie(int n, int m, int a[100][100]) {
			   int sum;
			   for (int i = 0; i < n; i++) {
				   for (int j = 0; j < m; j++)
				   {
					   if (a[i][j] < 0)
						   sum = sum + a[i][j];
				   }
			   }

			   return sum;
		   }
	};
}