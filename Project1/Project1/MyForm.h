#pragma once
#include <Windows.h>
#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"

#define no_movies 4
#define no_actors 2
#define no_theaters 3

namespace Project1 {

	//namespaces
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	//Struct Definition

	struct Time
	{
		int hour, min;
	}time_now;

	struct Theater
	{
		string id;
		int capacity, reserved_seats;
	};

	struct Screening_info
	{
		Theater theater;
		Time time;
	};

	struct Movie
	{
		string title, director, actor[no_actors], rating;
		Screening_info screening_info[no_theaters];
	}movie[no_movies];
	
	//end of struct definition

	//Functions' Prototypes

	string ToStd(String^);
	String^ ToSystem(string);
	void get_movie_info();
	String^ time_calc(int, int);
	void booking_succeeded(int, int, int);
	void booking_cancelled();
	
   //End of Functions' Prototypes

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_list;
	protected:

	private: System::Windows::Forms::Button^  btn_movie;

	private: System::Windows::Forms::Button^  btn_time;

	private: System::Windows::Forms::Button^  btn_booking;
	private: System::Windows::Forms::Button^  btn_exit;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ListBox^  lbx_movie_info;
	private: System::Windows::Forms::Button^  btn_trailer4;
	private: System::Windows::Forms::Button^  btn_trailer3;
	private: System::Windows::Forms::Button^  btn_trailer2;
	private: System::Windows::Forms::Button^  btn_trailer1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::ListBox^  lbx_id_time;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::ComboBox^  cbx_show_movie;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::ListBox^  lbx_id_movie;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::ComboBox^  cbx_time;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  txt_no_tickets;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::ComboBox^  cbx_book_movie;
	private: System::Windows::Forms::Button^  btn_book_tickets;
	private: System::Windows::Forms::Button^  btn_credits;
	private: System::Windows::Forms::Panel^  panel5;




