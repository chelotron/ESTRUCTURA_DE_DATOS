#pragma once

namespace URIDE01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_Inicio1
	/// </summary>
	public ref class Form_Inicio1 : public System::Windows::Forms::Form
	{
	public:
		Form_Inicio1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_Inicio1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtDirPC;
	private: System::Windows::Forms::TextBox^  txtDirDC;
	private: System::Windows::Forms::TextBox^  txtURD;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  IDVia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DirPa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DirDe;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  URDL;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtDirPC = (gcnew System::Windows::Forms::TextBox());
			this->txtDirDC = (gcnew System::Windows::Forms::TextBox());
			this->txtURD = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->IDVia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DirPa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DirDe = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->URDL = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"USUARIO: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Dir. Partida";
			// 
			// txtDirPC
			// 
			this->txtDirPC->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtDirPC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtDirPC->Location = System::Drawing::Point(118, 54);
			this->txtDirPC->Name = L"txtDirPC";
			this->txtDirPC->Size = System::Drawing::Size(160, 16);
			this->txtDirPC->TabIndex = 2;
			// 
			// txtDirDC
			// 
			this->txtDirDC->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtDirDC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtDirDC->Location = System::Drawing::Point(118, 76);
			this->txtDirDC->Name = L"txtDirDC";
			this->txtDirDC->Size = System::Drawing::Size(160, 16);
			this->txtDirDC->TabIndex = 3;
			// 
			// txtURD
			// 
			this->txtURD->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtURD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtURD->Location = System::Drawing::Point(118, 98);
			this->txtURD->Name = L"txtURD";
			this->txtURD->Size = System::Drawing::Size(160, 16);
			this->txtURD->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Dir. Destino";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"U-RIDER ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(172, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 25);
			this->label5->TabIndex = 7;
			this->label5->Text = L"- - -";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 134);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Periodo de Pago:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 162);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Método de Pago:";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(113, 318);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(84, 16);
			this->textBox1->TabIndex = 11;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(203, 257);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Modificar";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(203, 286);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Agregar";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(203, 315);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(203, 228);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Mostrar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 320);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"ID Viaje a Buscar";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(114, 129);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(24, 20);
			this->label9->TabIndex = 17;
			this->label9->Text = L"---";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(114, 157);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(24, 20);
			this->label10->TabIndex = 18;
			this->label10->Text = L"---";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->IDVia, 
				this->DirPa, this->DirDe, this->URDL});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Right;
			this->dataGridView1->Location = System::Drawing::Point(315, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(379, 345);
			this->dataGridView1->TabIndex = 19;
			// 
			// IDVia
			// 
			this->IDVia->HeaderText = L"ID del Viaje";
			this->IDVia->Name = L"IDVia";
			// 
			// DirPa
			// 
			this->DirPa->HeaderText = L"Direccion de Partida";
			this->DirPa->Name = L"DirPa";
			// 
			// DirDe
			// 
			this->DirDe->HeaderText = L"Direccion de Destino";
			this->DirDe->Name = L"DirDe";
			// 
			// URDL
			// 
			this->URDL->HeaderText = L"U-RIDER que me Llevó";
			this->URDL->Name = L"URDL";
			// 
			// Form_Inicio1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 345);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtURD);
			this->Controls->Add(this->txtDirDC);
			this->Controls->Add(this->txtDirPC);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form_Inicio1";
			this->Text = L"Inicio Cliente";
			this->Load += gcnew System::EventHandler(this, &Form_Inicio1::Form_Inicio1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form_Inicio1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
