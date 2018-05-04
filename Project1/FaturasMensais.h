#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para FaturasMensais
	/// </summary>
	public ref class FaturasMensais : public System::Windows::Forms::Form
	{
	public:
		FaturasMensais(void)
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
		~FaturasMensais()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ListBox^  listBox2;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(6, 19);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(139, 160);
			this->listBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(25, 396);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Registrar novo período";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 396);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 39);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(293, 396);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 39);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Excluir";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(151, 186);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Períodos";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(169, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(258, 186);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Subtotais";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Custo de equipes";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(134, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(118, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(134, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(118, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Materiais";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(134, 69);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(118, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Equipamentos";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(69, 140);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(118, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(84, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Subtotal mensal";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->listBox2);
			this->groupBox3->Location = System::Drawing::Point(12, 204);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(415, 186);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ordens de serviço";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(6, 20);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(271, 160);
			this->listBox2->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(283, 41);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Total de OS";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(354, 38);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(55, 20);
			this->textBox5->TabIndex = 8;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(298, 97);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 39);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Emitir fatura individual";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// FaturasMensais
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(436, 448);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"FaturasMensais";
			this->Text = L"Faturas Mensais";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
