#pragma once
#include <msclr\marshal_cppstd.h>
#include <ctime>
#include <iomanip>
#include <sstream>

//#include "MySQLDAO.h"
#include "CU18.h"
#include "Funcionário.h"

#define to_str(a) msclr::interop::marshal_as<std::string>(a)

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para CRUDFuncionarios
	/// </summary>
	public ref class CRUDFuncionarios : public System::Windows::Forms::Form
	{
	public:
		CRUDFuncionarios(void)
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
		~CRUDFuncionarios()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  ID;
	private: System::Windows::Forms::ColumnHeader^  Nome;
	private: System::Windows::Forms::ColumnHeader^  CPF;
	private: System::Windows::Forms::ColumnHeader^  Salario;
	private: System::Windows::Forms::ColumnHeader^  Categoria;
	private: System::Windows::Forms::ColumnHeader^  Equipe;

	protected:

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->Nome = (gcnew System::Windows::Forms::ColumnHeader());
			this->CPF = (gcnew System::Windows::Forms::ColumnHeader());
			this->Salario = (gcnew System::Windows::Forms::ColumnHeader());
			this->Categoria = (gcnew System::Windows::Forms::ColumnHeader());
			this->Equipe = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(467, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(253, 193);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dados gerais";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(171, 164);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Excluir";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(90, 164);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Alterar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 164);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Cadastrar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Categoria";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(87, 132);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(159, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(87, 105);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(159, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Salário";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(87, 79);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(159, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"CPF";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(87, 53);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(160, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nome";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(87, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(159, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->ID, this->Nome, this->CPF,
					this->Salario, this->Categoria, this->Equipe
			});
			this->listView1->Location = System::Drawing::Point(12, 14);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(449, 191);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// ID
			// 
			this->ID->Text = L"ID";
			this->ID->Width = 46;
			// 
			// Nome
			// 
			this->Nome->Text = L"Nome";
			this->Nome->Width = 101;
			// 
			// CPF
			// 
			this->CPF->Text = L"CPF";
			this->CPF->Width = 87;
			// 
			// Salario
			// 
			this->Salario->Text = L"Salário";
			this->Salario->Width = 76;
			// 
			// Categoria
			// 
			this->Categoria->Text = L"Categoria";
			// 
			// Equipe
			// 
			this->Equipe->Text = L"Equipe";
			this->Equipe->Width = 71;
			// 
			// CRUDFuncionarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(745, 216);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"CRUDFuncionarios";
			this->Text = L"Funcionários";
			this->Load += gcnew System::EventHandler(this, &CRUDFuncionarios::CRUDFuncionarios_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void atualizaDataGrid() {
			CU18* controle = CU18::getInstance();
			ResultSet* listaFunc = controle->selecionarFuncionario();

			int id;
			String^ nome;
			String^ cpf;
			float salario;
			String^ categoria;
			int equipe;

			//listView1->Clear();

			while (listaFunc->next()) {
				id = listaFunc->getInt("ID_FUNC");
				nome = gcnew String(listaFunc->getString("NOME").c_str());
				cpf = gcnew String(listaFunc->getString("CPF").c_str());
				salario = (float)listaFunc->getDouble("SALARIO");
				categoria = gcnew String(listaFunc->getString("TIPO_FUNC").c_str());
				equipe = listaFunc->getInt("ID_EQUIPE");

				ListViewItem^ item = gcnew ListViewItem(gcnew String(id.ToString()));
				item->SubItems->Add(nome);
				item->SubItems->Add(cpf);
				item->SubItems->Add(gcnew String(salario.ToString()));
				item->SubItems->Add(categoria);
				item->SubItems->Add(gcnew String(equipe.ToString()));

				listView1->Items->Add(item);
			}
		}

private: System::Void CRUDFuncionarios_Load(System::Object^  sender, System::EventArgs^  e) {
	atualizaDataGrid();
}
};
}
