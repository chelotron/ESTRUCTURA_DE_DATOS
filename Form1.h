#pragma once
#include "Form_Inicio.h"
#include "Form_Inicio1.h"

namespace URIDE01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtUser;
	private: System::Windows::Forms::TextBox^  txtKey;
	protected: 

	protected: 

	protected: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnLog;


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
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->txtKey = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(131, 63);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(180, 20);
			this->txtUser->TabIndex = 0;
			// 
			// txtKey
			// 
			this->txtKey->Location = System::Drawing::Point(131, 115);
			this->txtKey->Name = L"txtKey";
			this->txtKey->Size = System::Drawing::Size(180, 20);
			this->txtKey->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"USUARIO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(75, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"KEY";
			// 
			// btnLog
			// 
			this->btnLog->Location = System::Drawing::Point(317, 210);
			this->btnLog->Name = L"btnLog";
			this->btnLog->Size = System::Drawing::Size(75, 23);
			this->btnLog->TabIndex = 4;
			this->btnLog->Text = L"LOG IN";
			this->btnLog->UseVisualStyleBackColor = true;
			this->btnLog->Click += gcnew System::EventHandler(this, &Form1::btnLog_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(401, 245);
			this->Controls->Add(this->btnLog);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtKey);
			this->Controls->Add(this->txtUser);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("BIENVENIDO","U-RIDE",
				 MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 }
	private: System::Void btnLog_Click(System::Object^  sender, System::EventArgs^  e) {
				 if((txtUser->Text == "RIDER01" ) & (txtKey->Text == "1234")){
					 MessageBox::Show("Bienvenido U-RIDER: "+(txtUser->Text),"U-RIDE",MessageBoxButtons::OK);
					 Form_Inicio^ x = gcnew Form_Inicio();
					 this->Hide();
					 x->ShowDialog();
					 this->Close();
				 } else{
					 if((txtUser->Text == "USER01" ) & (txtKey->Text == "5678")){
					 MessageBox::Show("Bienvenido Cliente: "+(txtUser->Text),"U-RIDE",MessageBoxButtons::OK);
					 Form_Inicio1^ y = gcnew Form_Inicio1();
					 this->Hide();
					 y->ShowDialog();
					 this->Close();
					 }
				 }
			 }
};
};