	private: System::Windows::Forms::Button^  button1;







	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_list = (gcnew System::Windows::Forms::Button());
			this->btn_movie = (gcnew System::Windows::Forms::Button());
			this->btn_time = (gcnew System::Windows::Forms::Button());
			this->btn_booking = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_book_tickets = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->cbx_book_movie = (gcnew System::Windows::Forms::ComboBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txt_no_tickets = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->cbx_time = (gcnew System::Windows::Forms::ComboBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->lbx_id_movie = (gcnew System::Windows::Forms::ListBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->lbx_id_time = (gcnew System::Windows::Forms::ListBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->cbx_show_movie = (gcnew System::Windows::Forms::ComboBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->btn_trailer4 = (gcnew System::Windows::Forms::Button());
			this->btn_trailer3 = (gcnew System::Windows::Forms::Button());
			this->btn_trailer2 = (gcnew System::Windows::Forms::Button());
			this->btn_trailer1 = (gcnew System::Windows::Forms::Button());
			this->lbx_movie_info = (gcnew System::Windows::Forms::ListBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_credits = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(115, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(766, 80);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Ultimate Fun Cinema";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_list
			// 
			this->btn_list->BackColor = System::Drawing::Color::White;
			this->btn_list->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_list->Location = System::Drawing::Point(217, 165);
			this->btn_list->Name = L"btn_list";
			this->btn_list->Size = System::Drawing::Size(544, 80);
			this->btn_list->TabIndex = 1;
			this->btn_list->Text = L"Movies List";
			this->btn_list->UseVisualStyleBackColor = false;
			this->btn_list->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btn_movie
			// 
			this->btn_movie->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_movie->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_movie->Location = System::Drawing::Point(217, 330);
			this->btn_movie->Name = L"btn_movie";
			this->btn_movie->Size = System::Drawing::Size(544, 80);
			this->btn_movie->TabIndex = 2;
			this->btn_movie->Text = L"Search by Movie";
			this->btn_movie->UseVisualStyleBackColor = false;
			this->btn_movie->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// btn_time
			// 
			this->btn_time->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_time->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_time->Location = System::Drawing::Point(217, 494);
			this->btn_time->Name = L"btn_time";
			this->btn_time->Size = System::Drawing::Size(544, 80);
			this->btn_time->TabIndex = 3;
			this->btn_time->Text = L"Search by Time";
			this->btn_time->UseVisualStyleBackColor = false;
			this->btn_time->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// btn_booking
			// 
			this->btn_booking->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_booking->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_booking->Location = System::Drawing::Point(217, 663);
			this->btn_booking->Name = L"btn_booking";
			this->btn_booking->Size = System::Drawing::Size(544, 80);
			this->btn_booking->TabIndex = 4;
			this->btn_booking->Text = L"Book a Ticket";
			this->btn_booking->UseVisualStyleBackColor = false;
			this->btn_booking->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::White;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_exit->Location = System::Drawing::Point(691, 783);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(300, 57);
			this->btn_exit->TabIndex = 5;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->btn_trailer4);
			this->panel1->Controls->Add(this->btn_trailer3);
			this->panel1->Controls->Add(this->btn_trailer2);
			this->panel1->Controls->Add(this->btn_trailer1);
			this->panel1->Controls->Add(this->lbx_movie_info);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1022, 940);
			this->panel1->TabIndex = 6;
			this->panel1->Visible = false;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->lbx_id_time);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->cbx_show_movie);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1022, 940);
			this->panel2->TabIndex = 26;
			this->panel2->Visible = false;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->cbx_time);
			this->panel3->Controls->Add(this->button8);
			this->panel3->Controls->Add(this->lbx_id_movie);
			this->panel3->Controls->Add(this->label21);
			this->panel3->Controls->Add(this->label20);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1022, 940);
			this->panel3->TabIndex = 5;
			this->panel3->Visible = false;
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->btn_book_tickets);
			this->panel4->Controls->Add(this->button9);
			this->panel4->Controls->Add(this->cbx_book_movie);
			this->panel4->Controls->Add(this->label23);
			this->panel4->Controls->Add(this->txt_no_tickets);
			this->panel4->Controls->Add(this->label22);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1022, 940);
			this->panel4->TabIndex = 6;
			this->panel4->Visible = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Black;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Controls->Add(this->button1);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1022, 940);
			this->panel5->TabIndex = 6;
			this->panel5->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(627, 760);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(352, 56);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Back to Main Menu";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// btn_book_tickets
			// 
			this->btn_book_tickets->BackColor = System::Drawing::Color::White;
			this->btn_book_tickets->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_book_tickets->Location = System::Drawing::Point(376, 529);
			this->btn_book_tickets->Name = L"btn_book_tickets";
			this->btn_book_tickets->Size = System::Drawing::Size(276, 78);
			this->btn_book_tickets->TabIndex = 5;
			this->btn_book_tickets->Text = L"Book Tickets";
			this->btn_book_tickets->UseVisualStyleBackColor = false;
			this->btn_book_tickets->Click += gcnew System::EventHandler(this, &MyForm::btn_book_tickets_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(627, 760);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(352, 56);
			this->button9->TabIndex = 4;
			this->button9->Text = L"Back to Main Menu";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// cbx_book_movie
			// 
			this->cbx_book_movie->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbx_book_movie->FormattingEnabled = true;
			this->cbx_book_movie->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Finding Nemo", L"Up", L"Ratatoullie", L"Monsters, Inc." });
			this->cbx_book_movie->Location = System::Drawing::Point(554, 154);
			this->cbx_book_movie->Name = L"cbx_book_movie";
			this->cbx_book_movie->Size = System::Drawing::Size(226, 44);
			this->cbx_book_movie->TabIndex = 3;
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(141, 152);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(336, 47);
			this->label23->TabIndex = 2;
			this->label23->Text = L"Choose Movie";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_no_tickets
			// 
			this->txt_no_tickets->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_no_tickets->Location = System::Drawing::Point(586, 385);
			this->txt_no_tickets->Name = L"txt_no_tickets";
			this->txt_no_tickets->Size = System::Drawing::Size(101, 40);
			this->txt_no_tickets->TabIndex = 1;
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(85, 377);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(420, 51);
			this->label22->TabIndex = 0;
			this->label22->Text = L"Enter no. of Tickets";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cbx_time
			// 
			this->cbx_time->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbx_time->FormattingEnabled = true;
			this->cbx_time->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"1:00", L"10:30", L"13:00", L"15:30", L"18:00",
					L"20:30"
			});
			this->cbx_time->Location = System::Drawing::Point(638, 141);
			this->cbx_time->Name = L"cbx_time";
			this->cbx_time->Size = System::Drawing::Size(212, 44);
			this->cbx_time->TabIndex = 5;
			this->cbx_time->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cbx_time_SelectedIndexChanged);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(653, 714);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(320, 50);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Back to Main Menu";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click_1);
			// 
			// lbx_id_movie
			// 
			this->lbx_id_movie->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbx_id_movie->Font = (gcnew System::Drawing::Font(L"Tahoma", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbx_id_movie->FormattingEnabled = true;
			this->lbx_id_movie->ItemHeight = 45;
			this->lbx_id_movie->Location = System::Drawing::Point(202, 377);
			this->lbx_id_movie->Name = L"lbx_id_movie";
			this->lbx_id_movie->Size = System::Drawing::Size(578, 184);
			this->lbx_id_movie->TabIndex = 3;
			this->lbx_id_movie->Visible = false;
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(201, 320);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(579, 59);
			this->label21->TabIndex = 2;
			this->label21->Text = L"Movie                   Theater ID";
			this->label21->Visible = false;
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(122, 125);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(411, 73);
			this->label20->TabIndex = 0;
			this->label20->Text = L"Choose Show Time";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(602, 705);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(370, 59);
			this->button7->TabIndex = 4;
			this->button7->Text = L"Back to Main Menu";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// lbx_id_time
			// 
			this->lbx_id_time->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbx_id_time->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbx_id_time->FormattingEnabled = true;
			this->lbx_id_time->ItemHeight = 48;
			this->lbx_id_time->Location = System::Drawing::Point(285, 413);
			this->lbx_id_time->Name = L"lbx_id_time";
			this->lbx_id_time->Size = System::Drawing::Size(489, 148);
			this->lbx_id_time->TabIndex = 3;
			this->lbx_id_time->Visible = false;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label19->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(285, 358);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(489, 55);
			this->label19->TabIndex = 2;
			this->label19->Text = L"Show Time       Theater ID";
			this->label19->Visible = false;
			// 
			// cbx_show_movie
			// 
			this->cbx_show_movie->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbx_show_movie->FormattingEnabled = true;
			this->cbx_show_movie->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Finding Nemo", L"Up", L"Ratatoullie", L"Monsters, Inc." });
			this->cbx_show_movie->Location = System::Drawing::Point(602, 154);
			this->cbx_show_movie->Name = L"cbx_show_movie";
			this->cbx_show_movie->Size = System::Drawing::Size(271, 44);
			this->cbx_show_movie->TabIndex = 1;
			this->cbx_show_movie->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cbx_show_movie_SelectedIndexChanged);
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(129, 142);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(321, 67);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Choose a Movie";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_trailer4
			// 
			this->btn_trailer4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_trailer4->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_trailer4->Location = System::Drawing::Point(879, 705);
			this->btn_trailer4->Name = L"btn_trailer4";
			this->btn_trailer4->Size = System::Drawing::Size(119, 28);
			this->btn_trailer4->TabIndex = 25;
			this->btn_trailer4->Text = L"Trailer";
			this->btn_trailer4->UseVisualStyleBackColor = false;
			this->btn_trailer4->Click += gcnew System::EventHandler(this, &MyForm::btn_trailer4_Click);
			// 
			// btn_trailer3
			// 
			this->btn_trailer3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_trailer3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_trailer3->Location = System::Drawing::Point(879, 517);
			this->btn_trailer3->Name = L"btn_trailer3";
			this->btn_trailer3->Size = System::Drawing::Size(119, 28);
			this->btn_trailer3->TabIndex = 24;
			this->btn_trailer3->Text = L"Trailer";
			this->btn_trailer3->UseVisualStyleBackColor = false;
			this->btn_trailer3->Click += gcnew System::EventHandler(this, &MyForm::btn_trailer3_Click_1);
			// 
			// btn_trailer2
			// 
			this->btn_trailer2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_trailer2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_trailer2->Location = System::Drawing::Point(879, 330);
			this->btn_trailer2->Name = L"btn_trailer2";
			this->btn_trailer2->Size = System::Drawing::Size(119, 28);
			this->btn_trailer2->TabIndex = 23;
			this->btn_trailer2->Text = L"Trailer";
			this->btn_trailer2->UseVisualStyleBackColor = false;
			this->btn_trailer2->Click += gcnew System::EventHandler(this, &MyForm::btn_trailer2_Click_1);
			// 
			// btn_trailer1
			// 
			this->btn_trailer1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_trailer1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_trailer1->Location = System::Drawing::Point(879, 134);
			this->btn_trailer1->Name = L"btn_trailer1";
			this->btn_trailer1->Size = System::Drawing::Size(119, 28);
			this->btn_trailer1->TabIndex = 22;
			this->btn_trailer1->Text = L"Trailer";
			this->btn_trailer1->UseVisualStyleBackColor = false;
			this->btn_trailer1->Click += gcnew System::EventHandler(this, &MyForm::btn_trailer1_Click);
			// 
			// lbx_movie_info
			// 
			this->lbx_movie_info->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbx_movie_info->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbx_movie_info->FormattingEnabled = true;
			this->lbx_movie_info->ItemHeight = 28;
			this->lbx_movie_info->Location = System::Drawing::Point(376, -32);
			this->lbx_movie_info->Name = L"lbx_movie_info";
			this->lbx_movie_info->Size = System::Drawing::Size(639, 816);
			this->lbx_movie_info->TabIndex = 21;
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(255, 705);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(114, 28);
			this->label17->TabIndex = 20;
			this->label17->Text = L"Rating:";
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(255, 660);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(125, 28);
			this->label16->TabIndex = 19;
			this->label16->Text = L"Starring:";
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(255, 632);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(125, 28);
			this->label15->TabIndex = 18;
			this->label15->Text = L"Director:";
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(255, 609);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(114, 28);
			this->label14->TabIndex = 17;
			this->label14->Text = L"Title:";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(256, 517);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(114, 28);
			this->label13->TabIndex = 16;
			this->label13->Text = L"Rating:";
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(256, 472);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(125, 28);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Starring:";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(255, 444);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(125, 28);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Director:";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(255, 413);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(114, 28);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Title:";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(257, 330);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(114, 28);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Rating:";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(258, 281);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(125, 28);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Starring:";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(258, 253);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 28);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Director:";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(258, 225);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 28);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Title:";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(257, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 28);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Rating:";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(255, 86);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 28);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Starring:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(258, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 28);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Director:";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(258, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 28);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Title:";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(627, 800);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(370, 40);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Back to Main Menu";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(38, 609);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(194, 175);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(38, 416);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(194, 175);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(38, 220);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(194, 175);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(38, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(194, 175);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btn_credits
			// 
			this->btn_credits->BackColor = System::Drawing::Color::White;
			this->btn_credits->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_credits->Location = System::Drawing::Point(12, 783);
			this->btn_credits->Name = L"btn_credits";
			this->btn_credits->Size = System::Drawing::Size(300, 57);
			this->btn_credits->TabIndex = 7;
			this->btn_credits->Text = L"Credits";
			this->btn_credits->UseVisualStyleBackColor = false;
			this->btn_credits->Click += gcnew System::EventHandler(this, &MyForm::btn_credits_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1013, 852);
			this->Controls->Add(this->btn_credits);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->btn_booking);
			this->Controls->Add(this->btn_time);
			this->Controls->Add(this->btn_movie);
			this->Controls->Add(this->btn_list);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cinema System";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
		int required_tickets, booked_tickets;
		bool time_available = false;
