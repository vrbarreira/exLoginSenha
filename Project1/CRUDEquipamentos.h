#pragma once

#include <msclr\marshal_cppstd.h>
#include <ctime>
#include <iomanip>
#include <sstream>

//#include "MySQLDAO.h"
#include "Controle_CU14.h"

#define to_str(a) msclr::interop::marshal_as<std::string>(a)

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Custo;
	private: System::Windows::Forms::Button^  btn_Cadastro;
	private: System::Windows::Forms::Button^  btn_Alterar;
	private: System::Windows::Forms::Button^  btn_Excluir;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;


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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Custo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_Cadastro = (gcnew System::Windows::Forms::Button());
			this->btn_Alterar = (gcnew System::Windows::Forms::Button());
			this->btn_Excluir = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Nome, this->Tipo,
					this->Custo
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(352, 236);
			this->dataGridView1->TabIndex = 0;
			// 
			// Nome
			// 
			this->Nome->HeaderText = L"Nome";
			this->Nome->Name = L"Nome";
			// 
			// Tipo
			// 
			this->Tipo->HeaderText = L"Tipo";
			this->Tipo->Name = L"Tipo";
			// 
			// Custo
			// 
			this->Custo->HeaderText = L"Custo";
			this->Custo->Name = L"Custo";
			// 
			// btn_Cadastro
			// 
			this->btn_Cadastro->Location = System::Drawing::Point(16, 132);
			this->btn_Cadastro->Name = L"btn_Cadastro";
			this->btn_Cadastro->Size = System::Drawing::Size(128, 38);
			this->btn_Cadastro->TabIndex = 1;
			this->btn_Cadastro->Text = L"Cadastrar";
			this->btn_Cadastro->UseVisualStyleBackColor = true;
			this->btn_Cadastro->Click += gcnew System::EventHandler(this, &MyForm1::btn_Cadastro_Click);
			// 
			// btn_Alterar
			// 
			this->btn_Alterar->Location = System::Drawing::Point(159, 132);
			this->btn_Alterar->Name = L"btn_Alterar";
			this->btn_Alterar->Size = System::Drawing::Size(128, 38);
			this->btn_Alterar->TabIndex = 2;
			this->btn_Alterar->Text = L"Alterar";
			this->btn_Alterar->UseVisualStyleBackColor = true;
			// 
			// btn_Excluir
			// 
			this->btn_Excluir->Location = System::Drawing::Point(469, 210);
			this->btn_Excluir->Name = L"btn_Excluir";
			this->btn_Excluir->Size = System::Drawing::Size(128, 38);
			this->btn_Excluir->TabIndex = 3;
			this->btn_Excluir->Text = L"Excluir";
			this->btn_Excluir->UseVisualStyleBackColor = true;
			this->btn_Excluir->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->btn_Cadastro);
			this->groupBox1->Controls->Add(this->btn_Alterar);
			this->groupBox1->Location = System::Drawing::Point(384, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(305, 192);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Cadastro/Alteração";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(85, 48);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(202, 21);
			this->comboBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(85, 80);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(202, 20);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(85, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(202, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Custo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Tipo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Nome";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(701, 263);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btn_Excluir);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm1";
			this->Text = L"Equipamentos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_Cadastro_Click(System::Object^  sender, System::EventArgs^  e) {

		Controle_CU14* controle = Controle_CU14::getInstance();
		controle->insereEquipamento(to_str(this->textBox1->Text), "GRANDE", to_str(this->textBox2->Text));
		//ControleEquipamento.insere(msclr::interop::marshal_as<std::string>(this->textBox1->Text), msclr::interop::marshal_as<std::string>(this->textBox2->Text));
		//ControleEquipamento.insere(msclr::interop::marshal_as<std::string>(this->textBox1->Text), msclr::interop::marshal_as<std::string>(this->textBox2->Text));

		/*
		sql::Connection * connection;
		sql::Statement* statement;
		sql::PreparedStatement * preparedStatement;
		sql::ResultSet *resultSet;

		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("insert into Equipamento (NOME, TIPO, CUSTO_MANUTENCAO) values (?,'GRANDE',?)");

//		msclr::interop::marshal_as<std::string>(this->textBox1->Text)

		preparedStatement->setString(1, msclr::interop::marshal_as<std::string>(this->textBox1->Text).c_str());
		preparedStatement->setString(2, msclr::interop::marshal_as<std::string>(this->textBox2->Text).c_str());

		preparedStatement->execute();
		//*/
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
