#pragma once
#include <msclr\marshal_cppstd.h>
#include <ctime>
#include <iomanip>
#include <sstream>

#include "Controle_CU02.h"
#define to_str(a) msclr::interop::marshal_as<std::string>(a)

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para CadastroBuracos
	/// </summary>
	public ref class CadastroBuracos : public System::Windows::Forms::Form
	{
	public:
		CadastroBuracos(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~CadastroBuracos()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;


	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;




	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  label6;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  Inserir;



	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label8;


	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Inserir = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(293, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(308, 259);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dados";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(144, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(158, 20);
			this->textBox1->TabIndex = 21;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"ID*";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"novo", L"reaberto", L"reincidente" });
			this->comboBox4->Location = System::Drawing::Point(144, 62);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(158, 21);
			this->comboBox4->TabIndex = 19;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Norte", L"Sul", L"Leste" });
			this->comboBox3->Location = System::Drawing::Point(145, 147);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(158, 21);
			this->comboBox3->TabIndex = 18;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"centro", L"esquerda", L"direita" });
			this->comboBox2->Location = System::Drawing::Point(144, 174);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(158, 21);
			this->comboBox2->TabIndex = 17;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Pequeno", L"Médio", L"Grande" });
			this->comboBox1->Location = System::Drawing::Point(144, 119);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(158, 21);
			this->comboBox1->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 176);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 13);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Posição na Via";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 150);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Região";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Tamanho";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(144, 93);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(158, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Endereço";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Status";
			// 
			// Inserir
			// 
			this->Inserir->Location = System::Drawing::Point(410, 277);
			this->Inserir->Name = L"Inserir";
			this->Inserir->Size = System::Drawing::Size(94, 45);
			this->Inserir->TabIndex = 2;
			this->Inserir->Text = L"Cadastrar";
			this->Inserir->UseVisualStyleBackColor = true;
			this->Inserir->Click += gcnew System::EventHandler(this, &CadastroBuracos::button1_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->Location = System::Drawing::Point(3, 40);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(270, 191);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"ID";
			this->columnHeader1->Width = 40;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Endereço";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Posição via";
			this->columnHeader3->Width = 76;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 293);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(204, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"*Selecione o ID se o buraco é reincidente";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 206);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"CPF";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(144, 206);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(158, 20);
			this->textBox2->TabIndex = 23;
			// 
			// CadastroBuracos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 332);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->Inserir);
			this->Controls->Add(this->groupBox1);
			this->Name = L"CadastroBuracos";
			this->Text = L"Cadastrar buraco";
			this->Load += gcnew System::EventHandler(this, &CadastroBuracos::CadastroBuracos_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//inserir
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Controle_CU02* controle = Controle_CU02::getInstance();

		if (comboBox1->Text == String::Empty || comboBox2->Text == String::Empty || comboBox3->Text == String::Empty || comboBox4->Text == String::Empty) {
			MessageBox::Show("Preencha os campos necessários", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else {
			if (to_str(this->comboBox4->Text) == "novo") {
				controle->insereBuraco(to_str(this->comboBox4->Text), to_str(this->textBox3->Text), to_str(this->comboBox1->Text), to_str(this->comboBox3->Text), to_str(this->comboBox2->Text));
				MessageBox::Show("Novo buraco inserido");
			}
			else {
				controle->alteraBuraco(to_str(this->textBox1->Text), to_str(this->comboBox1->Text));
				MessageBox::Show("Buraco alterado");
			}
		}
		CadastroBuracos_Load(sender, e);


	}
private: System::Void CadastroBuracos_Load(System::Object^  sender, System::EventArgs^  e) {
	Controle_CU02* controle = Controle_CU02::getInstance();
	ResultSet* listaBur = controle->selecionarBuraco();

	int id;
	String^ endereco;
	String^ posicao_via;

	listView1->Items->Clear();

	while (listaBur->next()) {
		id = listaBur->getInt("ID_BURACO");
		endereco = gcnew String(listaBur->getString("ENDERECO").c_str());
		posicao_via = gcnew String(listaBur->getString("POSICAO_VIA").c_str());
		//tamanho = gcnew String(listaBur->getString("TAMANHO").c_str());
		//nrec = listaBur->getInt("NUM_RECLAMACOES");

		ListViewItem^ item = gcnew ListViewItem(gcnew String(id.ToString()));
		item->SubItems->Add(endereco);
		item->SubItems->Add(posicao_via);
		//item->SubItems->Add(tamanho);
		//item->SubItems->Add(gcnew String(((double)nrec).ToString()));
		listView1->Items->Add(item);
	}
}
};
}
