#pragma once

namespace URIDE01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_Inicio
	/// </summary>
	public ref class Form_Inicio : public System::Windows::Forms::Form
	{
	public:
		Form_Inicio(void)
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
		~Form_Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  txtIDV;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtDirP;
	private: System::Windows::Forms::TextBox^  txtDirD;
	private: System::Windows::Forms::TextBox^  txtComp;
	private: System::Windows::Forms::TextBox^  txtTime;
	private: System::Windows::Forms::TextBox^  txtKmR;







	private: System::Windows::Forms::DataGridView^  dtGV1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  IdV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DirP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DirD;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Comp;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  KmR;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Gan;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  lblGanc;
	private: System::Windows::Forms::Label^  label9;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->txtIDV = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtDirP = (gcnew System::Windows::Forms::TextBox());
			this->txtDirD = (gcnew System::Windows::Forms::TextBox());
			this->txtComp = (gcnew System::Windows::Forms::TextBox());
			this->txtTime = (gcnew System::Windows::Forms::TextBox());
			this->txtKmR = (gcnew System::Windows::Forms::TextBox());
			this->dtGV1 = (gcnew System::Windows::Forms::DataGridView());
			this->IdV = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DirP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DirD = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Comp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->KmR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Gan = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblGanc = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dtGV1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Limpiar Data";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form_Inicio::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(208, 218);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Mostrar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(208, 305);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(208, 276);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Agregar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form_Inicio::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(208, 247);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Modificar";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// txtIDV
			// 
			this->txtIDV->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtIDV->Location = System::Drawing::Point(102, 310);
			this->txtIDV->Name = L"txtIDV";
			this->txtIDV->Size = System::Drawing::Size(100, 13);
			this->txtIDV->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 310);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"ID Viaje a Buscar";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Dir. Partida";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Dir. Destino";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Compañeros";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 132);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Tiempo de Viaje (min)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(13, 184);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Ganacias por Viaje";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(13, 158);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Km. Recorridos";
			// 
			// txtDirP
			// 
			this->txtDirP->BackColor = System::Drawing::SystemColors::Window;
			this->txtDirP->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtDirP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtDirP->Location = System::Drawing::Point(127, 52);
			this->txtDirP->Name = L"txtDirP";
			this->txtDirP->Size = System::Drawing::Size(156, 16);
			this->txtDirP->TabIndex = 13;
			// 
			// txtDirD
			// 
			this->txtDirD->BackColor = System::Drawing::SystemColors::Window;
			this->txtDirD->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtDirD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtDirD->Location = System::Drawing::Point(127, 77);
			this->txtDirD->Name = L"txtDirD";
			this->txtDirD->Size = System::Drawing::Size(156, 16);
			this->txtDirD->TabIndex = 14;
			// 
			// txtComp
			// 
			this->txtComp->BackColor = System::Drawing::SystemColors::Window;
			this->txtComp->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtComp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtComp->Location = System::Drawing::Point(127, 103);
			this->txtComp->Name = L"txtComp";
			this->txtComp->Size = System::Drawing::Size(156, 16);
			this->txtComp->TabIndex = 15;
			// 
			// txtTime
			// 
			this->txtTime->BackColor = System::Drawing::SystemColors::Window;
			this->txtTime->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtTime->Location = System::Drawing::Point(127, 129);
			this->txtTime->Name = L"txtTime";
			this->txtTime->Size = System::Drawing::Size(156, 16);
			this->txtTime->TabIndex = 16;
			// 
			// txtKmR
			// 
			this->txtKmR->BackColor = System::Drawing::SystemColors::Window;
			this->txtKmR->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtKmR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtKmR->Location = System::Drawing::Point(127, 155);
			this->txtKmR->Name = L"txtKmR";
			this->txtKmR->Size = System::Drawing::Size(156, 16);
			this->txtKmR->TabIndex = 17;
			// 
			// dtGV1
			// 
			this->dtGV1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dtGV1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dtGV1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtGV1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->IdV, this->DirP, 
				this->DirD, this->Comp, this->Time, this->KmR, this->Gan});
			this->dtGV1->Dock = System::Windows::Forms::DockStyle::Right;
			this->dtGV1->Location = System::Drawing::Point(304, 0);
			this->dtGV1->Name = L"dtGV1";
			this->dtGV1->Size = System::Drawing::Size(781, 345);
			this->dtGV1->TabIndex = 19;
			this->dtGV1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form_Inicio::dtGV1_CellContentClick);
			// 
			// IdV
			// 
			this->IdV->HeaderText = L"ID. Viaje";
			this->IdV->Name = L"IdV";
			// 
			// DirP
			// 
			this->DirP->HeaderText = L"Direccion Partida";
			this->DirP->Name = L"DirP";
			// 
			// DirD
			// 
			this->DirD->HeaderText = L"Direccion Destino";
			this->DirD->Name = L"DirD";
			// 
			// Comp
			// 
			this->Comp->HeaderText = L"Compañeros";
			this->Comp->Name = L"Comp";
			// 
			// Time
			// 
			this->Time->HeaderText = L"Tiempo de Viaje";
			this->Time->Name = L"Time";
			// 
			// KmR
			// 
			this->KmR->HeaderText = L"Km. Recorridos";
			this->KmR->Name = L"KmR";
			// 
			// Gan
			// 
			this->Gan->HeaderText = L"Ganancias por Viaje";
			this->Gan->Name = L"Gan";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(137, 31);
			this->label8->TabIndex = 20;
			this->label8->Text = L"U-RIDER:";
			// 
			// lblGanc
			// 
			this->lblGanc->AutoSize = true;
			this->lblGanc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblGanc->Location = System::Drawing::Point(235, 179);
			this->lblGanc->Name = L"lblGanc";
			this->lblGanc->Size = System::Drawing::Size(30, 20);
			this->lblGanc->TabIndex = 21;
			this->lblGanc->Text = L"- $";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(185, 15);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 25);
			this->label9->TabIndex = 22;
			this->label9->Text = L"- - -";
			// 
			// Form_Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1085, 345);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->lblGanc);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dtGV1);
			this->Controls->Add(this->txtKmR);
			this->Controls->Add(this->txtTime);
			this->Controls->Add(this->txtComp);
			this->Controls->Add(this->txtDirD);
			this->Controls->Add(this->txtDirP);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtIDV);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form_Inicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inicio U-RIDER";
			this->Load += gcnew System::EventHandler(this, &Form_Inicio::Form_Inicio_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dtGV1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form_Inicio_Load(System::Object^  sender, System::EventArgs^  e) {
				 label9->Text="Carlos";
			 }

private: System::Void dtGV1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtDirP->Clear();
			 txtDirD->Clear();
			 txtComp->Clear();
			 txtTime->Clear();
			 txtKmR->Clear();
			 lblGanc->Text="- $";
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 dtGV1->Rows[0]->Cells[2]->Value=txtDirP->Text;
};
}  ;
}