#pragma endregion
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
//Reading files and struct initialization
					 get_movie_info();
//Time now initialization
					 time_now.hour = 13;
					 time_now.min = 30;
//Display movies' info code
                       for (int i = 0; i < no_movies; ++i)
					   {
						 lbx_movie_info->Items->Add(ToSystem(movie[i].title));
						 lbx_movie_info->Items->Add(ToSystem(movie[i].director));
						 for (int j = 0; j < no_actors; ++j)
						 {
							 lbx_movie_info->Items->Add(ToSystem(movie[i].actor[j]));
						 }
						 lbx_movie_info->Items->Add(ToSystem(movie[i].rating));
						 lbx_movie_info->Items->Add("\n\n");
						 lbx_movie_info->Items->Add("\n\n");
					   }
					   btn_credits->Visible = true;
}
//Display movies' info design
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel1->Visible = true;	
			 btn_credits->Visible = false;
}
private: System::Void btn_trailer1_Click(System::Object^  sender, System::EventArgs^  e) {
			MyForm1^ nemo = gcnew MyForm1();
			nemo->ShowDialog();
}
private: System::Void btn_trailer2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 MyForm2^ up = gcnew MyForm2();
			 up->ShowDialog();
}
private: System::Void btn_trailer3_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 MyForm3^ ratatouille = gcnew MyForm3();
			 ratatouille->ShowDialog();
}
private: System::Void btn_trailer4_Click(System::Object^  sender, System::EventArgs^  e) {
			 MyForm4^ monsters = gcnew MyForm4();
			 monsters->ShowDialog();
}
private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
					  panel1->Visible = false;
					  btn_credits->Visible = true;
}
		 
