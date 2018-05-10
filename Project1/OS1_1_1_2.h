#pragma once

namespace TelasLamarcainfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OS1_1_1_2
	/// </summary>
	public ref class OS1_1_1_2 : public System::Windows::Forms::Form
	{
	public:
		OS1_1_1_2(void)
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
		~OS1_1_1_2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label10;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(375, 226);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 23);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Associar OS a saída";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(258, 448);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 23);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Salvar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(105, 333);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(40, 20);
			this->textBox5->TabIndex = 19;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(38, 296);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(173, 20);
			this->textBox4->TabIndex = 18;
			this->textBox4->Text = L"Sobre a OS:";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(86, 98);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 333);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"horário";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(195, 6);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(226, 62);
			this->textBox1->TabIndex = 14;
			this->textBox1->Text = L"OS6423";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(138, 46);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(299, 52);
			this->textBox2->TabIndex = 25;
			this->textBox2->Text = L"Não existe agendamento para essa OS. Associe-na a uma data e, em seguida, escolha"
				L" uma saída já existente ou crie uma nova saída, especificando um horário e uma e"
				L"quipe";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(351, 133);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(76, 17);
			this->checkBox1->TabIndex = 26;
			this->checkBox1->Text = L"Saída 153";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(351, 156);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(76, 17);
			this->checkBox2->TabIndex = 27;
			this->checkBox2->Text = L"Saída 823";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(351, 179);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(104, 17);
			this->checkBox3->TabIndex = 28;
			this->checkBox3->Text = L"Criar nova saída";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(348, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 13);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Saídas correspondentes á data:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(339, 330);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(40, 20);
			this->textBox3->TabIndex = 31;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(206, 333);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 13);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Equipe alocada:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(339, 368);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(40, 20);
			this->textBox6->TabIndex = 35;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &OS1_1_1_2::textBox6_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(206, 371);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 13);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Custo estimado";
			this->label3->Click += gcnew System::EventHandler(this, &OS1_1_1_2::label3_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(105, 371);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(40, 20);
			this->textBox7->TabIndex = 33;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &OS1_1_1_2::textBox7_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 371);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Prioridade";
			this->label5->Click += gcnew System::EventHandler(this, &OS1_1_1_2::label5_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(339, 404);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(40, 20);
			this->textBox8->TabIndex = 39;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(206, 407);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 13);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Recursos alocados";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(105, 407);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(40, 20);
			this->textBox9->TabIndex = 37;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 407);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 13);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Posição no leito:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(537, 404);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(40, 20);
			this->textBox10->TabIndex = 45;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(404, 407);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(33, 13);
			this->label8->TabIndex = 44;
			this->label8->Text = L"Fotos";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(537, 368);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(40, 20);
			this->textBox11->TabIndex = 43;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(404, 371);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(122, 13);
			this->label9->TabIndex = 42;
			this->label9->Text = L"Númeor de reclamações";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(537, 330);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(40, 20);
			this->textBox12->TabIndex = 41;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(404, 333);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 13);
			this->label10->TabIndex = 40;
			this->label10->Text = L"Endereço";
			// 
			// OS1_1_1_2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 483);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"OS1_1_1_2";
			this->Text = L"OS1_1_1_2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
