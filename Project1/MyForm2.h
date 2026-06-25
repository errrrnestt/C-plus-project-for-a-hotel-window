#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <Windows.h>
#include "class_Room.h"
#include "class_Gust.h"
#include "class_Nomer.h"


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ✨⊱✥━━━ ❧ ☙ ━━━✥⊰✨
	/// Summary for MyForm2
	/// ✨⊱✥━━━ ❧ ☙ ━━━✥⊰✨
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:

		// Converts managed System::String^ to standard std::string
		void MarshalString(String^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

		MyForm2(void)																																																																																																						
		{
			InitializeComponent();
			//
			// TODO: Add constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox2;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 9));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(327, 390);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 39);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Назад"; // Translation: "Back"
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(334, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(113, 20);
			this->textBox1->TabIndex = 17;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(334, 205);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(113, 20);
			this->textBox4->TabIndex = 29;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 9));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(364, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 14);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Номер"; // Translation: "Room / Number"
			this->label1->Click += gcnew System::EventHandler(this, &MyForm2::label1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 9));
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(374, 188);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 14);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Ціна"; // Translation: "Price"
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 9));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(325, 327);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 50);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Видалити"; // Translation: "Delete"
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Verdana", 9));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(325, 265);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 51);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Додати"; // Translation: "Add"
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Verdana", 8));
			this->comboBox3->FormattingEnabled = true;
			// Items translation: {"Deluxe.", "Family.", "Standard.", "Economy."}
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Люкс.", L"Сімейний.", L"Звичайний.", L"Економ." });
			this->comboBox3->Location = System::Drawing::Point(334, 101);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(113, 21);
			this->comboBox3->TabIndex = 27;
			this->comboBox3->Text = L"Тип номера"; // Translation: "Room type"
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Verdana", 8));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBox4->Location = System::Drawing::Point(334, 142);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(113, 21);
			this->comboBox4->TabIndex = 28;
			this->comboBox4->Text = L"Спальні місця"; // Translation: "Beds / Sleeping accommodations"
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 8));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 22);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(285, 407);
			this->listBox1->TabIndex = 30;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(304, 433);
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(475, 448);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->Text = L"Додати новий номер готелю"; // Translation: "Add new hotel room"
			this->Activated += gcnew System::EventHandler(this, &MyForm2::MyForm2_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// ✨⊱✥━━━ ❧ ☙ ━━━✥⊰✨ Data Rendering Methods ✨⊱✥━━━ ❧ ☙ ━━━✥⊰✨

		// Clears and populates listBox1 with room details
		void show()
		{
			listBox1->Items->Clear();
			for (int i = 0; i < nomers.get_size(); i++)
			{

					String^ str = gcnew String( ( nomers.get_vector()[i].get_categorics_of_room() + " | " + nomers.get_vector()[i].get_sleep_accommodation() + " | " + nomers.get_vector()[i].get_payment() ).c_str()	);
					this->listBox1->Items->Add(nomers.get_vector()[i].get_room_number() + " | " +  str  );

			}
		}

// ✨⊱✥━━━ ❧ ☙ ━━━✥⊰✨ UI Event Handlers ✨⊱✥━━━ ❧ ☙ ━━━✥⊰✨

private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

// Event handler for "Back" button click - hides Form2
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
this->Hide();   // Hide Form2 (Note in original text said Form1, but logic hides current form)
}

// Event handler for "Add" button click - creates a new room entry if validation passes
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	string s1, s2, s3, s4, s5, s6, s7;
	int b = 0;
	nomer nom;
	int m = 0;
	m = rand() % 10000;

	// Validation text checking
	// "Тип номера" translation: "Room type", "Спальні місця" translation: "Beds"
	if (textBox1->Text != "" && comboBox3->Text != "Тип номера" && comboBox4->Text != "Спальні місця" && textBox4->Text != "")
	{
		b = Convert::ToInt32(textBox1->Text);
		MarshalString(comboBox3->Text, s3);
		MarshalString(comboBox4->Text, s2);
		MarshalString(textBox4->Text, s1);

		nom.set_id(m);
		nom.set_room_number(b);
		nom.set_categorics_of_room(s3);
		nom.set_sleep_accommodation(s2);
		nom.set_payment(s1);
		nomers.nomer_add(nom);
		show();
		save_to_file_nomer(nomers);
	}
	else {
		// Translation: "Please enter data correctly!", "Input error!"
		MessageBox::Show("Введіть коректно дані!", "Помилка введення!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

}

// Event handler to delete selected room entry from list
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	int с = listBox1->SelectedIndex;
	nomers.nomer_del(с);
	show();
	save_to_file_nomer(nomers);
}

// Triggered when form becomes active - auto-updates the list view
private: System::Void MyForm2_Activated(System::Object^ sender, System::EventArgs^ e) {

	nomers = load_from_file_nomer();
	show();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}