//search by movies design
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel1->Visible = true;
			 panel2->Visible = true;
			 btn_credits->Visible = false;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
					  panel1->Visible = false;
					  panel2->Visible = false;
					  btn_credits->Visible = true;
}
//Search by movies code
private: System::Void cbx_show_movie_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 lbx_id_time->Items->Clear();  
			 label19->Visible = true;
			 lbx_id_time->Visible = true;
			 for (int i = 0; i < no_movies; ++i)
			 {
				 if (ToSystem(movie[i].title) == cbx_show_movie->Text)
				 {
					 //Movie choosen
					 for (int j = 0; j < no_theaters; ++j)
					 {
						 //Screening times of the choosen movie
						 lbx_id_time->Items->Add(time_calc(movie[i].screening_info[j].time.hour, movie[i].screening_info[j].time.min) + "\t    " + ToSystem(movie[i].screening_info[j].theater.id));
					 }
				 }
			 }
}
//Search by time design
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel1->Visible = true;
			 panel2->Visible = true;
			 panel3->Visible = true;
			 btn_credits->Visible = false;
} 
private: System::Void button8_Click_1(System::Object^  sender, System::EventArgs^  e) {
					  panel1->Visible = false;
					  panel2->Visible = false;
					  panel3->Visible = false;
					  btn_credits->Visible = true;
}
//Search by time code
private: System::Void cbx_time_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 label21->Visible = true;
			 lbx_id_movie->Visible = true;
			 lbx_id_movie->Items->Clear();
			 for (int i = 0; i < no_movies; ++i)
			 {
				 for (int j = 0; j < no_theaters; ++j)
				 {
					 if (cbx_time->Text == time_calc(movie[i].screening_info[j].time.hour, movie[i].screening_info[j].time.min))
					 {
						 //Choosen time
						 if (movie[i].title == "Up")
						 {
							 lbx_id_movie->Items->Add(ToSystem(movie[i].title + " \t \t " + (movie[i].screening_info[j].theater.id) + "\n"));
						 }
						 else
						 {
							 lbx_id_movie->Items->Add(ToSystem(movie[i].title + " \t " + movie[i].screening_info[j].theater.id) + "\n");
						 }
					 }
				 }
			 }
}
//Booking a ticket design
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel1->Visible = true;
			 panel2->Visible = true;
			 panel3->Visible = true;
			 panel4->Visible = true;	
			 btn_credits->Visible = false;
}
private: System::Void button9_Click_1(System::Object^  sender, System::EventArgs^  e) {
					  panel1->Visible = false;
					  panel2->Visible = false;
					  panel3->Visible = false;
					  panel4->Visible = false;
					  btn_credits->Visible = true;
}
//Booking a ticket code
	private: System::Void btn_book_tickets_Click(System::Object^  sender, System::EventArgs^  e) {
				 required_tickets = Convert::ToInt32(txt_no_tickets->Text);
				 if (required_tickets <= 0)
				 {
					 MessageBox::Show("Please enter a number greater than zero.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 for (int i = 0; i < no_movies; ++i)
					 {
						 if (cbx_book_movie->Text == ToSystem(movie[i].title))
						 {
							 //Movie Choosen
							 for (int j = 0; j < no_theaters; ++j)
							 {
								 if ((time_now.hour == movie[i].screening_info[j].time.hour && time_now.min - movie[i].screening_info[j].time.min <= 15) || (time_now.hour < movie[i].screening_info[j].time.hour))
								 {
									 //Time Available
									 time_available = true;
									 if (movie[i].screening_info[j].theater.capacity - movie[i].screening_info[j].theater.reserved_seats >= required_tickets)
									 {
										 //Booking Succeeded >> No. of tickets required available
										 booked_tickets = required_tickets;
										 booking_succeeded(i, j, booked_tickets);
										 break;
									 }
									 else if (movie[i].screening_info[j].theater.capacity == movie[i].screening_info[j].theater.reserved_seats)
									 {
										 //No available tickets at this screening time
										 if (j < no_theaters - 1)
										 {
											 if (movie[i].screening_info[j + 1].theater.capacity - movie[i].screening_info[j + 1].theater.reserved_seats >= required_tickets)
											 {
												 //Next screening time suggestion with the no. of tickets required
												 if (MessageBox::Show("Unfortunately, theater seats at this time are fully booked, would you like to book same number of tickets at " + time_calc(movie[i].screening_info[j + 1].time.hour, movie[i].screening_info[j + 1].time.min) + "?", "Suggestion", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
												 {
													 //Booking Succeeded >> Accepted next screening time suggestion with required no. of tickets
													 booked_tickets = required_tickets;
													 booking_succeeded(i, j + 1, booked_tickets);
													 break;
												 }
												 else
												 {
													 //Booking Cancelled >> Rejected next screening time suggestion with required no. of tickets
													 booking_cancelled();
													 break;
												 }
											 }
											 else if (movie[i].screening_info[j + 1].theater.capacity - movie[i].screening_info[j + 1].theater.reserved_seats < required_tickets && movie[i].screening_info[j + 1].theater.capacity != movie[i].screening_info[j + 1].theater.reserved_seats)
											 {
												 //Next screening time suggestion with available no. of tickets less than required
												 if (MessageBox::Show("Unfortunately, theater seats at this time are fully booked.\nThere are " + Convert::ToString(movie[i].screening_info[j + 1].theater.capacity - movie[i].screening_info[j + 1].theater.reserved_seats) + " available tickets at " + time_calc(movie[i].screening_info[j + 1].time.hour, movie[i].screening_info[j + 1].time.min) + ".\nWould you like to book them?", "Suggestion", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
												 {
													 //Booking Succeeded >> Accepted next screening time suggestion with no. of tickets less than required  
													 booked_tickets = movie[i].screening_info[j + 1].theater.capacity - movie[i].screening_info[j + 1].theater.reserved_seats;
													 booking_succeeded(i, j + 1, booked_tickets);
													 break;
												 }
												 else{
													 //Booking Cancelled >> Rejected Next Screening Time Suggestion with the no. of tickets less than required
													 booking_cancelled();
													 break;
												 }
											 }
										 }
										 else
										 {
											 PlaySound(TEXT("Booking cancelled.wav"), NULL, SND_FILENAME);
											 MessageBox::Show("Unfortunately, theater seats are fully booked today.\nWe remain at your service for any future bookings you might wish to make.", "Booking cancelled");
											 break;
										 }
									 }
									 else if (movie[i].screening_info[j].theater.capacity - movie[i].screening_info[j].theater.reserved_seats < required_tickets)
									 {
										 //No. of available tickets less than required
										 if (MessageBox::Show("There are only " + Convert::ToString(movie[i].screening_info[j].theater.capacity - movie[i].screening_info[j].theater.reserved_seats) + " tickets available, would you like to book them?", "Suggestion", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
										 {
											 //Booking Succeeded >> Accepted available no. of tickets
											 booked_tickets = movie[i].screening_info[j].theater.capacity - movie[i].screening_info[j].theater.reserved_seats;
											 booking_succeeded(i, j, booked_tickets);
											 break;
										 }
										 else
										 {
											 //Booking Cancelled >> Rejected available no. of tickets
											 booking_cancelled();
											 break;
										 }
									 }
								 }
								 if (j != no_theaters - 1 && (abs(time_now.hour - movie[i].screening_info[j].time.hour) < abs(time_now.hour - movie[i].screening_info[j + 1].time.hour)) && movie[i].screening_info[j + 1].theater.capacity != movie[i].screening_info[j + 1].theater.reserved_seats)
								 {
									 //Next screening time suggestion far from time now
									 if (MessageBox::Show("You are late for " + time_calc(movie[i].screening_info[j].time.hour, movie[i].screening_info[j].time.min) + ".\nNext screening time is at " + time_calc(movie[i].screening_info[j + 1].time.hour, movie[i].screening_info[j + 1].time.min) + ", would you like to book tickets at that time?", "Suggestion", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Cancel)
									 {
										 //Booking Cancelled >> Rejected next available screening time suggestion
										 time_available = true;
										 booking_cancelled();
										 break;
									 }
								 }
							 }
							 if (!time_available)
							 {
								 //Booking Cancelled >> No available screening time
								 PlaySound(TEXT("Booking cancelled.wav"), NULL, SND_FILENAME);
								 MessageBox::Show("Unfortunately, there are no available screening times today.\nWe remain at your service for any future bookings you might wish to make.", "Booking cancelled");
							 }
						 }
					 }
				 }
	}

//Credits
private: System::Void btn_credits_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Visible = true;
				 panel2->Visible = true;
				 panel3->Visible = true;
				 panel4->Visible = true;
				 panel5->Visible = true;
				 btn_credits->Visible = false;
}
private: System::Void button1_Click_2(System::Object^  sender, System::EventArgs^  e) {
			 panel1->Visible = false;
			 panel2->Visible = false;
			 panel3->Visible = false;
			 panel4->Visible = false;
			 panel5->Visible = false;
			 btn_credits->Visible = true;
}

private: System::Void btn_exit_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 exit(1);
}
};
//Functions' Definitions

//converting from std to System String
String^ ToSystem(string s)
{  
	String^g = gcnew String(s.c_str());
	return g;
}

//converting from System to std string
string ToStd(String^ s)
{ 
	string g = msclr::interop::marshal_as<string >(s);
	return g;
}

//reading files and struct initialization
void get_movie_info()
{
	StreamReader^ fileRead = gcnew StreamReader("cinema.txt");
	String^v;
	for (int i = 0; i < no_movies; ++i)
	{
		v = fileRead->ReadLine();
		movie[i].title = ToStd(v);
		v = fileRead->ReadLine();
		movie[i].director = ToStd(v);
		for (int j = 0; j < no_actors; ++j)
		{
			v = fileRead->ReadLine();
			movie[i].actor[j] = ToStd(v);
		}
		v = fileRead->ReadLine();
		movie[i].rating = ToStd(v);
		for (int j = 0; j < no_theaters; ++j)
		{
			v = fileRead->ReadLine();
			movie[i].screening_info[j].theater.id = ToStd(v);
			v = fileRead->ReadLine();
			movie[i].screening_info[j].time.hour = Convert::ToInt32(v);
			v = fileRead->ReadLine();
			movie[i].screening_info[j].time.min = Convert::ToInt32(v);
			v = fileRead->ReadLine();
			movie[i].screening_info[j].theater.capacity = Convert::ToInt32(v);
			v = fileRead->ReadLine();
			movie[i].screening_info[j].theater.reserved_seats = Convert::ToInt32(v);
		}
	}
}

//converting time from int to string
String^ time_calc(int a, int b)
{
	String^h = Convert::ToString(a);
	String^m = Convert::ToString(b);
	if (m == "0")
	{
		m = ":00";
	}
	else if (m == "30")
	{
		m = ":30";
	}
	return h + m;
}

//Successful booking
void booking_succeeded(int i, int x, int y)
{
	PlaySound(TEXT("Booking succeded.wav"), NULL, SND_FILENAME);
	MessageBox::Show("Theater ID: " + ToSystem(movie[i].screening_info[x].theater.id) + "\nEnjoy your Movie.", "Booking Succeeded");
	movie[i].screening_info[x].theater.reserved_seats += y;
}

//Booking cancelled message
void booking_cancelled()
{
	PlaySound(TEXT("Booking cancelled.wav"), NULL, SND_FILENAME);
	MessageBox::Show("We remain at your service for any future bookings you might wish to make.", "Booking Cancelled");
}

//End of Functions' Definitions
}

