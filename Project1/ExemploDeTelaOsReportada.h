#pragma once
#include "ExemploDeFotos.h"
#include "ExemploDeRegistroDeCom.h"
#include "ExemploDeInfoDeBuraco.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ExemploDeTelaOsReportada
	/// </summary>
	public ref class ExemploDeTelaOsReportada : public System::Windows::Forms::Form
	{
	public:
		ExemploDeTelaOsReportada(void)
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
		~ExemploDeTelaOsReportada()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	protected:
















































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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Seleciona uma das seguintes opções:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 44);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Fotos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ExemploDeTelaOsReportada::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 108);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 43);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Informações do buraco";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ExemploDeTelaOsReportada::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(15, 178);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 44);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Registro de comunicações";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ExemploDeTelaOsReportada::button3_Click);
			// 
			// ExemploDeTelaOsReportada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 365);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"ExemploDeTelaOsReportada";
			this->Text = L"ExemploDeTelaOsReportada";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	ExemploDeFotos^ caixa = gcnew ExemploDeFotos();
	caixa->ShowDialog();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	ExemploDeInfoDeBuraco^ caixa = gcnew ExemploDeInfoDeBuraco();
	caixa->ShowDialog();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	ExemploDeRegistroDeCom^ caixa = gcnew ExemploDeRegistroDeCom();
	caixa->ShowDialog();
}
};
}
