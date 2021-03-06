#pragma once
#include "CRUDEquipamentos.h"
#include "CRUDEquipes.h"
#include "CRUDMateriais.h"
#include "CRUDFuncionarios.h"
#include "FaturasMensais.h"
#include "CadastroBuracos.h"
#include "OSConcluidaNaoReportada.h"
#include "OSConcluidaReportada.h"
#include "OS1_1.h"

//using namespace Project1;

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sum�rio para MenuPrincipal
	/// </summary>
	public ref class MenuPrincipal : public System::Windows::Forms::Form
	{
	public:
		MenuPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o c�digo do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que est�o sendo usados.
		/// </summary>
		~MenuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  btnNovoBuraco;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::Button^  button10;


	private:
		/// <summary>
		/// Vari�vel de designer necess�ria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necess�rio para suporte ao Designer - n�o modifique 
		/// o conte�do deste m�todo com o editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btnNovoBuraco = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(260, 157);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Infraestrutura";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(135, 88);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 52);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Funcion�rios";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MenuPrincipal::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(17, 88);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 52);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Equipes";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MenuPrincipal::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(135, 30);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 52);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Materiais";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MenuPrincipal::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(17, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Equipamentos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuPrincipal::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Location = System::Drawing::Point(278, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(168, 157);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Financeiro";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(24, 88);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(112, 52);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Relat�rios de\r\nFinaliza��o";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(24, 30);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 52);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Faturas\r\nMensais";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MenuPrincipal::button5_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button10);
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->btnNovoBuraco);
			this->groupBox3->Location = System::Drawing::Point(12, 176);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(433, 156);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Buracos e Ordens de Servi�o";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(266, 19);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(112, 52);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Ordens de servi�o conclu�das e reportadas";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MenuPrincipal::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(135, 19);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(112, 52);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Ordens de servi�o conclu�das e n�o reportadas";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MenuPrincipal::button8_Click);
			// 
			// btnNovoBuraco
			// 
			this->btnNovoBuraco->Location = System::Drawing::Point(6, 89);
			this->btnNovoBuraco->Name = L"btnNovoBuraco";
			this->btnNovoBuraco->Size = System::Drawing::Size(112, 52);
			this->btnNovoBuraco->TabIndex = 6;
			this->btnNovoBuraco->Text = L"Registrar novo\r\nburaco";
			this->btnNovoBuraco->UseVisualStyleBackColor = true;
			this->btnNovoBuraco->Click += gcnew System::EventHandler(this, &MenuPrincipal::button7_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(6, 19);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(112, 52);
			this->button10->TabIndex = 10;
			this->button10->Text = L"Ordens de servi�o pendentes";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MenuPrincipal::button10_Click);
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(457, 340);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MenuPrincipal";
			this->Text = L"InfoBuraco";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MenuPrincipal::MenuPrincipal_FormClosed);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void MenuPrincipal_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	Application::Exit();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1^ crud = gcnew MyForm1();
	crud->ShowDialog();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	CRUD_Materiais^ crud = gcnew CRUD_Materiais();
	crud->ShowDialog();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	CRUDEquipes^ crud = gcnew CRUDEquipes();
	crud->ShowDialog();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	CRUDFuncionarios^ crud = gcnew CRUDFuncionarios();
	crud->ShowDialog();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	FaturasMensais^ tela = gcnew FaturasMensais();
	tela->ShowDialog();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	OSConcluidaNaoReportada^ caixa = gcnew OSConcluidaNaoReportada();
	caixa->ShowDialog();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	OSConcluidaReportada^ caixa = gcnew OSConcluidaReportada();
	caixa->ShowDialog();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	CadastroBuracos ^ form = gcnew CadastroBuracos;
	form->ShowDialog();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	OS1_1 ^ form = gcnew OS1_1;
	form->ShowDialog();
}
};
}
