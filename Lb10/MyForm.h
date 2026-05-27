#pragma once

namespace Lb10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref struct Team {
		String^ Name; // Назва команди
		int Wins;     // Кількість перемог
		int Draws;    // Кількість нічиїх
		int Losses;   // Кількість поразок
	};

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ записатиДаніToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проАвтораToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->записатиДаніToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проАвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->записатиДаніToolStripMenuItem,
					this->проПрограмуToolStripMenuItem, this->проАвтораToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1110, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// записатиДаніToolStripMenuItem
			// 
			this->записатиДаніToolStripMenuItem->Name = L"записатиДаніToolStripMenuItem";
			this->записатиДаніToolStripMenuItem->Size = System::Drawing::Size(120, 24);
			this->записатиДаніToolStripMenuItem->Text = L"Записати дані";
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			// 
			// проАвтораToolStripMenuItem
			// 
			this->проАвтораToolStripMenuItem->Name = L"проАвтораToolStripMenuItem";
			this->проАвтораToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->проАвтораToolStripMenuItem->Text = L"Про автора";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(87, 72);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(144, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Назва команди";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(87, 118);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(144, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Кількість перемог";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(87, 167);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(144, 20);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"Кількість нічиїх";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(87, 215);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(144, 20);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"Кількість поразок";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(99, 311);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Записати дані";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(358, 311);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Про програму";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(641, 310);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Про автора";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(406, 41);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(405, 243);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(458, 82);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(165, 20);
			this->textBox5->TabIndex = 9;
			this->textBox5->Text = L"Всі дані про команди";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(458, 167);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(224, 20);
			this->textBox6->TabIndex = 10;
			this->textBox6->Text = L"Команди, які жодного разу не програли";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1110, 507);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {// Перевіряємо, чи користувач змінив стандартні підказки та чи заповнив поля
		if (textBox1->Text == "" || textBox1->Text == "Назва команди" ||
			textBox2->Text == "" || textBox2->Text == "Кількість перемог" ||
			textBox3->Text == "" || textBox3->Text == "Кількість нічиїх" ||
			textBox4->Text == "" || textBox4->Text == "Кількість поразок")
		{
			MessageBox::Show("Будь ласка, заповніть усі поля коректними даними!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Створюємо структуру та записуємо туди введені дані
		Team^ currentTeam = gcnew Team();
		currentTeam->Name = textBox1->Text;
		currentTeam->Wins = Convert::ToInt32(textBox2->Text);
		currentTeam->Draws = Convert::ToInt32(textBox3->Text);
		currentTeam->Losses = Convert::ToInt32(textBox4->Text);

		// Формуємо рядок для виведення загальної інформації
		String^ fullInfo = "Команда: " + currentTeam->Name +
			" | Перемог: " + currentTeam->Wins +
			" | Нічиїх: " + currentTeam->Draws +
			" | Поразок: " + currentTeam->Losses + "\r\n";

		// Додаємо дані у ваше велике текстове поле (textBox5)
		textBox5->AppendText(fullInfo);

		// Логіка Варіанту 11: якщо команда жодного разу не програла (Losses == 0)
		if (currentTeam->Losses == 0) {
			String^ successInfo = "Без поразок: " + currentTeam->Name +
				" (В: " + currentTeam->Wins + ", Н: " + currentTeam->Draws + ")\r\n";

			// Додаємо результат у це ж або сусіднє поле виведення
			textBox5->AppendText(successInfo);
		}

		// Повертаємо назад ваші красиві початкові підказки для наступного введення
		textBox1->Text = "Назва команди";
		textBox2->Text = "Кількість перемог";
		textBox3->Text = "Кількість нічиїх";
		textBox4->Text = "Кількість поразок";
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Проект «Обробка структур».\n\n"
		"Програма дозволяє вводити статистику футбольних або інших спортивних команд "
		"та автоматично визначає команди, які пройшли турнір без жодної поразки.",
		"Про програму",
		MessageBoxButtons::OK,
		MessageBoxIcon::Information);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Автор проекту:\n"
		"Студентка групи 5-A\n\n"
		"Усі права захищено © 2026",
		"Про автора",
		MessageBoxButtons::OK,
		MessageBoxIcon::Information);
}
};
}
