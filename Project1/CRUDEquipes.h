#pragma once

#include <msclr\marshal_cppstd.h>
#include <ctime>
#include <iomanip>
#include <sstream>

//#include "MySQLDAO.h"
#include "CU19.h"
#include "EquipeDeObras.h"

#define to_str(a) msclr::interop::marshal_as<std::string>(a)

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para CRUDEquipes
	/// </summary>
	public ref class CRUDEquipes : public System::Windows::Forms::Form
	{
	public:
		CRUDEquipes(void)
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
		~CRUDEquipes()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  ID;
	private: System::Windows::Forms::ColumnHeader^  Nome;
	private: System::Windows::Forms::ColumnHeader^  NumTrabalhadores;
	private: System::Windows::Forms::ColumnHeader^  CustoDesloc;
	private: System::Windows::Forms::ColumnHeader^  CustoHora;
	private: System::Windows::Forms::ColumnHeader^  HorarioIni;


	private: bool item_selecionado;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::ColumnHeader^  HorarioTerm;

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
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->Nome = (gcnew System::Windows::Forms::ColumnHeader());
			this->NumTrabalhadores = (gcnew System::Windows::Forms::ColumnHeader());
			this->CustoDesloc = (gcnew System::Windows::Forms::ColumnHeader());
			this->CustoHora = (gcnew System::Windows::Forms::ColumnHeader());
			this->HorarioIni = (gcnew System::Windows::Forms::ColumnHeader());
			this->HorarioTerm = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(66, 186);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(546, 159);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dados da equipe";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(192, 51);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(68, 20);
			this->textBox6->TabIndex = 13;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(318, 109);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 35);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Funcionários da Equipe";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(237, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Alterar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CRUDEquipes::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(156, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Cadastrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CRUDEquipes::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(397, 77);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(143, 20);
			this->textBox5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(292, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Custo por Hora";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(397, 25);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(143, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(292, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 26);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Custo de\r\nDeslocamento";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(117, 77);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(68, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Nº de Trabalhadores";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(117, 51);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(68, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Horário de Serviço";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(117, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(143, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nome";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(303, 351);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 40);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Excluir";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CRUDEquipes::button4_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->ID, this->Nome, this->NumTrabalhadores,
					this->CustoDesloc, this->CustoHora, this->HorarioIni, this->HorarioTerm
			});
			this->listView1->Location = System::Drawing::Point(12, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(641, 168);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &CRUDEquipes::listView1_SelectedIndexChanged);
			// 
			// ID
			// 
			this->ID->Text = L"ID";
			// 
			// Nome
			// 
			this->Nome->Text = L"Nome";
			this->Nome->Width = 122;
			// 
			// NumTrabalhadores
			// 
			this->NumTrabalhadores->Text = L"NumTrabalhadores";
			this->NumTrabalhadores->Width = 59;
			// 
			// CustoDesloc
			// 
			this->CustoDesloc->Text = L"Custo Desloc";
			this->CustoDesloc->Width = 88;
			// 
			// CustoHora
			// 
			this->CustoHora->Text = L"Custo Hora";
			this->CustoHora->Width = 82;
			// 
			// HorarioIni
			// 
			this->HorarioIni->Text = L"Horário Início";
			this->HorarioIni->Width = 123;
			// 
			// HorarioTerm
			// 
			this->HorarioTerm->Text = L"Horario Término";
			this->HorarioTerm->Width = 101;
			// 
			// CRUDEquipes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(666, 403);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox1);
			this->Name = L"CRUDEquipes";
			this->Text = L"Equipes";
			this->Load += gcnew System::EventHandler(this, &CRUDEquipes::CRUDEquipes_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}

		private: System::Void atualizaDataGrid() {
			CU19* controle = CU19::getInstance();
			ResultSet* listaEquip = controle->selecionarEquipe();

			int id;
			String^ nome;
			int n_trab;
			float custoDesloc, custoHora;
			String^ horarioServ;
			String^ horarioTerm;

			while (listaEquip->next()) {
				id = listaEquip->getInt("ID_EQUIPE");
				nome = gcnew String(listaEquip->getString("NOME").c_str());
				n_trab = listaEquip->getInt("NUM_TRABALHADORES");
				custoDesloc = (float)listaEquip->getDouble("CUSTO_DESLOC");
				custoHora = (float)listaEquip->getDouble("CUSTO_HORA");
				horarioServ = gcnew String(listaEquip->getString("HORARIO_SERVICO").c_str());
				horarioTerm = gcnew String(listaEquip->getString("HORARIO_TERMINO").c_str());

				ListViewItem^ item = gcnew ListViewItem(gcnew String(id.ToString()));
				item->SubItems->Add(nome);
				item->SubItems->Add(gcnew String(n_trab.ToString()));
				item->SubItems->Add(gcnew String(custoDesloc.ToString()));
				item->SubItems->Add(gcnew String(custoHora.ToString()));
				item->SubItems->Add(horarioServ);
				item->SubItems->Add(horarioTerm);
				listView1->Items->Add(item);
			}
		}
#pragma endregion
	private: System::Void CRUDEquipes_Load(System::Object^  sender, System::EventArgs^  e) {
		atualizaDataGrid();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	CU19* controle = CU19::getInstance();

	if (textBox1->Text == String::Empty || textBox2->Text == String::Empty || textBox3->Text == String::Empty ||
		textBox4->Text == String::Empty || textBox5->Text == String::Empty || textBox6->Text == String::Empty) {
		MessageBox::Show("Preencha todos os campos", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else {
		controle->insereEquipe(to_str(this->textBox1->Text), to_str(this->textBox3->Text), to_str(this->textBox4->Text),
			to_str(this->textBox5->Text), to_str(this->textBox2->Text), to_str(this->textBox6->Text));
		MessageBox::Show("Novo registro inserido");
	}

	item_selecionado = false;
}
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	item_selecionado = true;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ id;
	CU19* controle = CU19::getInstance();

	if (item_selecionado) {
		if (textBox1->Text == String::Empty || textBox2->Text == String::Empty || textBox3->Text == String::Empty ||
			textBox4->Text == String::Empty || textBox5->Text == String::Empty || textBox6->Text == String::Empty) {
			MessageBox::Show("Preencha todos os campos", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else {
			id = listView1->FocusedItem->Text;
			if (MessageBox::Show("Deseja alterar o item de ID " + id, "Alterar", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
				controle->alteraEquipe(to_str(id), to_str(this->textBox1->Text), to_str(this->textBox3->Text), to_str(this->textBox4->Text),
					to_str(this->textBox5->Text), to_str(this->textBox2->Text), to_str(this->textBox6->Text));
				MessageBox::Show("Registro ID nº " + id + " alterado");
			}
		}

		item_selecionado = false;
	}
	else {
		MessageBox::Show("Selecione um item", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}



	item_selecionado = false;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ id;
	CU19* controle = CU19::getInstance();

	if (item_selecionado) {
		id = listView1->FocusedItem->Text;
		if (MessageBox::Show("Deseja excluir o item de ID " + id, "Excluir", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			controle->excluiEquipe(to_str(id));
			MessageBox::Show("Excluido");
		}
		item_selecionado = false;
	}
	else {
		MessageBox::Show("Selecione um item", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
};
}
