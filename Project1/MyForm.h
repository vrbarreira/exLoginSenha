#pragma once
#include <iostream>
#include "Janela4.h"
#include "Janela3.h"
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
	private: System::Windows::Forms::Label^  lb_titulo;
	protected:

	private: System::Windows::Forms::Button^  bt_janela2;
	private: System::Windows::Forms::Button^  bt_janela3;




	private: System::Windows::Forms::TextBox^  tb_login;

	private: System::Windows::Forms::Label^  lb_login;
	private: System::Windows::Forms::Label^  lb_senha;
	private: System::Windows::Forms::TextBox^  tb_senha;
	private: System::Windows::Forms::Button^  bt_validar;
	private: System::Windows::Forms::Button^  bt_limpar;
	private: System::Windows::Forms::Label^  lb_mensagem;
	private: System::Windows::Forms::TextBox^  tb_mensagem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sairToolStripMenuItem;


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
			this->lb_titulo = (gcnew System::Windows::Forms::Label());
			this->bt_janela2 = (gcnew System::Windows::Forms::Button());
			this->bt_janela3 = (gcnew System::Windows::Forms::Button());
			this->tb_login = (gcnew System::Windows::Forms::TextBox());
			this->lb_login = (gcnew System::Windows::Forms::Label());
			this->lb_senha = (gcnew System::Windows::Forms::Label());
			this->tb_senha = (gcnew System::Windows::Forms::TextBox());
			this->bt_validar = (gcnew System::Windows::Forms::Button());
			this->bt_limpar = (gcnew System::Windows::Forms::Button());
			this->lb_mensagem = (gcnew System::Windows::Forms::Label());
			this->tb_mensagem = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sairToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lb_titulo
			// 
			this->lb_titulo->AutoSize = true;
			this->lb_titulo->Location = System::Drawing::Point(263, 21);
			this->lb_titulo->Name = L"lb_titulo";
			this->lb_titulo->Size = System::Drawing::Size(35, 13);
			this->lb_titulo->TabIndex = 0;
			this->lb_titulo->Text = L"Título";
			// 
			// bt_janela2
			// 
			this->bt_janela2->Location = System::Drawing::Point(86, 66);
			this->bt_janela2->Name = L"bt_janela2";
			this->bt_janela2->Size = System::Drawing::Size(111, 23);
			this->bt_janela2->TabIndex = 1;
			this->bt_janela2->Text = L"Ir para a Janela 2";
			this->bt_janela2->UseVisualStyleBackColor = true;
			this->bt_janela2->Click += gcnew System::EventHandler(this, &MyForm::bt_janela2_Click);
			// 
			// bt_janela3
			// 
			this->bt_janela3->Location = System::Drawing::Point(86, 111);
			this->bt_janela3->Name = L"bt_janela3";
			this->bt_janela3->Size = System::Drawing::Size(111, 23);
			this->bt_janela3->TabIndex = 2;
			this->bt_janela3->Text = L"Ir para a Janela 3";
			this->bt_janela3->UseVisualStyleBackColor = true;
			this->bt_janela3->Click += gcnew System::EventHandler(this, &MyForm::bt_janela3_Click);
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
			this->bt_validar->Click += gcnew System::EventHandler(this, &MyForm::bt_validar_Click);
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
			// lb_mensagem
			// 
			this->lb_mensagem->AutoSize = true;
			this->lb_mensagem->Location = System::Drawing::Point(392, 197);
			this->lb_mensagem->Name = L"lb_mensagem";
			this->lb_mensagem->Size = System::Drawing::Size(105, 13);
			this->lb_mensagem->TabIndex = 10;
			this->lb_mensagem->Text = L"Resultado Validação";
			// 
			// tb_mensagem
			// 
			this->tb_mensagem->Location = System::Drawing::Point(395, 213);
			this->tb_mensagem->Multiline = true;
			this->tb_mensagem->Name = L"tb_mensagem";
			this->tb_mensagem->Size = System::Drawing::Size(202, 38);
			this->tb_mensagem->TabIndex = 11;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(637, 24);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutToolStripMenuItem,
					this->sairToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// sairToolStripMenuItem
			// 
			this->sairToolStripMenuItem->Name = L"sairToolStripMenuItem";
			this->sairToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->sairToolStripMenuItem->Text = L"Sair";
			this->sairToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sairToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(637, 263);
			this->Controls->Add(this->tb_mensagem);
			this->Controls->Add(this->lb_mensagem);
			this->Controls->Add(this->bt_limpar);
			this->Controls->Add(this->bt_validar);
			this->Controls->Add(this->tb_senha);
			this->Controls->Add(this->lb_senha);
			this->Controls->Add(this->lb_login);
			this->Controls->Add(this->tb_login);
			this->Controls->Add(this->bt_janela3);
			this->Controls->Add(this->bt_janela2);
			this->Controls->Add(this->lb_titulo);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Formulário Inicial";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void bt_limpar_Click(System::Object^  sender, System::EventArgs^  e) {
	this->tb_login->Text = L"";
	this->tb_senha->Text = L"";
	this->tb_mensagem->Text = L"";
	tb_login->BackColor = System::Drawing::Color::White;
	tb_senha->BackColor = System::Drawing::Color::White;

}
private: System::Void bt_validar_Click(System::Object^  sender, System::EventArgs^  e) {
	if ((this->tb_login->Text == String::Empty) && (this -> tb_senha->Text == String::Empty)) {
		this->tb_mensagem->Text += L"Campos de Login e senha vazios\n";
		tb_login->BackColor = System::Drawing::Color::Yellow;
		tb_senha->BackColor = System::Drawing::Color::Yellow;
		MessageBox::Show("Preencha o login e senha!");
	}
	else if (this->tb_login->Text == String::Empty) {
		this->tb_mensagem->Text  += L"Campo de Login Vazio\n";
		tb_senha->BackColor = System::Drawing::Color::Yellow;
	}
	else if (this->tb_senha->Text == String::Empty) {
		this->tb_mensagem->Text += L"Campo de Senha Vazio\n";
		tb_senha->BackColor = System::Drawing::Color::Yellow;
	}
}
private: System::Void bt_janela2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bt_janela3_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void sairToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Janela4^ caixa = gcnew Janela4();
	caixa->ShowDialog();
}
private: System::Void bt_janela4_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
