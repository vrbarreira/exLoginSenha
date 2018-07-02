#pragma once
#include <msclr\marshal_cppstd.h>
#include <ctime>
#include <iomanip>
#include <sstream>

#include "CU17.h"
#include "Material.h"

#define to_str(a) msclr::interop::marshal_as<std::string>(a)

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for CRUD_Materiais
	/// </summary>
	public ref class CRUD_Materiais : public System::Windows::Forms::Form
	{
	public:
		CRUD_Materiais(void)
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
		~CRUD_Materiais()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Button^  btn_Alterar;



	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  Tipo;
	private: System::Windows::Forms::ColumnHeader^  UnidMedida;
	private: System::Windows::Forms::ColumnHeader^  CustoMedida;
	private: System::Windows::Forms::ColumnHeader^  QtdEstoque;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btn_Alterar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Tipo = (gcnew System::Windows::Forms::ColumnHeader());
			this->UnidMedida = (gcnew System::Windows::Forms::ColumnHeader());
			this->CustoMedida = (gcnew System::Windows::Forms::ColumnHeader());
			this->QtdEstoque = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->btn_Alterar);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(395, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(336, 155);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dados Principais";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Quilo", L"Metro quadrado", L"Metro cúbico" });
			this->comboBox2->Location = System::Drawing::Point(123, 78);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(197, 21);
			this->comboBox2->TabIndex = 9;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"CBUQ", L"Concreto Asfáltico", L"Concreto", L"Brita",
					L"Areia"
			});
			this->comboBox1->Location = System::Drawing::Point(123, 26);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(197, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// btn_Alterar
			// 
			this->btn_Alterar->Location = System::Drawing::Point(162, 105);
			this->btn_Alterar->Name = L"btn_Alterar";
			this->btn_Alterar->Size = System::Drawing::Size(128, 38);
			this->btn_Alterar->TabIndex = 4;
			this->btn_Alterar->Text = L"Alterar";
			this->btn_Alterar->UseVisualStyleBackColor = true;
			this->btn_Alterar->Click += gcnew System::EventHandler(this, &CRUD_Materiais::btn_Alterar_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Unidade de medida";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(123, 53);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(197, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Custo/unidade";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tipo";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(122, 19);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(113, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Qtd em estoque";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(396, 174);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(335, 53);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Quantidade";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(286, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(39, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(241, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(39, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CRUD_Materiais::button1_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->Tipo, this->UnidMedida,
					this->CustoMedida, this->QtdEstoque
			});
			this->listView1->Location = System::Drawing::Point(13, 11);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(377, 216);
			this->listView1->TabIndex = 9;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &CRUD_Materiais::listView1_SelectedIndexChanged);
			// 
			// Tipo
			// 
			this->Tipo->Text = L"Tipo";
			this->Tipo->Width = 107;
			// 
			// UnidMedida
			// 
			this->UnidMedida->Text = L"Unidade Medida";
			this->UnidMedida->Width = 94;
			// 
			// CustoMedida
			// 
			this->CustoMedida->Text = L"Custo por Medida";
			this->CustoMedida->Width = 98;
			// 
			// QtdEstoque
			// 
			this->QtdEstoque->Text = L"Qtd Estoque";
			this->QtdEstoque->Width = 73;
			// 
			// CRUD_Materiais
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(743, 240);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"CRUD_Materiais";
			this->Text = L"Materiais";
			this->Load += gcnew System::EventHandler(this, &CRUD_Materiais::CRUD_Materiais_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}

private: System::Void btn_Alterar_Click(System::Object^  sender, System::EventArgs^  e) {
	CU17* controle = CU17::getInstance();

	if (textBox2->Text == String::Empty || comboBox1->Text == String::Empty || comboBox2->Text == String::Empty) {
		MessageBox::Show("Preencha todos os campos", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else {
		controle->alteraMaterial(to_str(comboBox1->Text), to_str(comboBox2->Text), to_str(textBox2->Text));
		MessageBox::Show("Registro alterado");
	}
}

private: System::Void atualizaDataGrid() {
	CU17* controle = CU17::getInstance();
	ResultSet* listaMat = controle->selecionarMaterial();

	int id;
	String^ tipo;
	String^ unidade;
	float custoPorMedida, qtdEstoque;

	while (listaMat->next()) {
		id = listaMat->getInt("ID_MATERIAL");
		tipo = gcnew String(listaMat->getString("TIPO").c_str());
		unidade = gcnew String(listaMat->getString("UNIDADE_MEDIDA").c_str());
		custoPorMedida = (float)listaMat->getDouble("CUSTO_POR_MEDIDA");
		qtdEstoque = (float)listaMat->getDouble("QTD_ESTOQUE");

		ListViewItem^ item = gcnew ListViewItem(tipo);
		item->SubItems->Add(unidade);
		item->SubItems->Add(gcnew String(custoPorMedida.ToString()));
		item->SubItems->Add(gcnew String(qtdEstoque.ToString()));
		listView1->Items->Add(item);
	}
}

private: System::Void CRUD_Materiais_Load(System::Object^  sender, System::EventArgs^  e) {
	atualizaDataGrid();
}
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	CU17* controle = CU17::getInstance();
	ResultSet* listaMat = controle->selecionarMaterial();

	if (comboBox1->Text == String::Empty) {
		MessageBox::Show("Escolha o tipo do material", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else if (textBox4->Text == String::Empty) {
		MessageBox::Show("Insira o valor", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else 
	{
		float valAtual, variac, novoVal;
		std::string::size_type sz;

		while (listaMat->next()) {
			if (listaMat->getString("TIPO").c_str() == to_str(comboBox1->Text)) {
				valAtual = (float)listaMat->getDouble("QTD_ESTOQUE");
				break;
			}
		}

		variac = stof(to_str(textBox4->Text), &sz);
		novoVal = valAtual + variac;

		controle->alteraMaterial(to_str(comboBox1->Text), to_str(novoVal.ToString()));
		MessageBox::Show("Quantidade incrementada");
	}
}
};
}
