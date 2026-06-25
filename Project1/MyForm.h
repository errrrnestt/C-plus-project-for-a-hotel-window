#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "MyForm1.h"
#include "MyForm2.h"
#include <Windows.h>
#include "class_Gust.h"
#include "class_Room.h"
#include "class_Nomer.h"

namespace Project1 {

    using namespace std;
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    // 💬 UA: З оплатою -> "Paid"
    string s1, s2 = "Paid";
    int c;

    /// <summary>
    /// ✨ Summary for MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:

        // 🔀 Helper function to convert System::String to std::string
        void MarshalString(String^ s, string& os) {
            using namespace Runtime::InteropServices;
            const char* chars =
                (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
            os = chars;
            Marshal::FreeHGlobal(IntPtr((void*)chars));
        }

        MyForm(void)
        {
            InitializeComponent();
            //
            // 🛠️ TODO: Add constructor code here
            //
        }

    protected:
        /// <summary>
        /// 🗑️ Clean up any resources being used.
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::ListBox^ listBox1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::ListBox^ listBox2;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;

    private: System::Windows::Forms::GroupBox^ groupBox2;
    private: System::Windows::Forms::CheckBox^ checkBox1;
    private: System::Windows::Forms::Button^ button4;

    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::PictureBox^ pictureBox1;

    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::ComponentModel::IContainer^ components;
    protected:

    private:
        /// <summary>
        /// ⚙️ Required designer variable.
        /// </summary>

#pragma region Windows Form Designer generated code
        /// <summary>
        /// ⚠️ Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->listBox2 = (gcnew System::Windows::Forms::ListBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 9));
            this->button1->ForeColor = System::Drawing::Color::White;
            this->button1->Location = System::Drawing::Point(85, 134);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(85, 55);
            this->button1->TabIndex = 0;
            // 💬 UA: Знайти -> "Search"
            this->button1->Text = L"Search";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // listBox1
            // 
            this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->listBox1->FormattingEnabled = true;
            this->listBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->listBox1->ItemHeight = 15;
            this->listBox1->Location = System::Drawing::Point(301, 31);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(546, 199);
            this->listBox1->TabIndex = 1;
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(46, 96);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(168, 20);
            this->textBox1->TabIndex = 2;
            // 💬 UA: Введіть прізвище -> "Enter last name"
            this->textBox1->Text = L"Enter last name";
            this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
            // 
            // listBox2
            // 
            this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->listBox2->FormattingEnabled = true;
            this->listBox2->ItemHeight = 15;
            this->listBox2->Location = System::Drawing::Point(301, 303);
            this->listBox2->Name = L"listBox2";
            this->listBox2->Size = System::Drawing::Size(546, 199);
            this->listBox2->TabIndex = 4;
            this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
            // 
            // button2
            // 
            this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button2->ForeColor = System::Drawing::Color::White;
            this->button2->Location = System::Drawing::Point(73, 336);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(118, 56);
            this->button2->TabIndex = 5;
            // 💬 UA: Додати гостя і Забронювати номер -> "Add Guest & Book Room"
            this->button2->Text = L"Add Guest & Book Room";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button3
            // 
            this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Verdana", 9));
            this->button3->ForeColor = System::Drawing::Color::White;
            this->button3->Location = System::Drawing::Point(73, 419);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(118, 51);
            this->button3->TabIndex = 6;
            // 💬 UA: Додати новий номер готелю -> "Add New Hotel Room"
            this->button3->Text = L"Add New Hotel Room";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // checkBox1
            // 
            this->checkBox1->AutoSize = true;
            this->checkBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->checkBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox1.BackgroundImage")));
            this->checkBox1->Location = System::Drawing::Point(618, 262);
            this->checkBox1->Name = L"checkBox1";
            this->checkBox1->Size = System::Drawing::Size(79, 17);
            this->checkBox1->TabIndex = 20;
            // 💬 UA: З оплатою -> "Paid"
            this->checkBox1->Text = L"Paid";
            this->checkBox1->UseVisualStyleBackColor = false;
            this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
            // 
            // button4
            // 
            this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Location = System::Drawing::Point(790, 254);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(30, 30);
            this->button4->TabIndex = 21;
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // comboBox1
            // 
            this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 9));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(361, 257);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(88, 22);
            this->comboBox1->Sorted = true;
            this->comboBox1->TabIndex = 22;
            this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::Black;
            this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Verdana", 9));
            this->button5->ForeColor = System::Drawing::Color::White;
            this->button5->Location = System::Drawing::Point(471, 256);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(100, 25);
            this->button5->TabIndex = 23;
            // 💬 UA: Вивести -> "Display"
            this->button5->Text = L"Display";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(12, 294);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(244, 219);
            this->pictureBox1->TabIndex = 24;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(12, 22);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(244, 219);
            this->pictureBox2->TabIndex = 25;
            this->pictureBox2->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(290, 19);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(571, 222);
            this->pictureBox3->TabIndex = 26;
            this->pictureBox3->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(290, 294);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(571, 219);
            this->pictureBox4->TabIndex = 27;
            this->pictureBox4->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(290, 247);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(307, 41);
            this->pictureBox5->TabIndex = 28;
            this->pictureBox5->TabStop = false;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(873, 537);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->checkBox1);
            this->Controls->Add(this->listBox2);
            this->Controls->Add(this->listBox1);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->pictureBox5);
            this->DoubleBuffered = true;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Location = System::Drawing::Point(28, 32);
            this->Name = L"MyForm";
            // 💬 UA: Виведення усіх номерів -> "Display All Rooms"
            this->Text = L"Display All Rooms";
            this->Activated += gcnew System::EventHandler(this, &MyForm::MyForm_Activated);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        // ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
        // 📋 SECTION: Custom UI Display Methods
        // ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨

        // 🔍 Filter and display specific room and guest matches in ListBoxes
        void show22()
        {
            listBox2->Items->Clear();
            listBox1->Items->Clear();
            for (int i = 0; i < roomss.get_size(); i++)
            {
                if (c == roomss.get_vector()[i].get_id_nomer())
                {
                    String^ str = gcnew String((roomss.get_vector()[i].get_reservation() + " | " + roomss.get_vector()[i].get_payment() + " | " + roomss.get_vector()[i].get_family() + " | " + roomss.get_vector()[i].get_family2()).c_str());
                    this->listBox2->Items->Add(Convert::ToString(roomss.get_vector()[i].get_id_nomer() + " | " + str));
                    String^ str1 = gcnew String((Guests.get_vector()[i].get_name() + " | " + Guests.get_vector()[i].get_fam() + " | " + Guests.get_vector()[i].get_gender() + " | " + Guests.get_vector()[i].get_luggage() + " | " + Guests.get_vector()[i].get_family() + " | " + Guests.get_vector()[i].get_nationality()).c_str());
                    this->listBox1->Items->Add(Convert::ToString(str1 + "  |  " + Guests.get_vector()[i].get_age()));
                }
            }
        }

        // 🔢 Populate ComboBox with available room numbers
        void show12()
        {
            comboBox1->Items->Clear();
            for (int i = 0; i < nomers.get_size(); i++)
            {
                this->comboBox1->Items->Add(nomers.get_vector()[i].get_room_number() );
            }
        }

        // 👥 Populate ListBox1 with all active guests
        void show()
        {
            listBox1->Items->Clear();
            for (int i = 0; i < Guests.get_size(); i++)
            {
                String^ str = gcnew String((Guests.get_vector()[i].get_name() + " | " + Guests.get_vector()[i].get_fam() + " | " + Guests.get_vector()[i].get_gender() + " | " + Guests.get_vector()[i].get_luggage() + " | " + Guests.get_vector()[i].get_family() + " | " + Guests.get_vector()[i].get_nationality()).c_str());
                this->listBox1->Items->Add(str + "  |  " + Convert::ToString(Guests.get_vector()[i].get_age()));
            }
        }

        // 🔑 Populate ListBox2 with all rooms data
        void show2()
        {
            listBox2->Items->Clear();
            for (int i = 0; i < roomss.get_size(); i++)
            {
                String^ str = gcnew String((roomss.get_vector()[i].get_payment() + " | " + roomss.get_vector()[i].get_family() + " | " + roomss.get_vector()[i].get_family2() + " | " + roomss.get_vector()[i].get_reservation() + " | " + roomss.get_vector()[i].get_payment1()).c_str());
                this->listBox2->Items->Add(roomss.get_vector()[i].get_id_nomer() + " | " + str);
            }
        }

        // 💳 Filter and display paid items only
        void show4()
        {
            listBox2->Items->Clear();
            listBox1->Items->Clear();
            for (int i = 0; i < roomss.get_size(); i++)
            {
                if (s2 == roomss.get_vector()[i].get_payment())
                {
                    String^ str = gcnew String((roomss.get_vector()[i].get_payment() + " | " + roomss.get_vector()[i].get_family() + " | " + roomss.get_vector()[i].get_family2() + " | " + roomss.get_vector()[i].get_reservation() + " | " + roomss.get_vector()[i].get_payment1()).c_str());
                    this->listBox2->Items->Add(roomss.get_vector()[i].get_id_nomer() + " | " + str);
                    String^ str2 = gcnew String((Guests.get_vector()[i].get_name() + " | " + Guests.get_vector()[i].get_fam() + " | " + Guests.get_vector()[i].get_gender() + " | " + Guests.get_vector()[i].get_luggage() + " | " + Guests.get_vector()[i].get_family() + " | " + Guests.get_vector()[i].get_nationality()).c_str());
                    this->listBox1->Items->Add(str2 + "  |  " + Convert::ToString(Guests.get_vector()[i].get_age()));
                }
            }
        }

        // 🏷️ Filter and display records matching specific Family name criteria
        void show3()
        {
            listBox2->Items->Clear();
            listBox1->Items->Clear();
            for (int i = 0; i < roomss.get_size(); i++)
            {
                if (s1 == roomss.get_vector()[i].get_family())
                {
                    String^ str = gcnew String((roomss.get_vector()[i].get_reservation() + " | " + roomss.get_vector()[i].get_payment() + " | " + roomss.get_vector()[i].get_family() + " | " + roomss.get_vector()[i].get_family2()).c_str());
                    this->listBox2->Items->Add(Convert::ToString(roomss.get_vector()[i].get_id_nomer() + " | " + str));
                    String^ str1 = gcnew String((Guests.get_vector()[i].get_name() + " | " + Guests.get_vector()[i].get_fam() + " | " + Guests.get_vector()[i].get_gender() + " | " + Guests.get_vector()[i].get_luggage() + " | " + Guests.get_vector()[i].get_family() + " | " + Guests.get_vector()[i].get_nationality()).c_str());
                    this->listBox1->Items->Add(Convert::ToString(str1 + "  |  " + Guests.get_vector()[i].get_age()));
                }
            }
        }

        // ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
        // ⚡ SECTION: Form UI Event Handlers
        // ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        // 💬 UA: створити форму Form2 -> Create form Form1
        // 💬 UA: сховати Form1 -> Hide Form1
        // 💬 UA: видобразити Form2 в модальному режимі -> Display Form1 in modal dialog mode
        // 💬 UA: відобразити Form1 після закриття Form2 -> Show Form1 again once Form1 dialog closes
        MyForm1^ f = gcnew MyForm1(); 
        this->Hide();   
        f->ShowDialog();  
        this->Show();  
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        // 💬 UA: створити форму Form2 -> Create form Form2
        // 💬 UA: сховати Form1 -> Hide Form1
        // 💬 UA: видобразити Form2 в модальному режимі -> Display Form2 in modal dialog mode
        // 💬 UA: відобразити Form1 після закриття Form2 -> Show Form1 again once Form2 dialog closes
        MyForm2^ f = gcnew MyForm2(); 
        this->Hide();   
        f->ShowDialog();  
        this->Show();  
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        MarshalString(textBox1->Text, s1);
        show3();
    }
    private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
        show4();
    }
    private: System::Void MyForm_Activated(System::Object^ sender, System::EventArgs^ e) {
        Guests = load_from_file_Guest();
        roomss = load_from_file_room();
        nomers = load_from_file_nomer();
        show();
        show2();
        show12();
    }
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        Guests = load_from_file_Guest();
        roomss = load_from_file_room();
        nomers = load_from_file_nomer();
        show();
        show2();
        show12();
    }
    private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
        if (comboBox1->Text != "" )
        {
            c = Convert::ToInt32(comboBox1->Text);
            show22();
        }
        else {
            // 💬 UA: Введіть коректно дані! -> "Please enter valid data!"
            // 💬 UA: Помилка введення! -> "Input Error!"
            MessageBox::Show("Please enter valid data!", "Input Error!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
        }
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
};
}