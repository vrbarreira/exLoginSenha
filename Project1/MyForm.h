#pragma once
#include <iostream>
#include "Janela2.h"

namespace Project1 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  tb_login;

	private: System::Windows::Forms::Label^  lb_login;
	private: System::Windows::Forms::Label^  lb_senha;
	private: System::Windows::Forms::TextBox^  tb_senha;
	private: System::Windows::Forms::Button^  bt_validar;
	private: System::Windows::Forms::Button^  bt_limpar;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tb_login = (gcnew System::Windows::Forms::TextBox());
			this->lb_login = (gcnew System::Windows::Forms::Label());
			this->lb_senha = (gcnew System::Windows::Forms::Label());
			this->tb_senha = (gcnew System::Windows::Forms::TextBox());
			this->bt_validar = (gcnew System::Windows::Forms::Button());
			this->bt_limpar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(263, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Janela Atual:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(86, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ir para a Janela 2";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(86, 111);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Ir para a Janela 3";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(86, 161);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Ir para a Janela 4";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// tb_login
			// 
			this->tb_login->Location = System::Drawing::Point(443, 68);
			this->tb_login->Name = L"tb_login";
			this->tb_login->Size = System::Drawing::Size(100, 20);
			this->tb_login->TabIndex = 4;
			// 
			// lb_login
			// 
			this->lb_login->AutoSize = true;
			this->lb_login->Location = System::Drawing::Point(392, 71);
			this->lb_login->Name = L"lb_login";
			this->lb_login->Size = System::Drawing::Size(33, 13);
			this->lb_login->TabIndex = 5;
			this->lb_login->Text = L"Login";
			this->lb_login->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// lb_senha
			// 
			this->lb_senha->AutoSize = true;
			this->lb_senha->Location = System::Drawing::Point(389, 111);
			this->lb_senha->Name = L"lb_senha";
			this->lb_senha->Size = System::Drawing::Size(37, 17);
			this->lb_senha->TabIndex = 6;
			this->lb_senha->Text = L"Senha";
			this->lb_senha->UseCompatibleTextRendering = true;
			// 
			// tb_senha
			// 
			this->tb_senha->Location = System::Drawing::Point(443, 111);
			this->tb_senha->Name = L"tb_senha";
			this->tb_senha->PasswordChar = '*';
			this->tb_senha->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tb_senha->Size = System::Drawing::Size(100, 20);
			this->tb_senha->TabIndex = 7;
			this->tb_senha->UseSystemPasswordChar = true;
			// 
			// bt_validar
			// 
			this->bt_validar->Location = System::Drawing::Point(395, 161);
			this->bt_validar->Name = L"bt_validar";
			this->bt_validar->Size = System::Drawing::Size(75, 23);
			this->bt_validar->TabIndex = 8;
			this->bt_validar->Text = L"Validar";
			this->bt_validar->UseVisualStyleBackColor = true;
			// 
			// bt_limpar
			// 
			this->bt_limpar->Location = System::Drawing::Point(493, 161);
			this->bt_limpar->Name = L"bt_limpar";
			this->bt_limpar->Size = System::Drawing::Size(75, 23);
			this->bt_limpar->TabIndex = 9;
			this->bt_limpar->Text = L"Limpar";
			this->bt_limpar->UseVisualStyleBackColor = true;
			this->bt_limpar->Click += gcnew System::EventHandler(this, &MyForm::bt_limpar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(637, 263);
			this->Controls->Add(this->bt_limpar);
			this->Controls->Add(this->bt_validar);
			this->Controls->Add(this->tb_senha);
			this->Controls->Add(this->lb_senha);
			this->Controls->Add(this->lb_login);
			this->Controls->Add(this->tb_login);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bt_limpar_Click(System::Object^  sender, System::EventArgs^  e) {

}
};
}
