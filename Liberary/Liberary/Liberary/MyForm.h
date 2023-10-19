#pragma once
#include "MyForm1.h"

namespace Liberary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Panel^ pn_title;
	protected:

	private: System::Windows::Forms::Panel^ pn_stat;
	private: System::Windows::Forms::Panel^ pn_nav;
	private: System::Windows::Forms::Panel^ pn_con;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lb_home;

	private: System::Windows::Forms::Button^ bt_home;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ lb_std;

	private: System::Windows::Forms::Button^ bt_student;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ lb_bks;

	private: System::Windows::Forms::Button^ bt_books;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ lb_cat;

	private: System::Windows::Forms::Button^ bt_category;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ lb_slg;

	private: System::Windows::Forms::Button^ bt_selling;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ lb_brg;

	private: System::Windows::Forms::Button^ button9;


	private: System::Windows::Forms::Button^ button10;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ pn_borrowing;
	private: System::Windows::Forms::Panel^ pn_selling;
	private: System::Windows::Forms::Panel^ pn_category;
	private: System::Windows::Forms::Panel^ pn_books;
	private: System::Windows::Forms::Panel^ pn_student;
	private: System::Windows::Forms::Panel^ pn_home;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;























	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::Panel^ pn_info;

private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::Panel^ panel21;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::Panel^ panel22;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::Panel^ panel23;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::Panel^ panel24;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::PictureBox^ pictureBox8;


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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->pn_title = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->pn_stat = (gcnew System::Windows::Forms::Panel());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->pn_nav = (gcnew System::Windows::Forms::Panel());
            this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->lb_home = (gcnew System::Windows::Forms::Label());
            this->bt_home = (gcnew System::Windows::Forms::Button());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->lb_std = (gcnew System::Windows::Forms::Label());
            this->bt_student = (gcnew System::Windows::Forms::Button());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->lb_bks = (gcnew System::Windows::Forms::Label());
            this->bt_books = (gcnew System::Windows::Forms::Button());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->lb_cat = (gcnew System::Windows::Forms::Label());
            this->bt_category = (gcnew System::Windows::Forms::Button());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->lb_slg = (gcnew System::Windows::Forms::Label());
            this->bt_selling = (gcnew System::Windows::Forms::Button());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->lb_brg = (gcnew System::Windows::Forms::Label());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->pn_info = (gcnew System::Windows::Forms::Panel());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->pn_con = (gcnew System::Windows::Forms::Panel());
            this->pn_student = (gcnew System::Windows::Forms::Panel());
            this->panel14 = (gcnew System::Windows::Forms::Panel());
            this->panel18 = (gcnew System::Windows::Forms::Panel());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->panel17 = (gcnew System::Windows::Forms::Panel());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->panel16 = (gcnew System::Windows::Forms::Panel());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->panel15 = (gcnew System::Windows::Forms::Panel());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel19 = (gcnew System::Windows::Forms::Panel());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->panel20 = (gcnew System::Windows::Forms::Panel());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->panel21 = (gcnew System::Windows::Forms::Panel());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
            this->panel22 = (gcnew System::Windows::Forms::Panel());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
            this->panel23 = (gcnew System::Windows::Forms::Panel());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
            this->panel24 = (gcnew System::Windows::Forms::Panel());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
            this->panel13 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->pn_home = (gcnew System::Windows::Forms::Panel());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->panel9 = (gcnew System::Windows::Forms::Panel());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->panel11 = (gcnew System::Windows::Forms::Panel());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->panel12 = (gcnew System::Windows::Forms::Panel());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->pn_borrowing = (gcnew System::Windows::Forms::Panel());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->pn_selling = (gcnew System::Windows::Forms::Panel());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->pn_category = (gcnew System::Windows::Forms::Panel());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->pn_books = (gcnew System::Windows::Forms::Panel());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->pn_title->SuspendLayout();
            this->pn_stat->SuspendLayout();
            this->pn_nav->SuspendLayout();
            this->flowLayoutPanel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel5->SuspendLayout();
            this->panel6->SuspendLayout();
            this->panel7->SuspendLayout();
            this->panel1->SuspendLayout();
            this->pn_info->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->pn_con->SuspendLayout();
            this->pn_student->SuspendLayout();
            this->panel14->SuspendLayout();
            this->panel18->SuspendLayout();
            this->panel17->SuspendLayout();
            this->panel16->SuspendLayout();
            this->panel15->SuspendLayout();
            this->flowLayoutPanel3->SuspendLayout();
            this->panel19->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            this->panel20->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            this->panel21->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
            this->panel22->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
            this->panel23->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
            this->panel24->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
            this->panel13->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            this->pn_home->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            this->flowLayoutPanel2->SuspendLayout();
            this->panel8->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->panel9->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->panel10->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->panel11->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            this->panel12->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            this->pn_borrowing->SuspendLayout();
            this->pn_selling->SuspendLayout();
            this->pn_category->SuspendLayout();
            this->pn_books->SuspendLayout();
            this->SuspendLayout();
            // 
            // pn_title
            // 
            this->pn_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->pn_title->Controls->Add(this->label1);
            this->pn_title->Controls->Add(this->button3);
            this->pn_title->Controls->Add(this->button2);
            this->pn_title->Controls->Add(this->button1);
            this->pn_title->Dock = System::Windows::Forms::DockStyle::Top;
            this->pn_title->Location = System::Drawing::Point(0, 0);
            this->pn_title->Name = L"pn_title";
            this->pn_title->Size = System::Drawing::Size(1003, 54);
            this->pn_title->TabIndex = 0;
            // 
            // label1
            // 
            this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label1->Location = System::Drawing::Point(400, 3);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(203, 45);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Manager";
            this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // button3
            // 
            this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
            this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Location = System::Drawing::Point(783, 3);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(70, 46);
            this->button3->TabIndex = 2;
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // button2
            // 
            this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
            this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Location = System::Drawing::Point(859, 3);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(70, 46);
            this->button2->TabIndex = 1;
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button1
            // 
            this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
            this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Location = System::Drawing::Point(928, 2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(75, 46);
            this->button1->TabIndex = 0;
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // pn_stat
            // 
            this->pn_stat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->pn_stat->Controls->Add(this->label13);
            this->pn_stat->Controls->Add(this->label12);
            this->pn_stat->Controls->Add(this->label11);
            this->pn_stat->Controls->Add(this->label10);
            this->pn_stat->Controls->Add(this->label9);
            this->pn_stat->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->pn_stat->Location = System::Drawing::Point(0, 607);
            this->pn_stat->Name = L"pn_stat";
            this->pn_stat->Size = System::Drawing::Size(1003, 65);
            this->pn_stat->TabIndex = 4;
            // 
            // label13
            // 
            this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->label13->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::Color::Red;
            this->label13->Location = System::Drawing::Point(928, 23);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(72, 18);
            this->label13->TabIndex = 4;
            this->label13->Text = L"V 1.0.0";
            // 
            // label12
            // 
            this->label12->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label12->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->label12->Location = System::Drawing::Point(528, 15);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(86, 31);
            this->label12->TabIndex = 3;
            this->label12->Text = L"Manager";
            this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
            // 
            // label11
            // 
            this->label11->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label11->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(442, 14);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(91, 33);
            this->label11->TabIndex = 2;
            this->label11->Text = L"Position : ";
            this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // label10
            // 
            this->label10->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label10->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->label10->Location = System::Drawing::Point(114, 15);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(106, 32);
            this->label10->TabIndex = 1;
            this->label10->Text = L"Ahmed Yehia";
            this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
            // 
            // label9
            // 
            this->label9->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label9->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(3, 14);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(105, 33);
            this->label9->TabIndex = 0;
            this->label9->Text = L"Username : ";
            this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // pn_nav
            // 
            this->pn_nav->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->pn_nav->Controls->Add(this->flowLayoutPanel1);
            this->pn_nav->Controls->Add(this->panel1);
            this->pn_nav->Dock = System::Windows::Forms::DockStyle::Left;
            this->pn_nav->Location = System::Drawing::Point(0, 54);
            this->pn_nav->Name = L"pn_nav";
            this->pn_nav->Size = System::Drawing::Size(283, 553);
            this->pn_nav->TabIndex = 5;
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->Controls->Add(this->panel2);
            this->flowLayoutPanel1->Controls->Add(this->panel3);
            this->flowLayoutPanel1->Controls->Add(this->panel4);
            this->flowLayoutPanel1->Controls->Add(this->panel5);
            this->flowLayoutPanel1->Controls->Add(this->panel6);
            this->flowLayoutPanel1->Controls->Add(this->panel7);
            this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
            this->flowLayoutPanel1->Location = System::Drawing::Point(0, 204);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(283, 349);
            this->flowLayoutPanel1->TabIndex = 1;
            // 
            // panel2
            // 
            this->panel2->Controls->Add(this->lb_home);
            this->panel2->Controls->Add(this->bt_home);
            this->panel2->Location = System::Drawing::Point(3, 10);
            this->panel2->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(277, 44);
            this->panel2->TabIndex = 0;
            // 
            // lb_home
            // 
            this->lb_home->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_home->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->lb_home->Location = System::Drawing::Point(70, 4);
            this->lb_home->Name = L"lb_home";
            this->lb_home->Size = System::Drawing::Size(70, 34);
            this->lb_home->TabIndex = 4;
            this->lb_home->Text = L"Home";
            this->lb_home->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // bt_home
            // 
            this->bt_home->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->bt_home->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_home.BackgroundImage")));
            this->bt_home->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->bt_home->FlatAppearance->BorderSize = 0;
            this->bt_home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bt_home->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_home->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->bt_home->Location = System::Drawing::Point(9, 3);
            this->bt_home->Name = L"bt_home";
            this->bt_home->Size = System::Drawing::Size(44, 37);
            this->bt_home->TabIndex = 2;
            this->bt_home->UseVisualStyleBackColor = true;
            this->bt_home->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // panel3
            // 
            this->panel3->Controls->Add(this->lb_std);
            this->panel3->Controls->Add(this->bt_student);
            this->panel3->Location = System::Drawing::Point(3, 67);
            this->panel3->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(277, 44);
            this->panel3->TabIndex = 1;
            // 
            // lb_std
            // 
            this->lb_std->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_std->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->lb_std->Location = System::Drawing::Point(70, 7);
            this->lb_std->Name = L"lb_std";
            this->lb_std->Size = System::Drawing::Size(91, 33);
            this->lb_std->TabIndex = 4;
            this->lb_std->Text = L"Student";
            this->lb_std->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // bt_student
            // 
            this->bt_student->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->bt_student->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_student.BackgroundImage")));
            this->bt_student->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->bt_student->FlatAppearance->BorderSize = 0;
            this->bt_student->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bt_student->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_student->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->bt_student->Location = System::Drawing::Point(9, 7);
            this->bt_student->Name = L"bt_student";
            this->bt_student->Size = System::Drawing::Size(44, 33);
            this->bt_student->TabIndex = 2;
            this->bt_student->UseVisualStyleBackColor = true;
            this->bt_student->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // panel4
            // 
            this->panel4->Controls->Add(this->lb_bks);
            this->panel4->Controls->Add(this->bt_books);
            this->panel4->Location = System::Drawing::Point(3, 124);
            this->panel4->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(277, 44);
            this->panel4->TabIndex = 2;
            // 
            // lb_bks
            // 
            this->lb_bks->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_bks->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->lb_bks->Location = System::Drawing::Point(70, 3);
            this->lb_bks->Name = L"lb_bks";
            this->lb_bks->Size = System::Drawing::Size(79, 37);
            this->lb_bks->TabIndex = 4;
            this->lb_bks->Text = L"Books";
            this->lb_bks->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // bt_books
            // 
            this->bt_books->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->bt_books->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_books.BackgroundImage")));
            this->bt_books->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->bt_books->FlatAppearance->BorderSize = 0;
            this->bt_books->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bt_books->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_books->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->bt_books->Location = System::Drawing::Point(9, 3);
            this->bt_books->Name = L"bt_books";
            this->bt_books->Size = System::Drawing::Size(44, 36);
            this->bt_books->TabIndex = 2;
            this->bt_books->UseVisualStyleBackColor = true;
            this->bt_books->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
            // 
            // panel5
            // 
            this->panel5->Controls->Add(this->lb_cat);
            this->panel5->Controls->Add(this->bt_category);
            this->panel5->Location = System::Drawing::Point(3, 181);
            this->panel5->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(277, 44);
            this->panel5->TabIndex = 3;
            // 
            // lb_cat
            // 
            this->lb_cat->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_cat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->lb_cat->Location = System::Drawing::Point(66, 7);
            this->lb_cat->Name = L"lb_cat";
            this->lb_cat->Size = System::Drawing::Size(113, 33);
            this->lb_cat->TabIndex = 4;
            this->lb_cat->Text = L"Category";
            this->lb_cat->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // bt_category
            // 
            this->bt_category->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->bt_category->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_category.BackgroundImage")));
            this->bt_category->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->bt_category->FlatAppearance->BorderSize = 0;
            this->bt_category->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bt_category->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_category->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->bt_category->Location = System::Drawing::Point(9, 7);
            this->bt_category->Name = L"bt_category";
            this->bt_category->Size = System::Drawing::Size(44, 33);
            this->bt_category->TabIndex = 2;
            this->bt_category->UseVisualStyleBackColor = true;
            this->bt_category->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
            // 
            // panel6
            // 
            this->panel6->Controls->Add(this->lb_slg);
            this->panel6->Controls->Add(this->bt_selling);
            this->panel6->Location = System::Drawing::Point(3, 238);
            this->panel6->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(277, 44);
            this->panel6->TabIndex = 4;
            // 
            // lb_slg
            // 
            this->lb_slg->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_slg->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->lb_slg->Location = System::Drawing::Point(66, 7);
            this->lb_slg->Name = L"lb_slg";
            this->lb_slg->Size = System::Drawing::Size(83, 31);
            this->lb_slg->TabIndex = 4;
            this->lb_slg->Text = L"Selling";
            this->lb_slg->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->lb_slg->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
            // 
            // bt_selling
            // 
            this->bt_selling->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->bt_selling->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_selling.BackgroundImage")));
            this->bt_selling->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->bt_selling->FlatAppearance->BorderSize = 0;
            this->bt_selling->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bt_selling->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bt_selling->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->bt_selling->Location = System::Drawing::Point(9, 3);
            this->bt_selling->Name = L"bt_selling";
            this->bt_selling->Size = System::Drawing::Size(44, 33);
            this->bt_selling->TabIndex = 2;
            this->bt_selling->UseVisualStyleBackColor = true;
            this->bt_selling->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
            // 
            // panel7
            // 
            this->panel7->Controls->Add(this->lb_brg);
            this->panel7->Controls->Add(this->button9);
            this->panel7->Location = System::Drawing::Point(3, 295);
            this->panel7->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(277, 44);
            this->panel7->TabIndex = 5;
            // 
            // lb_brg
            // 
            this->lb_brg->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_brg->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->lb_brg->Location = System::Drawing::Point(66, 2);
            this->lb_brg->Name = L"lb_brg";
            this->lb_brg->Size = System::Drawing::Size(127, 37);
            this->lb_brg->TabIndex = 4;
            this->lb_brg->Text = L"Borrowing";
            this->lb_brg->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // button9
            // 
            this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
            this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button9->FlatAppearance->BorderSize = 0;
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button9->Location = System::Drawing::Point(9, 7);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(44, 34);
            this->button9->TabIndex = 2;
            this->button9->UseVisualStyleBackColor = true;
            this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->pn_info);
            this->panel1->Controls->Add(this->button10);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(283, 204);
            this->panel1->TabIndex = 0;
            // 
            // pn_info
            // 
            this->pn_info->Controls->Add(this->label29);
            this->pn_info->Controls->Add(this->label8);
            this->pn_info->Controls->Add(this->pictureBox1);
            this->pn_info->Location = System::Drawing::Point(7, 6);
            this->pn_info->Name = L"pn_info";
            this->pn_info->Size = System::Drawing::Size(213, 184);
            this->pn_info->TabIndex = 2;
            // 
            // label29
            // 
            this->label29->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label29->Location = System::Drawing::Point(62, 134);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(86, 35);
            this->label29->TabIndex = 9;
            this->label29->Text = L"Manager";
            this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // label8
            // 
            this->label8->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::Color::Tomato;
            this->label8->Location = System::Drawing::Point(44, 99);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(135, 35);
            this->label8->TabIndex = 8;
            this->label8->Text = L"Ahmed Yehia";
            this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox1->Location = System::Drawing::Point(5, 3);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(205, 86);
            this->pictureBox1->TabIndex = 7;
            this->pictureBox1->TabStop = false;
            // 
            // button10
            // 
            this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
            this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button10->FlatAppearance->BorderSize = 0;
            this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button10->Location = System::Drawing::Point(214, 6);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(66, 52);
            this->button10->TabIndex = 1;
            this->button10->UseVisualStyleBackColor = true;
            this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
            // 
            // pn_con
            // 
            this->pn_con->Controls->Add(this->pn_home);
            this->pn_con->Controls->Add(this->pn_student);
            this->pn_con->Controls->Add(this->pn_borrowing);
            this->pn_con->Controls->Add(this->pn_selling);
            this->pn_con->Controls->Add(this->pn_category);
            this->pn_con->Controls->Add(this->pn_books);
            this->pn_con->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_con->Location = System::Drawing::Point(0, 54);
            this->pn_con->Name = L"pn_con";
            this->pn_con->Size = System::Drawing::Size(1003, 553);
            this->pn_con->TabIndex = 6;
            // 
            // pn_student
            // 
            this->pn_student->Controls->Add(this->panel14);
            this->pn_student->Controls->Add(this->flowLayoutPanel3);
            this->pn_student->Controls->Add(this->panel13);
            this->pn_student->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_student->Location = System::Drawing::Point(0, 0);
            this->pn_student->Name = L"pn_student";
            this->pn_student->Size = System::Drawing::Size(1003, 553);
            this->pn_student->TabIndex = 1;
            // 
            // panel14
            // 
            this->panel14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panel14->Controls->Add(this->panel18);
            this->panel14->Controls->Add(this->panel17);
            this->panel14->Controls->Add(this->panel16);
            this->panel14->Controls->Add(this->panel15);
            this->panel14->Location = System::Drawing::Point(286, 436);
            this->panel14->Name = L"panel14";
            this->panel14->Size = System::Drawing::Size(714, 114);
            this->panel14->TabIndex = 3;
            // 
            // panel18
            // 
            this->panel18->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel18->Controls->Add(this->label5);
            this->panel18->Controls->Add(this->button7);
            this->panel18->Location = System::Drawing::Point(31, 9);
            this->panel18->Name = L"panel18";
            this->panel18->Size = System::Drawing::Size(114, 98);
            this->panel18->TabIndex = 3;
            // 
            // label5
            // 
            this->label5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label5->Location = System::Drawing::Point(13, 58);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(85, 29);
            this->label5->TabIndex = 5;
            this->label5->Text = L"Details";
            this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // button7
            // 
            this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
            this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button7->FlatAppearance->BorderSize = 0;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button7->Location = System::Drawing::Point(35, 14);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(44, 37);
            this->button7->TabIndex = 3;
            this->button7->UseVisualStyleBackColor = true;
            // 
            // panel17
            // 
            this->panel17->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel17->Controls->Add(this->label4);
            this->panel17->Controls->Add(this->button6);
            this->panel17->Location = System::Drawing::Point(218, 10);
            this->panel17->Name = L"panel17";
            this->panel17->Size = System::Drawing::Size(114, 98);
            this->panel17->TabIndex = 2;
            // 
            // label4
            // 
            this->label4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label4->Location = System::Drawing::Point(29, 58);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(57, 29);
            this->label4->TabIndex = 5;
            this->label4->Text = L"Edit";
            this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // button6
            // 
            this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
            this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button6->FlatAppearance->BorderSize = 0;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button6->Location = System::Drawing::Point(35, 14);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(44, 37);
            this->button6->TabIndex = 3;
            this->button6->UseVisualStyleBackColor = true;
            // 
            // panel16
            // 
            this->panel16->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel16->Controls->Add(this->label3);
            this->panel16->Controls->Add(this->button5);
            this->panel16->Location = System::Drawing::Point(401, 9);
            this->panel16->Name = L"panel16";
            this->panel16->Size = System::Drawing::Size(114, 98);
            this->panel16->TabIndex = 1;
            // 
            // label3
            // 
            this->label3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label3->Location = System::Drawing::Point(6, 58);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(105, 29);
            this->label3->TabIndex = 5;
            this->label3->Text = L"Delete";
            this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // button5
            // 
            this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
            this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button5->FlatAppearance->BorderSize = 0;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button5->Location = System::Drawing::Point(35, 14);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(44, 37);
            this->button5->TabIndex = 3;
            this->button5->UseVisualStyleBackColor = true;
            // 
            // panel15
            // 
            this->panel15->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel15->Controls->Add(this->label2);
            this->panel15->Controls->Add(this->button4);
            this->panel15->Location = System::Drawing::Point(569, 10);
            this->panel15->Margin = System::Windows::Forms::Padding(5);
            this->panel15->Name = L"panel15";
            this->panel15->Size = System::Drawing::Size(114, 98);
            this->panel15->TabIndex = 0;
            // 
            // label2
            // 
            this->label2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label2->Location = System::Drawing::Point(31, 58);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(57, 29);
            this->label2->TabIndex = 5;
            this->label2->Text = L"Add";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // button4
            // 
            this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
            this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->button4->Location = System::Drawing::Point(35, 14);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(44, 37);
            this->button4->TabIndex = 3;
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
            // 
            // flowLayoutPanel3
            // 
            this->flowLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->flowLayoutPanel3->Controls->Add(this->panel19);
            this->flowLayoutPanel3->Controls->Add(this->panel20);
            this->flowLayoutPanel3->Controls->Add(this->panel21);
            this->flowLayoutPanel3->Controls->Add(this->panel22);
            this->flowLayoutPanel3->Controls->Add(this->panel23);
            this->flowLayoutPanel3->Controls->Add(this->panel24);
            this->flowLayoutPanel3->Location = System::Drawing::Point(285, 112);
            this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
            this->flowLayoutPanel3->Size = System::Drawing::Size(715, 324);
            this->flowLayoutPanel3->TabIndex = 2;
            // 
            // panel19
            // 
            this->panel19->Controls->Add(this->label19);
            this->panel19->Controls->Add(this->label7);
            this->panel19->Controls->Add(this->label6);
            this->panel19->Controls->Add(this->pictureBox9);
            this->panel19->Location = System::Drawing::Point(3, 3);
            this->panel19->Name = L"panel19";
            this->panel19->Size = System::Drawing::Size(264, 143);
            this->panel19->TabIndex = 0;
            // 
            // label19
            // 
            this->label19->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label19->Location = System::Drawing::Point(10, 96);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(235, 34);
            this->label19->TabIndex = 5;
            this->label19->Text = L"Name : khaled Omar";
            this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // label7
            // 
            this->label7->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(5, 43);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(112, 37);
            this->label7->TabIndex = 2;
            this->label7->Text = L"Class : 5th";
            this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // label6
            // 
            this->label6->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(3, 6);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(89, 37);
            this->label6->TabIndex = 1;
            this->label6->Text = L"Age : 22";
            this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox9
            // 
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(127, 4);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(134, 85);
            this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox9->TabIndex = 0;
            this->pictureBox9->TabStop = false;
            // 
            // panel20
            // 
            this->panel20->Controls->Add(this->label30);
            this->panel20->Controls->Add(this->label31);
            this->panel20->Controls->Add(this->label32);
            this->panel20->Controls->Add(this->pictureBox10);
            this->panel20->Location = System::Drawing::Point(273, 3);
            this->panel20->Name = L"panel20";
            this->panel20->Size = System::Drawing::Size(264, 143);
            this->panel20->TabIndex = 1;
            // 
            // label30
            // 
            this->label30->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label30->Location = System::Drawing::Point(10, 96);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(235, 34);
            this->label30->TabIndex = 5;
            this->label30->Text = L"Name : khaled Omar";
            this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // label31
            // 
            this->label31->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(5, 43);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(112, 37);
            this->label31->TabIndex = 2;
            this->label31->Text = L"Class : 5th";
            this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // label32
            // 
            this->label32->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(3, 6);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(89, 37);
            this->label32->TabIndex = 1;
            this->label32->Text = L"Age : 22";
            this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox10
            // 
            this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
            this->pictureBox10->Location = System::Drawing::Point(127, 4);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(134, 85);
            this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox10->TabIndex = 0;
            this->pictureBox10->TabStop = false;
            // 
            // panel21
            // 
            this->panel21->Controls->Add(this->label33);
            this->panel21->Controls->Add(this->label34);
            this->panel21->Controls->Add(this->label35);
            this->panel21->Controls->Add(this->pictureBox11);
            this->panel21->Location = System::Drawing::Point(3, 152);
            this->panel21->Name = L"panel21";
            this->panel21->Size = System::Drawing::Size(264, 143);
            this->panel21->TabIndex = 2;
            // 
            // label33
            // 
            this->label33->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label33->Location = System::Drawing::Point(10, 96);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(235, 34);
            this->label33->TabIndex = 5;
            this->label33->Text = L"Name : khaled Omar";
            this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // label34
            // 
            this->label34->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(5, 43);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(112, 37);
            this->label34->TabIndex = 2;
            this->label34->Text = L"Class : 5th";
            this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // label35
            // 
            this->label35->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label35->Location = System::Drawing::Point(3, 6);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(89, 37);
            this->label35->TabIndex = 1;
            this->label35->Text = L"Age : 22";
            this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox11
            // 
            this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
            this->pictureBox11->Location = System::Drawing::Point(127, 4);
            this->pictureBox11->Name = L"pictureBox11";
            this->pictureBox11->Size = System::Drawing::Size(134, 85);
            this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox11->TabIndex = 0;
            this->pictureBox11->TabStop = false;
            // 
            // panel22
            // 
            this->panel22->Controls->Add(this->label36);
            this->panel22->Controls->Add(this->label37);
            this->panel22->Controls->Add(this->label38);
            this->panel22->Controls->Add(this->pictureBox12);
            this->panel22->Location = System::Drawing::Point(273, 152);
            this->panel22->Name = L"panel22";
            this->panel22->Size = System::Drawing::Size(264, 143);
            this->panel22->TabIndex = 3;
            // 
            // label36
            // 
            this->label36->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label36->Location = System::Drawing::Point(10, 96);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(235, 34);
            this->label36->TabIndex = 5;
            this->label36->Text = L"Name : khaled Omar";
            this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // label37
            // 
            this->label37->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label37->Location = System::Drawing::Point(5, 43);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(112, 37);
            this->label37->TabIndex = 2;
            this->label37->Text = L"Class : 5th";
            this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // label38
            // 
            this->label38->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label38->Location = System::Drawing::Point(3, 6);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(89, 37);
            this->label38->TabIndex = 1;
            this->label38->Text = L"Age : 22";
            this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox12
            // 
            this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
            this->pictureBox12->Location = System::Drawing::Point(127, 4);
            this->pictureBox12->Name = L"pictureBox12";
            this->pictureBox12->Size = System::Drawing::Size(134, 85);
            this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox12->TabIndex = 0;
            this->pictureBox12->TabStop = false;
            // 
            // panel23
            // 
            this->panel23->Controls->Add(this->label39);
            this->panel23->Controls->Add(this->label40);
            this->panel23->Controls->Add(this->label41);
            this->panel23->Controls->Add(this->pictureBox13);
            this->panel23->Location = System::Drawing::Point(3, 301);
            this->panel23->Name = L"panel23";
            this->panel23->Size = System::Drawing::Size(264, 143);
            this->panel23->TabIndex = 4;
            // 
            // label39
            // 
            this->label39->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label39->Location = System::Drawing::Point(10, 96);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(235, 34);
            this->label39->TabIndex = 5;
            this->label39->Text = L"Name : khaled Omar";
            this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // label40
            // 
            this->label40->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label40->Location = System::Drawing::Point(5, 43);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(112, 37);
            this->label40->TabIndex = 2;
            this->label40->Text = L"Class : 5th";
            this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // label41
            // 
            this->label41->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label41->Location = System::Drawing::Point(3, 6);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(89, 37);
            this->label41->TabIndex = 1;
            this->label41->Text = L"Age : 22";
            this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox13
            // 
            this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
            this->pictureBox13->Location = System::Drawing::Point(127, 4);
            this->pictureBox13->Name = L"pictureBox13";
            this->pictureBox13->Size = System::Drawing::Size(134, 85);
            this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox13->TabIndex = 0;
            this->pictureBox13->TabStop = false;
            // 
            // panel24
            // 
            this->panel24->Controls->Add(this->label42);
            this->panel24->Controls->Add(this->label43);
            this->panel24->Controls->Add(this->label44);
            this->panel24->Controls->Add(this->pictureBox14);
            this->panel24->Location = System::Drawing::Point(273, 301);
            this->panel24->Name = L"panel24";
            this->panel24->Size = System::Drawing::Size(264, 143);
            this->panel24->TabIndex = 5;
            // 
            // label42
            // 
            this->label42->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label42->Location = System::Drawing::Point(10, 96);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(235, 34);
            this->label42->TabIndex = 5;
            this->label42->Text = L"Name : khaled Omar";
            this->label42->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // label43
            // 
            this->label43->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label43->Location = System::Drawing::Point(5, 43);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(112, 37);
            this->label43->TabIndex = 2;
            this->label43->Text = L"Class : 5th";
            this->label43->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // label44
            // 
            this->label44->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label44->Location = System::Drawing::Point(3, 6);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(89, 37);
            this->label44->TabIndex = 1;
            this->label44->Text = L"Age : 22";
            this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox14
            // 
            this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
            this->pictureBox14->Location = System::Drawing::Point(127, 4);
            this->pictureBox14->Name = L"pictureBox14";
            this->pictureBox14->Size = System::Drawing::Size(134, 85);
            this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox14->TabIndex = 0;
            this->pictureBox14->TabStop = false;
            // 
            // panel13
            // 
            this->panel13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panel13->Controls->Add(this->pictureBox8);
            this->panel13->Location = System::Drawing::Point(285, 3);
            this->panel13->Name = L"panel13";
            this->panel13->Size = System::Drawing::Size(711, 106);
            this->panel13->TabIndex = 1;
            // 
            // pictureBox8
            // 
            this->pictureBox8->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(287, 5);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(140, 88);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox8->TabIndex = 0;
            this->pictureBox8->TabStop = false;
            // 
            // pn_home
            // 
            this->pn_home->Controls->Add(this->pictureBox7);
            this->pn_home->Controls->Add(this->flowLayoutPanel2);
            this->pn_home->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_home->Location = System::Drawing::Point(0, 0);
            this->pn_home->Name = L"pn_home";
            this->pn_home->Size = System::Drawing::Size(1003, 553);
            this->pn_home->TabIndex = 0;
            // 
            // pictureBox7
            // 
            this->pictureBox7->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
            this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(532, 6);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(112, 77);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox7->TabIndex = 5;
            this->pictureBox7->TabStop = false;
            // 
            // flowLayoutPanel2
            // 
            this->flowLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->flowLayoutPanel2->Controls->Add(this->panel8);
            this->flowLayoutPanel2->Controls->Add(this->panel9);
            this->flowLayoutPanel2->Controls->Add(this->panel10);
            this->flowLayoutPanel2->Controls->Add(this->panel11);
            this->flowLayoutPanel2->Controls->Add(this->panel12);
            this->flowLayoutPanel2->Location = System::Drawing::Point(285, 102);
            this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
            this->flowLayoutPanel2->Size = System::Drawing::Size(711, 441);
            this->flowLayoutPanel2->TabIndex = 0;
            // 
            // panel8
            // 
            this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel8->Controls->Add(this->label20);
            this->panel8->Controls->Add(this->label14);
            this->panel8->Controls->Add(this->pictureBox2);
            this->panel8->Location = System::Drawing::Point(10, 10);
            this->panel8->Margin = System::Windows::Forms::Padding(10);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(223, 137);
            this->panel8->TabIndex = 0;
            // 
            // label20
            // 
            this->label20->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label20->Location = System::Drawing::Point(3, 81);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(217, 43);
            this->label20->TabIndex = 5;
            this->label20->Text = L"Number of students";
            this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label14
            // 
            this->label14->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(155, 3);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(65, 43);
            this->label14->TabIndex = 4;
            this->label14->Text = L"100";
            this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(3, 3);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(109, 75);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 0;
            this->pictureBox2->TabStop = false;
            // 
            // panel9
            // 
            this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel9->Controls->Add(this->label21);
            this->panel9->Controls->Add(this->label22);
            this->panel9->Controls->Add(this->pictureBox3);
            this->panel9->Location = System::Drawing::Point(253, 10);
            this->panel9->Margin = System::Windows::Forms::Padding(10);
            this->panel9->Name = L"panel9";
            this->panel9->Size = System::Drawing::Size(223, 137);
            this->panel9->TabIndex = 1;
            // 
            // label21
            // 
            this->label21->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label21->Location = System::Drawing::Point(3, 81);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(217, 43);
            this->label21->TabIndex = 5;
            this->label21->Text = L"Number of books";
            this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label22
            // 
            this->label22->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(155, 3);
            this->label22->Name = L"label22";
            this->label22->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label22->Size = System::Drawing::Size(65, 43);
            this->label22->TabIndex = 4;
            this->label22->Text = L"5000";
            this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(3, 3);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(109, 75);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 0;
            this->pictureBox3->TabStop = false;
            // 
            // panel10
            // 
            this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel10->Controls->Add(this->label23);
            this->panel10->Controls->Add(this->label24);
            this->panel10->Controls->Add(this->pictureBox4);
            this->panel10->Location = System::Drawing::Point(10, 167);
            this->panel10->Margin = System::Windows::Forms::Padding(10);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(223, 147);
            this->panel10->TabIndex = 2;
            // 
            // label23
            // 
            this->label23->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label23->Location = System::Drawing::Point(3, 81);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(217, 56);
            this->label23->TabIndex = 5;
            this->label23->Text = L"Number of categories";
            this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label24
            // 
            this->label24->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(155, 3);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(65, 43);
            this->label24->TabIndex = 4;
            this->label24->Text = L"20";
            this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(3, 3);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(109, 75);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox4->TabIndex = 0;
            this->pictureBox4->TabStop = false;
            // 
            // panel11
            // 
            this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel11->Controls->Add(this->label25);
            this->panel11->Controls->Add(this->label26);
            this->panel11->Controls->Add(this->pictureBox5);
            this->panel11->Location = System::Drawing::Point(253, 167);
            this->panel11->Margin = System::Windows::Forms::Padding(10);
            this->panel11->Name = L"panel11";
            this->panel11->Size = System::Drawing::Size(223, 137);
            this->panel11->TabIndex = 3;
            // 
            // label25
            // 
            this->label25->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label25->Location = System::Drawing::Point(3, 81);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(217, 43);
            this->label25->TabIndex = 5;
            this->label25->Text = L"Sales";
            this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label26
            // 
            this->label26->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(155, 3);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(65, 43);
            this->label26->TabIndex = 4;
            this->label26->Text = L"40%";
            this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(3, 3);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(109, 75);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox5->TabIndex = 0;
            this->pictureBox5->TabStop = false;
            // 
            // panel12
            // 
            this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel12->Controls->Add(this->label27);
            this->panel12->Controls->Add(this->label28);
            this->panel12->Controls->Add(this->pictureBox6);
            this->panel12->Location = System::Drawing::Point(10, 334);
            this->panel12->Margin = System::Windows::Forms::Padding(10);
            this->panel12->Name = L"panel12";
            this->panel12->Size = System::Drawing::Size(223, 137);
            this->panel12->TabIndex = 4;
            // 
            // label27
            // 
            this->label27->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label27->Location = System::Drawing::Point(3, 81);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(217, 43);
            this->label27->TabIndex = 5;
            this->label27->Text = L"Borrowings";
            this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label28
            // 
            this->label28->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(155, 3);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(65, 43);
            this->label28->TabIndex = 4;
            this->label28->Text = L"10%";
            this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(3, 3);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(109, 75);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox6->TabIndex = 0;
            this->pictureBox6->TabStop = false;
            // 
            // pn_borrowing
            // 
            this->pn_borrowing->Controls->Add(this->label15);
            this->pn_borrowing->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_borrowing->Location = System::Drawing::Point(0, 0);
            this->pn_borrowing->Name = L"pn_borrowing";
            this->pn_borrowing->Size = System::Drawing::Size(1003, 553);
            this->pn_borrowing->TabIndex = 5;
            // 
            // label15
            // 
            this->label15->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label15->Location = System::Drawing::Point(441, 240);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(203, 45);
            this->label15->TabIndex = 4;
            this->label15->Text = L"Borrowing";
            this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pn_selling
            // 
            this->pn_selling->Controls->Add(this->label16);
            this->pn_selling->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_selling->Location = System::Drawing::Point(0, 0);
            this->pn_selling->Name = L"pn_selling";
            this->pn_selling->Size = System::Drawing::Size(1003, 553);
            this->pn_selling->TabIndex = 4;
            // 
            // label16
            // 
            this->label16->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label16->Location = System::Drawing::Point(441, 240);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(203, 45);
            this->label16->TabIndex = 4;
            this->label16->Text = L"Selling";
            this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pn_category
            // 
            this->pn_category->Controls->Add(this->label17);
            this->pn_category->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_category->Location = System::Drawing::Point(0, 0);
            this->pn_category->Name = L"pn_category";
            this->pn_category->Size = System::Drawing::Size(1003, 553);
            this->pn_category->TabIndex = 3;
            // 
            // label17
            // 
            this->label17->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label17->Location = System::Drawing::Point(441, 253);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(203, 45);
            this->label17->TabIndex = 4;
            this->label17->Text = L"Category";
            this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pn_books
            // 
            this->pn_books->Controls->Add(this->label18);
            this->pn_books->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_books->Location = System::Drawing::Point(0, 0);
            this->pn_books->Name = L"pn_books";
            this->pn_books->Size = System::Drawing::Size(1003, 553);
            this->pn_books->TabIndex = 2;
            // 
            // label18
            // 
            this->label18->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label18->Location = System::Drawing::Point(441, 253);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(203, 45);
            this->label18->TabIndex = 4;
            this->label18->Text = L"Books";
            this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->ClientSize = System::Drawing::Size(1003, 672);
            this->Controls->Add(this->pn_nav);
            this->Controls->Add(this->pn_con);
            this->Controls->Add(this->pn_stat);
            this->Controls->Add(this->pn_title);
            this->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Liberary";
            this->pn_title->ResumeLayout(false);
            this->pn_stat->ResumeLayout(false);
            this->pn_nav->ResumeLayout(false);
            this->flowLayoutPanel1->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->panel3->ResumeLayout(false);
            this->panel4->ResumeLayout(false);
            this->panel5->ResumeLayout(false);
            this->panel6->ResumeLayout(false);
            this->panel7->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->pn_info->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->pn_con->ResumeLayout(false);
            this->pn_student->ResumeLayout(false);
            this->panel14->ResumeLayout(false);
            this->panel18->ResumeLayout(false);
            this->panel17->ResumeLayout(false);
            this->panel16->ResumeLayout(false);
            this->panel15->ResumeLayout(false);
            this->flowLayoutPanel3->ResumeLayout(false);
            this->panel19->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            this->panel20->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            this->panel21->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
            this->panel22->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
            this->panel23->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
            this->panel24->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
            this->panel13->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            this->pn_home->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            this->flowLayoutPanel2->ResumeLayout(false);
            this->panel8->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->panel9->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->panel10->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->panel11->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            this->panel12->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            this->pn_borrowing->ResumeLayout(false);
            this->pn_selling->ResumeLayout(false);
            this->pn_category->ResumeLayout(false);
            this->pn_books->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_category->BringToFront();
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_home->BringToFront();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_student->BringToFront();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_books->BringToFront();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_selling->BringToFront();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_borrowing->BringToFront();
}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState == FormWindowState::Maximized)
		this->WindowState = FormWindowState::Normal;
	else
		this->WindowState = FormWindowState::Maximized;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (pn_nav->Width == 283) {
		pn_nav->Width = 60;
		pn_info->Visible = false;
	}
	else {
		pn_nav->Width = 283;
		pn_info->Visible = true;
	}
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
    MyForm1^ frm1 = gcnew MyForm1;
    frm1->Show();
}
};
}
