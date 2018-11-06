/*
Title: Assignmet 2
Author: Ali Hasanaj
Last Edit: 2018-02-28
Description:  8 Queen Chess Game GUI application
Note: I was unsure of some thinks like when we should save the score so i saved if they hit new
game or exit or if they got 8 queens in a row also I used labels for the 10 top position tab because its eaiser and the
numbers wont be change the users scores will be

* If you get all 8 queens you have to  manually exit after entering your name *
* Timer starts when you enter a queen because he said that in class *
*/

#include <string>
#include <iostream>
#include <cstdio>
#include <ctime>
#include <time.h>
#include "hasanajMain.h"
#include <iomanip>
#include <fstream>
#pragma once



namespace hasanajAssignment2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using std::ios;
	using namespace System::IO;


	//added to the display board edition
	using namespace System::IO;
	using namespace System::Media;

	/// <summary>
	/// Summary for chessBoard
	/// </summary>

	public ref class chessBoard : public System::Windows::Forms::Form
	{
	public:
		chessBoard(void)
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
		~chessBoard()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label13;
	protected:
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::PictureBox^  frown;
	private: System::Windows::Forms::Button^  NewGame;
	private: System::Windows::Forms::PictureBox^  A7;
	private: System::Windows::Forms::PictureBox^  A8;
	private: System::Windows::Forms::PictureBox^  A6;
	private: System::Windows::Forms::PictureBox^  A5;
	private: System::Windows::Forms::PictureBox^  A4;
	private: System::Windows::Forms::PictureBox^  A3;
	private: System::Windows::Forms::PictureBox^  A2;
	private: System::Windows::Forms::PictureBox^  A1;
	private: System::Windows::Forms::PictureBox^  B8;
	private: System::Windows::Forms::PictureBox^  B7;
	private: System::Windows::Forms::PictureBox^  B6;
	private: System::Windows::Forms::PictureBox^  B5;
	private: System::Windows::Forms::PictureBox^  B4;
	private: System::Windows::Forms::PictureBox^  B3;
	private: System::Windows::Forms::PictureBox^  B2;
	private: System::Windows::Forms::PictureBox^  B1;
	private: System::Windows::Forms::PictureBox^  C8;
	private: System::Windows::Forms::PictureBox^  C7;
	private: System::Windows::Forms::PictureBox^  C6;
	private: System::Windows::Forms::PictureBox^  C5;
	private: System::Windows::Forms::PictureBox^  C4;
	private: System::Windows::Forms::PictureBox^  C3;
	private: System::Windows::Forms::PictureBox^  C2;
	private: System::Windows::Forms::PictureBox^  C1;
	private: System::Windows::Forms::PictureBox^  D8;
	private: System::Windows::Forms::PictureBox^  D7;
	private: System::Windows::Forms::PictureBox^  D6;
	private: System::Windows::Forms::PictureBox^  D5;
	private: System::Windows::Forms::PictureBox^  D4;
	private: System::Windows::Forms::PictureBox^  D3;
	private: System::Windows::Forms::PictureBox^  D2;
	private: System::Windows::Forms::PictureBox^  D1;
	private: System::Windows::Forms::PictureBox^  E8;
	private: System::Windows::Forms::PictureBox^  E7;
	private: System::Windows::Forms::PictureBox^  E6;
	private: System::Windows::Forms::PictureBox^  E5;
	private: System::Windows::Forms::PictureBox^  E4;
	private: System::Windows::Forms::PictureBox^  E3;
	private: System::Windows::Forms::PictureBox^  E2;
	private: System::Windows::Forms::PictureBox^  E1;
	private: System::Windows::Forms::PictureBox^  F8;
	private: System::Windows::Forms::PictureBox^  F7;
	private: System::Windows::Forms::PictureBox^  F6;
	private: System::Windows::Forms::PictureBox^  F5;
	private: System::Windows::Forms::PictureBox^  F4;
	private: System::Windows::Forms::PictureBox^  F3;
	private: System::Windows::Forms::PictureBox^  F2;
	private: System::Windows::Forms::PictureBox^  F1;
	private: System::Windows::Forms::PictureBox^  G8;
	private: System::Windows::Forms::PictureBox^  G7;
	private: System::Windows::Forms::PictureBox^  G6;
	private: System::Windows::Forms::PictureBox^  G5;
	private: System::Windows::Forms::PictureBox^  G4;
	private: System::Windows::Forms::PictureBox^  G3;
	private: System::Windows::Forms::PictureBox^  G2;
	private: System::Windows::Forms::PictureBox^  G1;
	private: System::Windows::Forms::PictureBox^  H8;
	private: System::Windows::Forms::PictureBox^  H7;
	private: System::Windows::Forms::PictureBox^  H6;
	private: System::Windows::Forms::PictureBox^  H5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  H4;
	private: System::Windows::Forms::PictureBox^  H3;
	private: System::Windows::Forms::PictureBox^  H2;
	private: System::Windows::Forms::PictureBox^  H1;
	private: System::Windows::Forms::Button^  EnterQueen;
	private: System::Windows::Forms::TextBox^  textBox1;
	public: System::Windows::Forms::PictureBox^  pictureBox1;
	private:
	private: System::Windows::Forms::PictureBox^  smile;
	private: System::Windows::Forms::Label^  score;
	private: System::Windows::Forms::TextBox^  scoreBox;
	private: System::Windows::Forms::Button^  removeQueen;
	private: System::Windows::Forms::Button^  exit;

	public:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		// Prototype 
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(chessBoard::typeid));
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->frown = (gcnew System::Windows::Forms::PictureBox());
			this->NewGame = (gcnew System::Windows::Forms::Button());
			this->A7 = (gcnew System::Windows::Forms::PictureBox());
			this->A8 = (gcnew System::Windows::Forms::PictureBox());
			this->A6 = (gcnew System::Windows::Forms::PictureBox());
			this->A5 = (gcnew System::Windows::Forms::PictureBox());
			this->A4 = (gcnew System::Windows::Forms::PictureBox());
			this->A3 = (gcnew System::Windows::Forms::PictureBox());
			this->A2 = (gcnew System::Windows::Forms::PictureBox());
			this->A1 = (gcnew System::Windows::Forms::PictureBox());
			this->B8 = (gcnew System::Windows::Forms::PictureBox());
			this->B7 = (gcnew System::Windows::Forms::PictureBox());
			this->B6 = (gcnew System::Windows::Forms::PictureBox());
			this->B5 = (gcnew System::Windows::Forms::PictureBox());
			this->B4 = (gcnew System::Windows::Forms::PictureBox());
			this->B3 = (gcnew System::Windows::Forms::PictureBox());
			this->B2 = (gcnew System::Windows::Forms::PictureBox());
			this->B1 = (gcnew System::Windows::Forms::PictureBox());
			this->C8 = (gcnew System::Windows::Forms::PictureBox());
			this->C7 = (gcnew System::Windows::Forms::PictureBox());
			this->C6 = (gcnew System::Windows::Forms::PictureBox());
			this->C5 = (gcnew System::Windows::Forms::PictureBox());
			this->C4 = (gcnew System::Windows::Forms::PictureBox());
			this->C3 = (gcnew System::Windows::Forms::PictureBox());
			this->C2 = (gcnew System::Windows::Forms::PictureBox());
			this->C1 = (gcnew System::Windows::Forms::PictureBox());
			this->D8 = (gcnew System::Windows::Forms::PictureBox());
			this->D7 = (gcnew System::Windows::Forms::PictureBox());
			this->D6 = (gcnew System::Windows::Forms::PictureBox());
			this->D5 = (gcnew System::Windows::Forms::PictureBox());
			this->D4 = (gcnew System::Windows::Forms::PictureBox());
			this->D3 = (gcnew System::Windows::Forms::PictureBox());
			this->D2 = (gcnew System::Windows::Forms::PictureBox());
			this->D1 = (gcnew System::Windows::Forms::PictureBox());
			this->E8 = (gcnew System::Windows::Forms::PictureBox());
			this->E7 = (gcnew System::Windows::Forms::PictureBox());
			this->E6 = (gcnew System::Windows::Forms::PictureBox());
			this->E5 = (gcnew System::Windows::Forms::PictureBox());
			this->E4 = (gcnew System::Windows::Forms::PictureBox());
			this->E3 = (gcnew System::Windows::Forms::PictureBox());
			this->E2 = (gcnew System::Windows::Forms::PictureBox());
			this->E1 = (gcnew System::Windows::Forms::PictureBox());
			this->F8 = (gcnew System::Windows::Forms::PictureBox());
			this->F7 = (gcnew System::Windows::Forms::PictureBox());
			this->F6 = (gcnew System::Windows::Forms::PictureBox());
			this->F5 = (gcnew System::Windows::Forms::PictureBox());
			this->F4 = (gcnew System::Windows::Forms::PictureBox());
			this->F3 = (gcnew System::Windows::Forms::PictureBox());
			this->F2 = (gcnew System::Windows::Forms::PictureBox());
			this->F1 = (gcnew System::Windows::Forms::PictureBox());
			this->G8 = (gcnew System::Windows::Forms::PictureBox());
			this->G7 = (gcnew System::Windows::Forms::PictureBox());
			this->G6 = (gcnew System::Windows::Forms::PictureBox());
			this->G5 = (gcnew System::Windows::Forms::PictureBox());
			this->G4 = (gcnew System::Windows::Forms::PictureBox());
			this->G3 = (gcnew System::Windows::Forms::PictureBox());
			this->G2 = (gcnew System::Windows::Forms::PictureBox());
			this->G1 = (gcnew System::Windows::Forms::PictureBox());
			this->H8 = (gcnew System::Windows::Forms::PictureBox());
			this->H7 = (gcnew System::Windows::Forms::PictureBox());
			this->H6 = (gcnew System::Windows::Forms::PictureBox());
			this->H5 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->H4 = (gcnew System::Windows::Forms::PictureBox());
			this->H3 = (gcnew System::Windows::Forms::PictureBox());
			this->H2 = (gcnew System::Windows::Forms::PictureBox());
			this->H1 = (gcnew System::Windows::Forms::PictureBox());
			this->EnterQueen = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->smile = (gcnew System::Windows::Forms::PictureBox());
			this->score = (gcnew System::Windows::Forms::Label());
			this->scoreBox = (gcnew System::Windows::Forms::TextBox());
			this->removeQueen = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->smile))->BeginInit();
			this->SuspendLayout();
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(554, 290);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(119, 24);
			this->label13->TabIndex = 321;
			this->label13->Text = L"Enter Queen";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(554, 266);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 24);
			this->label12->TabIndex = 320;
			this->label12->Text = L"then click";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(554, 242);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(124, 24);
			this->label11->TabIndex = 319;
			this->label11->Text = L"position here,";
			// 
			// frown
			// 
			this->frown->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"frown.Image")));
			this->frown->Location = System::Drawing::Point(558, 90);
			this->frown->Name = L"frown";
			this->frown->Size = System::Drawing::Size(100, 106);
			this->frown->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->frown->TabIndex = 318;
			this->frown->TabStop = false;
			this->frown->Visible = false;
			// 
			// NewGame
			// 
			this->NewGame->Location = System::Drawing::Point(558, 478);
			this->NewGame->Name = L"NewGame";
			this->NewGame->Size = System::Drawing::Size(100, 24);
			this->NewGame->TabIndex = 316;
			this->NewGame->Text = L"NewGame";
			this->NewGame->UseVisualStyleBackColor = true;
			this->NewGame->Click += gcnew System::EventHandler(this, &chessBoard::NewGame_Click);
			// 
			// A7
			// 
			this->A7->AccessibleName = L"A7";
			this->A7->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->A7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->A7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A7.Image")));
			this->A7->Location = System::Drawing::Point(68, 130);
			this->A7->Margin = System::Windows::Forms::Padding(1);
			this->A7->MaximumSize = System::Drawing::Size(45, 45);
			this->A7->MinimumSize = System::Drawing::Size(20, 20);
			this->A7->Name = L"A7";
			this->A7->Size = System::Drawing::Size(45, 45);
			this->A7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A7->TabIndex = 255;
			this->A7->TabStop = false;
			this->A7->Visible = false;
			// 
			// A8
			// 
			this->A8->AccessibleName = L"A8";
			this->A8->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->A8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->A8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A8.Image")));
			this->A8->Location = System::Drawing::Point(68, 73);
			this->A8->Margin = System::Windows::Forms::Padding(1);
			this->A8->MaximumSize = System::Drawing::Size(45, 45);
			this->A8->MinimumSize = System::Drawing::Size(20, 20);
			this->A8->Name = L"A8";
			this->A8->Size = System::Drawing::Size(45, 45);
			this->A8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A8->TabIndex = 256;
			this->A8->TabStop = false;
			this->A8->Visible = false;
			// 
			// A6
			// 
			this->A6->AccessibleName = L"A6";
			this->A6->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->A6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->A6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A6.Image")));
			this->A6->Location = System::Drawing::Point(67, 184);
			this->A6->Margin = System::Windows::Forms::Padding(1);
			this->A6->MaximumSize = System::Drawing::Size(45, 45);
			this->A6->MinimumSize = System::Drawing::Size(20, 20);
			this->A6->Name = L"A6";
			this->A6->Size = System::Drawing::Size(45, 45);
			this->A6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A6->TabIndex = 254;
			this->A6->TabStop = false;
			this->A6->Visible = false;
			// 
			// A5
			// 
			this->A5->AccessibleName = L"A5";
			this->A5->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->A5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->A5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A5.Image")));
			this->A5->Location = System::Drawing::Point(68, 241);
			this->A5->Margin = System::Windows::Forms::Padding(1);
			this->A5->MaximumSize = System::Drawing::Size(45, 45);
			this->A5->MinimumSize = System::Drawing::Size(20, 20);
			this->A5->Name = L"A5";
			this->A5->Size = System::Drawing::Size(45, 45);
			this->A5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A5->TabIndex = 253;
			this->A5->TabStop = false;
			this->A5->Visible = false;
			// 
			// A4
			// 
			this->A4->AccessibleName = L"A4";
			this->A4->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->A4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->A4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4.Image")));
			this->A4->Location = System::Drawing::Point(68, 289);
			this->A4->Margin = System::Windows::Forms::Padding(1);
			this->A4->MaximumSize = System::Drawing::Size(45, 45);
			this->A4->MinimumSize = System::Drawing::Size(20, 20);
			this->A4->Name = L"A4";
			this->A4->Size = System::Drawing::Size(45, 45);
			this->A4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A4->TabIndex = 252;
			this->A4->TabStop = false;
			this->A4->Visible = false;
			// 
			// A3
			// 
			this->A3->AccessibleName = L"A3";
			this->A3->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->A3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->A3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3.Image")));
			this->A3->Location = System::Drawing::Point(68, 345);
			this->A3->Margin = System::Windows::Forms::Padding(1);
			this->A3->MaximumSize = System::Drawing::Size(45, 45);
			this->A3->MinimumSize = System::Drawing::Size(20, 20);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(45, 45);
			this->A3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A3->TabIndex = 251;
			this->A3->TabStop = false;
			this->A3->Visible = false;
			// 
			// A2
			// 
			this->A2->AccessibleName = L"A2";
			this->A2->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->A2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->A2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2.Image")));
			this->A2->Location = System::Drawing::Point(67, 402);
			this->A2->Margin = System::Windows::Forms::Padding(1);
			this->A2->MaximumSize = System::Drawing::Size(45, 45);
			this->A2->MinimumSize = System::Drawing::Size(20, 20);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(45, 45);
			this->A2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A2->TabIndex = 250;
			this->A2->TabStop = false;
			this->A2->Visible = false;
			// 
			// A1
			// 
			this->A1->AccessibleName = L"A1";
			this->A1->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->A1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->A1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1.Image")));
			this->A1->Location = System::Drawing::Point(68, 457);
			this->A1->Margin = System::Windows::Forms::Padding(1);
			this->A1->MaximumSize = System::Drawing::Size(45, 45);
			this->A1->MinimumSize = System::Drawing::Size(20, 20);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(45, 45);
			this->A1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A1->TabIndex = 249;
			this->A1->TabStop = false;
			this->A1->Visible = false;
			// 
			// B8
			// 
			this->B8->AccessibleName = L"B8";
			this->B8->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->B8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->B8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B8.Image")));
			this->B8->Location = System::Drawing::Point(128, 73);
			this->B8->Margin = System::Windows::Forms::Padding(1);
			this->B8->MaximumSize = System::Drawing::Size(45, 45);
			this->B8->MinimumSize = System::Drawing::Size(20, 20);
			this->B8->Name = L"B8";
			this->B8->Size = System::Drawing::Size(45, 45);
			this->B8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B8->TabIndex = 264;
			this->B8->TabStop = false;
			this->B8->Visible = false;
			// 
			// B7
			// 
			this->B7->AccessibleName = L"B7";
			this->B7->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->B7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->B7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B7.Image")));
			this->B7->Location = System::Drawing::Point(128, 130);
			this->B7->Margin = System::Windows::Forms::Padding(1);
			this->B7->MaximumSize = System::Drawing::Size(45, 45);
			this->B7->MinimumSize = System::Drawing::Size(20, 20);
			this->B7->Name = L"B7";
			this->B7->Size = System::Drawing::Size(45, 45);
			this->B7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B7->TabIndex = 263;
			this->B7->TabStop = false;
			this->B7->Visible = false;
			// 
			// B6
			// 
			this->B6->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->B6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->B6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B6.Image")));
			this->B6->Location = System::Drawing::Point(127, 184);
			this->B6->Margin = System::Windows::Forms::Padding(1);
			this->B6->MaximumSize = System::Drawing::Size(45, 45);
			this->B6->MinimumSize = System::Drawing::Size(20, 20);
			this->B6->Name = L"B6";
			this->B6->Size = System::Drawing::Size(45, 45);
			this->B6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B6->TabIndex = 262;
			this->B6->TabStop = false;
			this->B6->Visible = false;
			// 
			// B5
			// 
			this->B5->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->B5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->B5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B5.Image")));
			this->B5->Location = System::Drawing::Point(128, 241);
			this->B5->Margin = System::Windows::Forms::Padding(1);
			this->B5->MaximumSize = System::Drawing::Size(45, 45);
			this->B5->MinimumSize = System::Drawing::Size(20, 20);
			this->B5->Name = L"B5";
			this->B5->Size = System::Drawing::Size(45, 45);
			this->B5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B5->TabIndex = 261;
			this->B5->TabStop = false;
			this->B5->Visible = false;
			// 
			// B4
			// 
			this->B4->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->B4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->B4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4.Image")));
			this->B4->Location = System::Drawing::Point(128, 289);
			this->B4->Margin = System::Windows::Forms::Padding(1);
			this->B4->MaximumSize = System::Drawing::Size(45, 45);
			this->B4->MinimumSize = System::Drawing::Size(20, 20);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(45, 45);
			this->B4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B4->TabIndex = 260;
			this->B4->TabStop = false;
			this->B4->Visible = false;
			// 
			// B3
			// 
			this->B3->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->B3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->B3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.Image")));
			this->B3->Location = System::Drawing::Point(128, 345);
			this->B3->Margin = System::Windows::Forms::Padding(1);
			this->B3->MaximumSize = System::Drawing::Size(45, 45);
			this->B3->MinimumSize = System::Drawing::Size(20, 20);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(45, 45);
			this->B3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B3->TabIndex = 259;
			this->B3->TabStop = false;
			this->B3->Visible = false;
			// 
			// B2
			// 
			this->B2->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->B2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->B2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.Image")));
			this->B2->Location = System::Drawing::Point(127, 402);
			this->B2->Margin = System::Windows::Forms::Padding(1);
			this->B2->MaximumSize = System::Drawing::Size(45, 45);
			this->B2->MinimumSize = System::Drawing::Size(20, 20);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(45, 45);
			this->B2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B2->TabIndex = 258;
			this->B2->TabStop = false;
			this->B2->Visible = false;
			// 
			// B1
			// 
			this->B1->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->B1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->B1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.Image")));
			this->B1->Location = System::Drawing::Point(128, 457);
			this->B1->Margin = System::Windows::Forms::Padding(1);
			this->B1->MaximumSize = System::Drawing::Size(45, 45);
			this->B1->MinimumSize = System::Drawing::Size(20, 20);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(45, 45);
			this->B1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B1->TabIndex = 257;
			this->B1->TabStop = false;
			this->B1->Visible = false;
			// 
			// C8
			// 
			this->C8->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->C8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->C8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C8.Image")));
			this->C8->Location = System::Drawing::Point(179, 73);
			this->C8->Margin = System::Windows::Forms::Padding(1);
			this->C8->MaximumSize = System::Drawing::Size(45, 45);
			this->C8->MinimumSize = System::Drawing::Size(20, 20);
			this->C8->Name = L"C8";
			this->C8->Size = System::Drawing::Size(45, 45);
			this->C8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C8->TabIndex = 272;
			this->C8->TabStop = false;
			this->C8->Visible = false;
			// 
			// C7
			// 
			this->C7->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->C7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->C7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C7.Image")));
			this->C7->Location = System::Drawing::Point(179, 130);
			this->C7->Margin = System::Windows::Forms::Padding(1);
			this->C7->MaximumSize = System::Drawing::Size(45, 45);
			this->C7->MinimumSize = System::Drawing::Size(20, 20);
			this->C7->Name = L"C7";
			this->C7->Size = System::Drawing::Size(45, 45);
			this->C7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C7->TabIndex = 271;
			this->C7->TabStop = false;
			this->C7->Visible = false;
			// 
			// C6
			// 
			this->C6->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->C6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->C6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C6.Image")));
			this->C6->Location = System::Drawing::Point(178, 184);
			this->C6->Margin = System::Windows::Forms::Padding(1);
			this->C6->MaximumSize = System::Drawing::Size(45, 45);
			this->C6->MinimumSize = System::Drawing::Size(20, 20);
			this->C6->Name = L"C6";
			this->C6->Size = System::Drawing::Size(45, 45);
			this->C6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C6->TabIndex = 270;
			this->C6->TabStop = false;
			this->C6->Visible = false;
			// 
			// C5
			// 
			this->C5->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->C5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->C5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C5.Image")));
			this->C5->Location = System::Drawing::Point(179, 241);
			this->C5->Margin = System::Windows::Forms::Padding(1);
			this->C5->MaximumSize = System::Drawing::Size(45, 45);
			this->C5->MinimumSize = System::Drawing::Size(20, 20);
			this->C5->Name = L"C5";
			this->C5->Size = System::Drawing::Size(45, 45);
			this->C5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C5->TabIndex = 269;
			this->C5->TabStop = false;
			this->C5->Visible = false;
			// 
			// C4
			// 
			this->C4->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->C4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->C4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C4.Image")));
			this->C4->Location = System::Drawing::Point(179, 289);
			this->C4->Margin = System::Windows::Forms::Padding(1);
			this->C4->MaximumSize = System::Drawing::Size(45, 45);
			this->C4->MinimumSize = System::Drawing::Size(20, 20);
			this->C4->Name = L"C4";
			this->C4->Size = System::Drawing::Size(45, 45);
			this->C4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C4->TabIndex = 268;
			this->C4->TabStop = false;
			this->C4->Visible = false;
			// 
			// C3
			// 
			this->C3->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->C3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->C3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3.Image")));
			this->C3->Location = System::Drawing::Point(179, 345);
			this->C3->Margin = System::Windows::Forms::Padding(1);
			this->C3->MaximumSize = System::Drawing::Size(45, 45);
			this->C3->MinimumSize = System::Drawing::Size(20, 20);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(45, 45);
			this->C3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C3->TabIndex = 267;
			this->C3->TabStop = false;
			this->C3->Visible = false;
			// 
			// C2
			// 
			this->C2->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->C2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->C2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2.Image")));
			this->C2->Location = System::Drawing::Point(178, 402);
			this->C2->Margin = System::Windows::Forms::Padding(1);
			this->C2->MaximumSize = System::Drawing::Size(45, 45);
			this->C2->MinimumSize = System::Drawing::Size(20, 20);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(45, 45);
			this->C2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C2->TabIndex = 266;
			this->C2->TabStop = false;
			this->C2->Visible = false;
			// 
			// C1
			// 
			this->C1->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->C1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->C1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1.Image")));
			this->C1->Location = System::Drawing::Point(179, 457);
			this->C1->Margin = System::Windows::Forms::Padding(1);
			this->C1->MaximumSize = System::Drawing::Size(45, 45);
			this->C1->MinimumSize = System::Drawing::Size(20, 20);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(45, 45);
			this->C1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C1->TabIndex = 265;
			this->C1->TabStop = false;
			this->C1->Visible = false;
			// 
			// D8
			// 
			this->D8->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->D8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->D8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D8.Image")));
			this->D8->Location = System::Drawing::Point(233, 73);
			this->D8->Margin = System::Windows::Forms::Padding(1);
			this->D8->MaximumSize = System::Drawing::Size(45, 45);
			this->D8->MinimumSize = System::Drawing::Size(20, 20);
			this->D8->Name = L"D8";
			this->D8->Size = System::Drawing::Size(45, 45);
			this->D8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->D8->TabIndex = 280;
			this->D8->TabStop = false;
			this->D8->Visible = false;
			// 
			// D7
			// 
			this->D7->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->D7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->D7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D7.Image")));
			this->D7->Location = System::Drawing::Point(233, 130);
			this->D7->Margin = System::Windows::Forms::Padding(1);
			this->D7->MaximumSize = System::Drawing::Size(45, 45);
			this->D7->MinimumSize = System::Drawing::Size(20, 20);
			this->D7->Name = L"D7";
			this->D7->Size = System::Drawing::Size(45, 45);
			this->D7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->D7->TabIndex = 279;
			this->D7->TabStop = false;
			this->D7->Visible = false;
			// 
			// D6
			// 
			this->D6->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->D6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->D6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D6.Image")));
			this->D6->Location = System::Drawing::Point(232, 184);
			this->D6->Margin = System::Windows::Forms::Padding(1);
			this->D6->MaximumSize = System::Drawing::Size(45, 45);
			this->D6->MinimumSize = System::Drawing::Size(20, 20);
			this->D6->Name = L"D6";
			this->D6->Size = System::Drawing::Size(45, 45);
			this->D6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->D6->TabIndex = 278;
			this->D6->TabStop = false;
			this->D6->Visible = false;
			// 
			// D5
			// 
			this->D5->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->D5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->D5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D5.Image")));
			this->D5->Location = System::Drawing::Point(233, 241);
			this->D5->Margin = System::Windows::Forms::Padding(1);
			this->D5->MaximumSize = System::Drawing::Size(45, 45);
			this->D5->MinimumSize = System::Drawing::Size(20, 20);
			this->D5->Name = L"D5";
			this->D5->Size = System::Drawing::Size(45, 45);
			this->D5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->D5->TabIndex = 277;
			this->D5->TabStop = false;
			this->D5->Visible = false;
			// 
			// D4
			// 
			this->D4->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->D4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->D4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D4.Image")));
			this->D4->Location = System::Drawing::Point(233, 289);
			this->D4->Margin = System::Windows::Forms::Padding(1);
			this->D4->MaximumSize = System::Drawing::Size(45, 45);
			this->D4->MinimumSize = System::Drawing::Size(20, 20);
			this->D4->Name = L"D4";
			this->D4->Size = System::Drawing::Size(45, 45);
			this->D4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->D4->TabIndex = 276;
			this->D4->TabStop = false;
			this->D4->Visible = false;
			// 
			// D3
			// 
			this->D3->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->D3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->D3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D3.Image")));
			this->D3->Location = System::Drawing::Point(233, 345);
			this->D3->Margin = System::Windows::Forms::Padding(1);
			this->D3->MaximumSize = System::Drawing::Size(45, 45);
			this->D3->MinimumSize = System::Drawing::Size(20, 20);
			this->D3->Name = L"D3";
			this->D3->Size = System::Drawing::Size(45, 45);
			this->D3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->D3->TabIndex = 275;
			this->D3->TabStop = false;
			this->D3->Visible = false;
			// 
			// D2
			// 
			this->D2->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->D2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->D2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D2.Image")));
			this->D2->Location = System::Drawing::Point(232, 402);
			this->D2->Margin = System::Windows::Forms::Padding(1);
			this->D2->MaximumSize = System::Drawing::Size(45, 45);
			this->D2->MinimumSize = System::Drawing::Size(20, 20);
			this->D2->Name = L"D2";
			this->D2->Size = System::Drawing::Size(45, 45);
			this->D2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->D2->TabIndex = 274;
			this->D2->TabStop = false;
			this->D2->Visible = false;
			// 
			// D1
			// 
			this->D1->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->D1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->D1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D1.Image")));
			this->D1->Location = System::Drawing::Point(233, 457);
			this->D1->Margin = System::Windows::Forms::Padding(1);
			this->D1->MaximumSize = System::Drawing::Size(45, 45);
			this->D1->MinimumSize = System::Drawing::Size(20, 20);
			this->D1->Name = L"D1";
			this->D1->Size = System::Drawing::Size(45, 45);
			this->D1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->D1->TabIndex = 273;
			this->D1->TabStop = false;
			this->D1->Visible = false;
			// 
			// E8
			// 
			this->E8->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->E8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->E8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E8.Image")));
			this->E8->Location = System::Drawing::Point(286, 73);
			this->E8->Margin = System::Windows::Forms::Padding(1);
			this->E8->MaximumSize = System::Drawing::Size(45, 45);
			this->E8->MinimumSize = System::Drawing::Size(20, 20);
			this->E8->Name = L"E8";
			this->E8->Size = System::Drawing::Size(45, 45);
			this->E8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->E8->TabIndex = 288;
			this->E8->TabStop = false;
			this->E8->Visible = false;
			// 
			// E7
			// 
			this->E7->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->E7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->E7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E7.Image")));
			this->E7->Location = System::Drawing::Point(286, 130);
			this->E7->Margin = System::Windows::Forms::Padding(1);
			this->E7->MaximumSize = System::Drawing::Size(45, 45);
			this->E7->MinimumSize = System::Drawing::Size(20, 20);
			this->E7->Name = L"E7";
			this->E7->Size = System::Drawing::Size(45, 45);
			this->E7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->E7->TabIndex = 287;
			this->E7->TabStop = false;
			this->E7->Visible = false;
			// 
			// E6
			// 
			this->E6->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->E6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->E6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E6.Image")));
			this->E6->Location = System::Drawing::Point(285, 184);
			this->E6->Margin = System::Windows::Forms::Padding(1);
			this->E6->MaximumSize = System::Drawing::Size(45, 45);
			this->E6->MinimumSize = System::Drawing::Size(20, 20);
			this->E6->Name = L"E6";
			this->E6->Size = System::Drawing::Size(45, 45);
			this->E6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->E6->TabIndex = 286;
			this->E6->TabStop = false;
			this->E6->Visible = false;
			// 
			// E5
			// 
			this->E5->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->E5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->E5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E5.Image")));
			this->E5->Location = System::Drawing::Point(286, 241);
			this->E5->Margin = System::Windows::Forms::Padding(1);
			this->E5->MaximumSize = System::Drawing::Size(45, 45);
			this->E5->MinimumSize = System::Drawing::Size(20, 20);
			this->E5->Name = L"E5";
			this->E5->Size = System::Drawing::Size(45, 45);
			this->E5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->E5->TabIndex = 285;
			this->E5->TabStop = false;
			this->E5->Visible = false;
			// 
			// E4
			// 
			this->E4->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->E4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->E4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E4.Image")));
			this->E4->Location = System::Drawing::Point(286, 289);
			this->E4->Margin = System::Windows::Forms::Padding(1);
			this->E4->MaximumSize = System::Drawing::Size(45, 45);
			this->E4->MinimumSize = System::Drawing::Size(20, 20);
			this->E4->Name = L"E4";
			this->E4->Size = System::Drawing::Size(45, 45);
			this->E4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->E4->TabIndex = 284;
			this->E4->TabStop = false;
			this->E4->Visible = false;
			// 
			// E3
			// 
			this->E3->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->E3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->E3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E3.Image")));
			this->E3->Location = System::Drawing::Point(286, 345);
			this->E3->Margin = System::Windows::Forms::Padding(1);
			this->E3->MaximumSize = System::Drawing::Size(45, 45);
			this->E3->MinimumSize = System::Drawing::Size(20, 20);
			this->E3->Name = L"E3";
			this->E3->Size = System::Drawing::Size(45, 45);
			this->E3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->E3->TabIndex = 283;
			this->E3->TabStop = false;
			this->E3->Visible = false;
			// 
			// E2
			// 
			this->E2->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->E2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->E2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E2.Image")));
			this->E2->Location = System::Drawing::Point(285, 402);
			this->E2->Margin = System::Windows::Forms::Padding(1);
			this->E2->MaximumSize = System::Drawing::Size(45, 45);
			this->E2->MinimumSize = System::Drawing::Size(20, 20);
			this->E2->Name = L"E2";
			this->E2->Size = System::Drawing::Size(45, 45);
			this->E2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->E2->TabIndex = 282;
			this->E2->TabStop = false;
			this->E2->Visible = false;
			// 
			// E1
			// 
			this->E1->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->E1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->E1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E1.Image")));
			this->E1->Location = System::Drawing::Point(286, 457);
			this->E1->Margin = System::Windows::Forms::Padding(1);
			this->E1->MaximumSize = System::Drawing::Size(45, 45);
			this->E1->MinimumSize = System::Drawing::Size(20, 20);
			this->E1->Name = L"E1";
			this->E1->Size = System::Drawing::Size(45, 45);
			this->E1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->E1->TabIndex = 281;
			this->E1->TabStop = false;
			this->E1->Visible = false;
			// 
			// F8
			// 
			this->F8->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->F8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->F8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F8.Image")));
			this->F8->Location = System::Drawing::Point(339, 73);
			this->F8->Margin = System::Windows::Forms::Padding(1);
			this->F8->MaximumSize = System::Drawing::Size(45, 45);
			this->F8->MinimumSize = System::Drawing::Size(20, 20);
			this->F8->Name = L"F8";
			this->F8->Size = System::Drawing::Size(45, 45);
			this->F8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->F8->TabIndex = 298;
			this->F8->TabStop = false;
			this->F8->Visible = false;
			// 
			// F7
			// 
			this->F7->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->F7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->F7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F7.Image")));
			this->F7->Location = System::Drawing::Point(339, 130);
			this->F7->Margin = System::Windows::Forms::Padding(1);
			this->F7->MaximumSize = System::Drawing::Size(45, 45);
			this->F7->MinimumSize = System::Drawing::Size(20, 20);
			this->F7->Name = L"F7";
			this->F7->Size = System::Drawing::Size(45, 45);
			this->F7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->F7->TabIndex = 296;
			this->F7->TabStop = false;
			this->F7->Visible = false;
			// 
			// F6
			// 
			this->F6->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->F6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->F6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F6.Image")));
			this->F6->Location = System::Drawing::Point(338, 184);
			this->F6->Margin = System::Windows::Forms::Padding(1);
			this->F6->MaximumSize = System::Drawing::Size(45, 45);
			this->F6->MinimumSize = System::Drawing::Size(20, 20);
			this->F6->Name = L"F6";
			this->F6->Size = System::Drawing::Size(45, 45);
			this->F6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->F6->TabIndex = 294;
			this->F6->TabStop = false;
			this->F6->Visible = false;
			// 
			// F5
			// 
			this->F5->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->F5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->F5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F5.Image")));
			this->F5->Location = System::Drawing::Point(339, 241);
			this->F5->Margin = System::Windows::Forms::Padding(1);
			this->F5->MaximumSize = System::Drawing::Size(45, 45);
			this->F5->MinimumSize = System::Drawing::Size(20, 20);
			this->F5->Name = L"F5";
			this->F5->Size = System::Drawing::Size(45, 45);
			this->F5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->F5->TabIndex = 293;
			this->F5->TabStop = false;
			this->F5->Visible = false;
			// 
			// F4
			// 
			this->F4->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->F4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->F4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F4.Image")));
			this->F4->Location = System::Drawing::Point(339, 289);
			this->F4->Margin = System::Windows::Forms::Padding(1);
			this->F4->MaximumSize = System::Drawing::Size(45, 45);
			this->F4->MinimumSize = System::Drawing::Size(20, 20);
			this->F4->Name = L"F4";
			this->F4->Size = System::Drawing::Size(45, 45);
			this->F4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->F4->TabIndex = 292;
			this->F4->TabStop = false;
			this->F4->Visible = false;
			// 
			// F3
			// 
			this->F3->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->F3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->F3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F3.Image")));
			this->F3->Location = System::Drawing::Point(339, 345);
			this->F3->Margin = System::Windows::Forms::Padding(1);
			this->F3->MaximumSize = System::Drawing::Size(45, 45);
			this->F3->MinimumSize = System::Drawing::Size(20, 20);
			this->F3->Name = L"F3";
			this->F3->Size = System::Drawing::Size(45, 45);
			this->F3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->F3->TabIndex = 291;
			this->F3->TabStop = false;
			this->F3->Visible = false;
			// 
			// F2
			// 
			this->F2->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->F2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->F2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F2.Image")));
			this->F2->Location = System::Drawing::Point(338, 402);
			this->F2->Margin = System::Windows::Forms::Padding(1);
			this->F2->MaximumSize = System::Drawing::Size(45, 45);
			this->F2->MinimumSize = System::Drawing::Size(20, 20);
			this->F2->Name = L"F2";
			this->F2->Size = System::Drawing::Size(45, 45);
			this->F2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->F2->TabIndex = 290;
			this->F2->TabStop = false;
			this->F2->Visible = false;
			// 
			// F1
			// 
			this->F1->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->F1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->F1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F1.Image")));
			this->F1->Location = System::Drawing::Point(339, 457);
			this->F1->Margin = System::Windows::Forms::Padding(1);
			this->F1->MaximumSize = System::Drawing::Size(45, 45);
			this->F1->MinimumSize = System::Drawing::Size(20, 20);
			this->F1->Name = L"F1";
			this->F1->Size = System::Drawing::Size(45, 45);
			this->F1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->F1->TabIndex = 289;
			this->F1->TabStop = false;
			this->F1->Visible = false;
			// 
			// G8
			// 
			this->G8->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->G8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->G8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G8.Image")));
			this->G8->Location = System::Drawing::Point(394, 73);
			this->G8->Margin = System::Windows::Forms::Padding(1);
			this->G8->MaximumSize = System::Drawing::Size(45, 45);
			this->G8->MinimumSize = System::Drawing::Size(20, 20);
			this->G8->Name = L"G8";
			this->G8->Size = System::Drawing::Size(45, 45);
			this->G8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->G8->TabIndex = 306;
			this->G8->TabStop = false;
			this->G8->Visible = false;
			// 
			// G7
			// 
			this->G7->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->G7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->G7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G7.Image")));
			this->G7->Location = System::Drawing::Point(394, 130);
			this->G7->Margin = System::Windows::Forms::Padding(1);
			this->G7->MaximumSize = System::Drawing::Size(45, 45);
			this->G7->MinimumSize = System::Drawing::Size(20, 20);
			this->G7->Name = L"G7";
			this->G7->Size = System::Drawing::Size(45, 45);
			this->G7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->G7->TabIndex = 305;
			this->G7->TabStop = false;
			this->G7->Visible = false;
			// 
			// G6
			// 
			this->G6->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->G6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->G6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G6.Image")));
			this->G6->Location = System::Drawing::Point(393, 184);
			this->G6->Margin = System::Windows::Forms::Padding(1);
			this->G6->MaximumSize = System::Drawing::Size(45, 45);
			this->G6->MinimumSize = System::Drawing::Size(20, 20);
			this->G6->Name = L"G6";
			this->G6->Size = System::Drawing::Size(45, 45);
			this->G6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->G6->TabIndex = 304;
			this->G6->TabStop = false;
			this->G6->Visible = false;
			// 
			// G5
			// 
			this->G5->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->G5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->G5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G5.Image")));
			this->G5->Location = System::Drawing::Point(394, 241);
			this->G5->Margin = System::Windows::Forms::Padding(1);
			this->G5->MaximumSize = System::Drawing::Size(45, 45);
			this->G5->MinimumSize = System::Drawing::Size(20, 20);
			this->G5->Name = L"G5";
			this->G5->Size = System::Drawing::Size(45, 45);
			this->G5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->G5->TabIndex = 303;
			this->G5->TabStop = false;
			this->G5->Visible = false;
			// 
			// G4
			// 
			this->G4->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->G4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->G4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G4.Image")));
			this->G4->Location = System::Drawing::Point(394, 289);
			this->G4->Margin = System::Windows::Forms::Padding(1);
			this->G4->MaximumSize = System::Drawing::Size(45, 45);
			this->G4->MinimumSize = System::Drawing::Size(20, 20);
			this->G4->Name = L"G4";
			this->G4->Size = System::Drawing::Size(45, 45);
			this->G4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->G4->TabIndex = 302;
			this->G4->TabStop = false;
			this->G4->Visible = false;
			// 
			// G3
			// 
			this->G3->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->G3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->G3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G3.Image")));
			this->G3->Location = System::Drawing::Point(394, 345);
			this->G3->Margin = System::Windows::Forms::Padding(1);
			this->G3->MaximumSize = System::Drawing::Size(45, 45);
			this->G3->MinimumSize = System::Drawing::Size(20, 20);
			this->G3->Name = L"G3";
			this->G3->Size = System::Drawing::Size(45, 45);
			this->G3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->G3->TabIndex = 301;
			this->G3->TabStop = false;
			this->G3->Visible = false;
			// 
			// G2
			// 
			this->G2->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->G2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->G2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G2.Image")));
			this->G2->Location = System::Drawing::Point(393, 402);
			this->G2->Margin = System::Windows::Forms::Padding(1);
			this->G2->MaximumSize = System::Drawing::Size(45, 45);
			this->G2->MinimumSize = System::Drawing::Size(20, 20);
			this->G2->Name = L"G2";
			this->G2->Size = System::Drawing::Size(45, 45);
			this->G2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->G2->TabIndex = 300;
			this->G2->TabStop = false;
			this->G2->Visible = false;
			// 
			// G1
			// 
			this->G1->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->G1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->G1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G1.Image")));
			this->G1->Location = System::Drawing::Point(394, 457);
			this->G1->Margin = System::Windows::Forms::Padding(1);
			this->G1->MaximumSize = System::Drawing::Size(45, 45);
			this->G1->MinimumSize = System::Drawing::Size(20, 20);
			this->G1->Name = L"G1";
			this->G1->Size = System::Drawing::Size(45, 45);
			this->G1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->G1->TabIndex = 299;
			this->G1->TabStop = false;
			this->G1->Visible = false;
			// 
			// H8
			// 
			this->H8->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->H8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->H8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H8.Image")));
			this->H8->Location = System::Drawing::Point(451, 73);
			this->H8->Margin = System::Windows::Forms::Padding(1);
			this->H8->MaximumSize = System::Drawing::Size(45, 45);
			this->H8->MinimumSize = System::Drawing::Size(20, 20);
			this->H8->Name = L"H8";
			this->H8->Size = System::Drawing::Size(45, 45);
			this->H8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->H8->TabIndex = 314;
			this->H8->TabStop = false;
			this->H8->Visible = false;
			// 
			// H7
			// 
			this->H7->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->H7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->H7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H7.Image")));
			this->H7->Location = System::Drawing::Point(452, 130);
			this->H7->Margin = System::Windows::Forms::Padding(1);
			this->H7->MaximumSize = System::Drawing::Size(45, 45);
			this->H7->MinimumSize = System::Drawing::Size(20, 20);
			this->H7->Name = L"H7";
			this->H7->Size = System::Drawing::Size(45, 45);
			this->H7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->H7->TabIndex = 313;
			this->H7->TabStop = false;
			this->H7->Visible = false;
			// 
			// H6
			// 
			this->H6->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->H6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->H6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H6.Image")));
			this->H6->Location = System::Drawing::Point(451, 184);
			this->H6->Margin = System::Windows::Forms::Padding(1);
			this->H6->MaximumSize = System::Drawing::Size(45, 45);
			this->H6->MinimumSize = System::Drawing::Size(20, 20);
			this->H6->Name = L"H6";
			this->H6->Size = System::Drawing::Size(45, 45);
			this->H6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->H6->TabIndex = 312;
			this->H6->TabStop = false;
			this->H6->Visible = false;
			// 
			// H5
			// 
			this->H5->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->H5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->H5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H5.Image")));
			this->H5->Location = System::Drawing::Point(452, 241);
			this->H5->Margin = System::Windows::Forms::Padding(1);
			this->H5->MaximumSize = System::Drawing::Size(45, 45);
			this->H5->MinimumSize = System::Drawing::Size(20, 20);
			this->H5->Name = L"H5";
			this->H5->Size = System::Drawing::Size(45, 45);
			this->H5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->H5->TabIndex = 311;
			this->H5->TabStop = false;
			this->H5->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(554, 218);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 24);
			this->label1->TabIndex = 315;
			this->label1->Text = L"Put Queen ";
			// 
			// H4
			// 
			this->H4->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->H4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->H4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H4.Image")));
			this->H4->Location = System::Drawing::Point(452, 289);
			this->H4->Margin = System::Windows::Forms::Padding(1);
			this->H4->MaximumSize = System::Drawing::Size(45, 45);
			this->H4->MinimumSize = System::Drawing::Size(20, 20);
			this->H4->Name = L"H4";
			this->H4->Size = System::Drawing::Size(45, 45);
			this->H4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->H4->TabIndex = 310;
			this->H4->TabStop = false;
			this->H4->Visible = false;
			// 
			// H3
			// 
			this->H3->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->H3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->H3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H3.Image")));
			this->H3->Location = System::Drawing::Point(452, 345);
			this->H3->Margin = System::Windows::Forms::Padding(1);
			this->H3->MaximumSize = System::Drawing::Size(45, 45);
			this->H3->MinimumSize = System::Drawing::Size(20, 20);
			this->H3->Name = L"H3";
			this->H3->Size = System::Drawing::Size(45, 45);
			this->H3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->H3->TabIndex = 309;
			this->H3->TabStop = false;
			this->H3->Visible = false;
			// 
			// H2
			// 
			this->H2->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->H2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->H2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H2.Image")));
			this->H2->Location = System::Drawing::Point(451, 402);
			this->H2->Margin = System::Windows::Forms::Padding(1);
			this->H2->MaximumSize = System::Drawing::Size(45, 45);
			this->H2->MinimumSize = System::Drawing::Size(20, 20);
			this->H2->Name = L"H2";
			this->H2->Size = System::Drawing::Size(45, 45);
			this->H2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->H2->TabIndex = 308;
			this->H2->TabStop = false;
			this->H2->Visible = false;
			// 
			// H1
			// 
			this->H1->AccessibleRole = System::Windows::Forms::AccessibleRole::Animation;
			this->H1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->H1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H1.Image")));
			this->H1->Location = System::Drawing::Point(452, 457);
			this->H1->Margin = System::Windows::Forms::Padding(1);
			this->H1->MaximumSize = System::Drawing::Size(45, 45);
			this->H1->MinimumSize = System::Drawing::Size(20, 20);
			this->H1->Name = L"H1";
			this->H1->Size = System::Drawing::Size(45, 45);
			this->H1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->H1->TabIndex = 307;
			this->H1->TabStop = false;
			this->H1->Visible = false;
			// 
			// EnterQueen
			// 
			this->EnterQueen->Location = System::Drawing::Point(558, 394);
			this->EnterQueen->Name = L"EnterQueen";
			this->EnterQueen->Size = System::Drawing::Size(100, 23);
			this->EnterQueen->TabIndex = 297;
			this->EnterQueen->Text = L"Enter Queen";
			this->EnterQueen->UseVisualStyleBackColor = true;
			this->EnterQueen->Click += gcnew System::EventHandler(this, &chessBoard::EnterQueen_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(558, 327);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(88, 20);
			this->textBox1->TabIndex = 295;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(32, 37);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->MaximumSize = System::Drawing::Size(500, 500);
			this->pictureBox1->MinimumSize = System::Drawing::Size(480, 480);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 500);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 248;
			this->pictureBox1->TabStop = false;
			// 
			// smile
			// 
			this->smile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"smile.Image")));
			this->smile->Location = System::Drawing::Point(558, 90);
			this->smile->Name = L"smile";
			this->smile->Size = System::Drawing::Size(100, 106);
			this->smile->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->smile->TabIndex = 317;
			this->smile->TabStop = false;
			this->smile->Visible = false;
			// 
			// score
			// 
			this->score->AutoSize = true;
			this->score->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->score->Location = System::Drawing::Point(595, 9);
			this->score->Name = L"score";
			this->score->Size = System::Drawing::Size(49, 16);
			this->score->TabIndex = 322;
			this->score->Text = L"Score";
			this->score->Click += gcnew System::EventHandler(this, &chessBoard::label2_Click);
			// 
			// scoreBox
			// 
			this->scoreBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->scoreBox->Enabled = false;
			this->scoreBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scoreBox->Location = System::Drawing::Point(573, 28);
			this->scoreBox->Name = L"scoreBox";
			this->scoreBox->Size = System::Drawing::Size(100, 15);
			this->scoreBox->TabIndex = 323;
			this->scoreBox->Text = L"0";
			this->scoreBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// removeQueen
			// 
			this->removeQueen->Location = System::Drawing::Point(558, 424);
			this->removeQueen->Name = L"removeQueen";
			this->removeQueen->Size = System::Drawing::Size(100, 23);
			this->removeQueen->TabIndex = 324;
			this->removeQueen->Text = L"Remove Queen";
			this->removeQueen->UseVisualStyleBackColor = true;
			this->removeQueen->Click += gcnew System::EventHandler(this, &chessBoard::removeQueen_Click);
			// 
			// exit
			// 
			this->exit->Location = System::Drawing::Point(558, 508);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(100, 24);
			this->exit->TabIndex = 325;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &chessBoard::exit_Click);
			// 
			// chessBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(710, 575);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->removeQueen);
			this->Controls->Add(this->scoreBox);
			this->Controls->Add(this->score);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->frown);
			this->Controls->Add(this->NewGame);
			this->Controls->Add(this->A7);
			this->Controls->Add(this->A8);
			this->Controls->Add(this->A6);
			this->Controls->Add(this->A5);
			this->Controls->Add(this->A4);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->B8);
			this->Controls->Add(this->B7);
			this->Controls->Add(this->B6);
			this->Controls->Add(this->B5);
			this->Controls->Add(this->B4);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->C8);
			this->Controls->Add(this->C7);
			this->Controls->Add(this->C6);
			this->Controls->Add(this->C5);
			this->Controls->Add(this->C4);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->D8);
			this->Controls->Add(this->D7);
			this->Controls->Add(this->D6);
			this->Controls->Add(this->D5);
			this->Controls->Add(this->D4);
			this->Controls->Add(this->D3);
			this->Controls->Add(this->D2);
			this->Controls->Add(this->D1);
			this->Controls->Add(this->E8);
			this->Controls->Add(this->E7);
			this->Controls->Add(this->E6);
			this->Controls->Add(this->E5);
			this->Controls->Add(this->E4);
			this->Controls->Add(this->E3);
			this->Controls->Add(this->E2);
			this->Controls->Add(this->E1);
			this->Controls->Add(this->F8);
			this->Controls->Add(this->F7);
			this->Controls->Add(this->F6);
			this->Controls->Add(this->F5);
			this->Controls->Add(this->F4);
			this->Controls->Add(this->F3);
			this->Controls->Add(this->F2);
			this->Controls->Add(this->F1);
			this->Controls->Add(this->G8);
			this->Controls->Add(this->G7);
			this->Controls->Add(this->G6);
			this->Controls->Add(this->G5);
			this->Controls->Add(this->G4);
			this->Controls->Add(this->G3);
			this->Controls->Add(this->G2);
			this->Controls->Add(this->G1);
			this->Controls->Add(this->H8);
			this->Controls->Add(this->H7);
			this->Controls->Add(this->H6);
			this->Controls->Add(this->H5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->H4);
			this->Controls->Add(this->H3);
			this->Controls->Add(this->H2);
			this->Controls->Add(this->H1);
			this->Controls->Add(this->EnterQueen);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->smile);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"chessBoard";
			this->Text = L"chessBoard";
			this->Load += gcnew System::EventHandler(this, &chessBoard::chessBoard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->frown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->smile))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		

		
		String^ userName;												// Name saver
		int totalScore = 0;												// Score
		int mistakes = 0;												// mistakes counter
		char numberOfQueens = 0;										//global variable to count number of safe queens entered
		array<String ^, 1>^ TestQueen = gcnew array<String ^, 1>(8);	// Keep track of all 8 good queens 
		clock_t start, end;												// To get the time played				
		int startTime = 0;												// I only want to start the clock on the first queen placed
		Boolean haveISaved = false;										// To test if I've saved at least once
		


	private: virtual System::Void EnterQueen_Click(System::Object^  sender, System::EventArgs^  e) sealed {
		if (startTime == 0) {
			start = clock();
			startTime++;
		}
		char qXshift, qYshift, CurrentQX, CurrentQY;

		//set up ChessBoard array - used to calculate queens' "star" positions
		array<String ^, 2>^ ChessBoard = gcnew array<String ^, 2>(10, 10);

		//copying queens' positions from GUI chessboard to ChessBoard array
		if (A1->Visible == true) ChessBoard[1, 1] = "Q";
		if (A2->Visible == true) ChessBoard[1, 2] = "Q";
		if (A3->Visible == true) ChessBoard[1, 3] = "Q";
		if (A4->Visible == true) ChessBoard[1, 4] = "Q";
		if (A5->Visible == true) ChessBoard[1, 5] = "Q";
		if (A6->Visible == true) ChessBoard[1, 6] = "Q";
		if (A7->Visible == true) ChessBoard[1, 7] = "Q";
		if (A8->Visible == true) ChessBoard[1, 8] = "Q";

		if (B1->Visible == true) ChessBoard[2, 1] = "Q";
		if (B2->Visible == true) ChessBoard[2, 2] = "Q";
		if (B3->Visible == true) ChessBoard[2, 3] = "Q";
		if (B4->Visible == true) ChessBoard[2, 4] = "Q";
		if (B5->Visible == true) ChessBoard[2, 5] = "Q";
		if (B6->Visible == true) ChessBoard[2, 6] = "Q";
		if (B7->Visible == true) ChessBoard[2, 7] = "Q";
		if (B8->Visible == true) ChessBoard[2, 8] = "Q";

		if (C1->Visible == true) ChessBoard[3, 1] = "Q";
		if (C2->Visible == true) ChessBoard[3, 2] = "Q";
		if (C3->Visible == true) ChessBoard[3, 3] = "Q";
		if (C4->Visible == true) ChessBoard[3, 4] = "Q";
		if (C5->Visible == true) ChessBoard[3, 5] = "Q";
		if (C6->Visible == true) ChessBoard[3, 6] = "Q";
		if (C7->Visible == true) ChessBoard[3, 7] = "Q";
		if (C8->Visible == true) ChessBoard[3, 8] = "Q";

		if (D1->Visible == true) ChessBoard[4, 1] = "Q";
		if (D2->Visible == true) ChessBoard[4, 2] = "Q";
		if (D3->Visible == true) ChessBoard[4, 3] = "Q";
		if (D4->Visible == true) ChessBoard[4, 4] = "Q";
		if (D5->Visible == true) ChessBoard[4, 5] = "Q";
		if (D6->Visible == true) ChessBoard[4, 6] = "Q";
		if (D7->Visible == true) ChessBoard[4, 7] = "Q";
		if (D8->Visible == true) ChessBoard[4, 8] = "Q";

		if (E1->Visible == true) ChessBoard[5, 1] = "Q";
		if (E2->Visible == true) ChessBoard[5, 2] = "Q";
		if (E3->Visible == true) ChessBoard[5, 3] = "Q";
		if (E4->Visible == true) ChessBoard[5, 4] = "Q";
		if (E5->Visible == true) ChessBoard[5, 5] = "Q";
		if (E6->Visible == true) ChessBoard[5, 6] = "Q";
		if (E7->Visible == true) ChessBoard[5, 7] = "Q";
		if (E8->Visible == true) ChessBoard[5, 8] = "Q";

		if (F1->Visible == true) ChessBoard[6, 1] = "Q";
		if (F2->Visible == true) ChessBoard[6, 2] = "Q";
		if (F3->Visible == true) ChessBoard[6, 3] = "Q";
		if (F4->Visible == true) ChessBoard[6, 4] = "Q";
		if (F5->Visible == true) ChessBoard[6, 5] = "Q";
		if (F6->Visible == true) ChessBoard[6, 6] = "Q";
		if (F7->Visible == true) ChessBoard[6, 7] = "Q";
		if (F8->Visible == true) ChessBoard[6, 8] = "Q";

		if (G1->Visible == true) ChessBoard[7, 1] = "Q";
		if (G2->Visible == true) ChessBoard[7, 2] = "Q";
		if (G3->Visible == true) ChessBoard[7, 3] = "Q";
		if (G4->Visible == true) ChessBoard[7, 4] = "Q";
		if (G5->Visible == true) ChessBoard[7, 5] = "Q";
		if (G6->Visible == true) ChessBoard[7, 6] = "Q";
		if (G7->Visible == true) ChessBoard[7, 7] = "Q";
		if (G8->Visible == true) ChessBoard[7, 8] = "Q";

		if (H1->Visible == true) ChessBoard[8, 1] = "Q";
		if (H2->Visible == true) ChessBoard[8, 2] = "Q";
		if (H3->Visible == true) ChessBoard[8, 3] = "Q";
		if (H4->Visible == true) ChessBoard[8, 4] = "Q";
		if (H5->Visible == true) ChessBoard[8, 5] = "Q";
		if (H6->Visible == true) ChessBoard[8, 6] = "Q";
		if (H7->Visible == true) ChessBoard[8, 7] = "Q";
		if (H8->Visible == true) ChessBoard[8, 8] = "Q";


		// assignment of "q" to ChessBoard fields fired by queens - queens' "stars"

		for (char xi = 1; xi<9; xi++)
		{
			for (char yj = 1; yj < 9; yj++)
			{
				if (ChessBoard[xi, yj] == "Q")
				{
					qXshift = xi, qYshift = yj;
					queenposition(qXshift, qYshift, ChessBoard);
				}
			}

		}


		//queen position input through GUI
		String ^ queenINPUT = textBox1->Text;
		String ^ QUEENinput = queenINPUT->ToUpper();

		//making queens' pictures visible
		if (A1->Name == QUEENinput)  A1->Visible = true;
		else if (A2->Name == QUEENinput)  A2->Visible = true;
		else if (A3->Name == QUEENinput)  A3->Visible = true;
		else if (A4->Name == QUEENinput)  A4->Visible = true;
		else if (A5->Name == QUEENinput)  A5->Visible = true;
		else if (A6->Name == QUEENinput)  A6->Visible = true;
		else if (A7->Name == QUEENinput)  A7->Visible = true;
		else if (A8->Name == QUEENinput)  A8->Visible = true;
		else if (B1->Name == QUEENinput)  B1->Visible = true;
		else if (B2->Name == QUEENinput)  B2->Visible = true;
		else if (B3->Name == QUEENinput)  B3->Visible = true;
		else if (B4->Name == QUEENinput)  B4->Visible = true;
		else if (B5->Name == QUEENinput)  B5->Visible = true;
		else if (B6->Name == QUEENinput)  B6->Visible = true;
		else if (B7->Name == QUEENinput)  B7->Visible = true;
		else if (B8->Name == QUEENinput)  B8->Visible = true;
		else if (C1->Name == QUEENinput)  C1->Visible = true;
		else if (C2->Name == QUEENinput)  C2->Visible = true;
		else if (C3->Name == QUEENinput)  C3->Visible = true;
		else if (C4->Name == QUEENinput)  C4->Visible = true;
		else if (C5->Name == QUEENinput)  C5->Visible = true;
		else if (C6->Name == QUEENinput)  C6->Visible = true;
		else if (C7->Name == QUEENinput)  C7->Visible = true;
		else if (C8->Name == QUEENinput)  C8->Visible = true;
		else if (D1->Name == QUEENinput)  D1->Visible = true;
		else if (D2->Name == QUEENinput)  D2->Visible = true;
		else if (D3->Name == QUEENinput)  D3->Visible = true;
		else if (D4->Name == QUEENinput)  D4->Visible = true;
		else if (D5->Name == QUEENinput)  D5->Visible = true;
		else if (D6->Name == QUEENinput)  D6->Visible = true;
		else if (D7->Name == QUEENinput)  D7->Visible = true;
		else if (D8->Name == QUEENinput)  D8->Visible = true;
		else if (E1->Name == QUEENinput)  E1->Visible = true;
		else if (E2->Name == QUEENinput)  E2->Visible = true;
		else if (E3->Name == QUEENinput)  E3->Visible = true;
		else if (E4->Name == QUEENinput)  E4->Visible = true;
		else if (E5->Name == QUEENinput)  E5->Visible = true;
		else if (E6->Name == QUEENinput)  E6->Visible = true;
		else if (E7->Name == QUEENinput)  E7->Visible = true;
		else if (E8->Name == QUEENinput)  E8->Visible = true;
		else if (F1->Name == QUEENinput)  F1->Visible = true;
		else if (F2->Name == QUEENinput)  F2->Visible = true;
		else if (F3->Name == QUEENinput)  F3->Visible = true;
		else if (F4->Name == QUEENinput)  F4->Visible = true;
		else if (F5->Name == QUEENinput)  F5->Visible = true;
		else if (F6->Name == QUEENinput)  F6->Visible = true;
		else if (F7->Name == QUEENinput)  F7->Visible = true;
		else if (F8->Name == QUEENinput)  F8->Visible = true;
		else if (G1->Name == QUEENinput)  G1->Visible = true;
		else if (G2->Name == QUEENinput)  G2->Visible = true;
		else if (G3->Name == QUEENinput)  G3->Visible = true;
		else if (G4->Name == QUEENinput)  G4->Visible = true;
		else if (G5->Name == QUEENinput)  G5->Visible = true;
		else if (G6->Name == QUEENinput)  G6->Visible = true;
		else if (G7->Name == QUEENinput)  G7->Visible = true;
		else if (G8->Name == QUEENinput)  G8->Visible = true;
		else if (H1->Name == QUEENinput)  H1->Visible = true;
		else if (H2->Name == QUEENinput)  H2->Visible = true;
		else if (H3->Name == QUEENinput)  H3->Visible = true;
		else if (H4->Name == QUEENinput)  H4->Visible = true;
		else if (H5->Name == QUEENinput)  H5->Visible = true;
		else if (H6->Name == QUEENinput)  H6->Visible = true;
		else if (H7->Name == QUEENinput)  H7->Visible = true;
		else if (H8->Name == QUEENinput)  H8->Visible = true;
		else { MessageBox::Show("INPUT ACCEPTIBLE RANGE is  A1....H8"); goto next; }

		//conversion of current queen coordinates string^->char

		if (QUEENinput->Substring(0, 1) == "A") CurrentQX = 1;
		if (QUEENinput->Substring(0, 1) == "B") CurrentQX = 2;
		if (QUEENinput->Substring(0, 1) == "C") CurrentQX = 3;
		if (QUEENinput->Substring(0, 1) == "D") CurrentQX = 4;
		if (QUEENinput->Substring(0, 1) == "E") CurrentQX = 5;
		if (QUEENinput->Substring(0, 1) == "F") CurrentQX = 6;
		if (QUEENinput->Substring(0, 1) == "G") CurrentQX = 7;
		if (QUEENinput->Substring(0, 1) == "H") CurrentQX = 8;

		if (QUEENinput->Substring(1, 1) == "1") CurrentQY = 1;
		if (QUEENinput->Substring(1, 1) == "2") CurrentQY = 2;
		if (QUEENinput->Substring(1, 1) == "3") CurrentQY = 3;
		if (QUEENinput->Substring(1, 1) == "4") CurrentQY = 4;
		if (QUEENinput->Substring(1, 1) == "5") CurrentQY = 5;
		if (QUEENinput->Substring(1, 1) == "6") CurrentQY = 6;
		if (QUEENinput->Substring(1, 1) == "7") CurrentQY = 7;
		if (QUEENinput->Substring(1, 1) == "8") CurrentQY = 8;



		//making "frown" if queen's position is bad or "smile" if  queen's position is good
		if (ChessBoard[CurrentQX, CurrentQY] == "q" || ChessBoard[CurrentQX, CurrentQY] == "Q")
		{
			System::Media::SoundPlayer ^simpleSound = gcnew
				System::Media::SoundPlayer("c:\\windows\\media\\ringout.wav");
			simpleSound->Play();
			updateScoreBad();
			mistakes++;
			frown->Visible = true;
			smile->Visible = false;


		}
		else
		{
			System::Media::SoundPlayer ^simpleSound = gcnew
				System::Media::SoundPlayer("c:\\windows\\media\\tada.wav");
			simpleSound->Play();
			smile->Visible = true;
			frown->Visible = false;
			TestQueen[numberOfQueens] = QUEENinput;
			numberOfQueens = numberOfQueens + 1;
			updateScoreGood();
			congrat(numberOfQueens);

		}

	next:;
	}


		// New Game dialogue
		private: System::Void NewGame_Click(System::Object^  sender, System::EventArgs^  e) {	// New Game dialogue
		frown->Visible = true;
		System::Media::SoundPlayer ^simpleSound = gcnew
		System::Media::SoundPlayer("c:\\windows\\media\\ringout.wav");
		simpleSound->Play();

		MessageBox::Show(" !!! Why ??? Anyway A New Game will START NOW ..... ");		// New Game dialogue
		Saves();
	

		A1->Visible = false;		// remove queens from chessboard
		A2->Visible = false;		// remove queens from chessboard
		A3->Visible = false;		// remove queens from chessboard
		A4->Visible = false;		// remove queens from chessboard
		A5->Visible = false;		// remove queens from chessboard
		A6->Visible = false;		// remove queens from chessboard
		A7->Visible = false;		// remove queens from chessboard
		A8->Visible = false;		// remove queens from chessboard
									// remove queens from chessboard
		B1->Visible = false;		// remove queens from chessboard
		B2->Visible = false;		// remove queens from chessboard
		B3->Visible = false;		// remove queens from chessboard
		B4->Visible = false;		// remove queens from chessboard
		B5->Visible = false;		// remove queens from chessboard
		B6->Visible = false;		// remove queens from chessboard
		B7->Visible = false;		// remove queens from chessboard
		B8->Visible = false;		// remove queens from chessboard
									// remove queens from chessboard
		C1->Visible = false;		// remove queens from chessboard
		C2->Visible = false;		// remove queens from chessboard
		C3->Visible = false;		// remove queens from chessboard
		C4->Visible = false;		// remove queens from chessboard
		C5->Visible = false;		// remove queens from chessboard
		C6->Visible = false;		// remove queens from chessboard
		C7->Visible = false;		// remove queens from chessboard
		C8->Visible = false;		// remove queens from chessboard
									// remove queens from chessboard
		D1->Visible = false;		// remove queens from chessboard
		D2->Visible = false;		// remove queens from chessboard
		D3->Visible = false;		// remove queens from chessboard
		D4->Visible = false;		// remove queens from chessboard
		D5->Visible = false;		// remove queens from chessboard
		D6->Visible = false;		// remove queens from chessboard
		D7->Visible = false;		// remove queens from chessboard
		D8->Visible = false;		// remove queens from chessboard
									// remove queens from chessboard
		E1->Visible = false;		// remove queens from chessboard
		E2->Visible = false;		// remove queens from chessboard
		E3->Visible = false;		// remove queens from chessboard
		E4->Visible = false;		// remove queens from chessboard
		E5->Visible = false;		// remove queens from chessboard
		E6->Visible = false;		// remove queens from chessboard
		E7->Visible = false;		// remove queens from chessboard
		E8->Visible = false;		// remove queens from chessboard
									// remove queens from chessboard
		F1->Visible = false;		// remove queens from chessboard
		F2->Visible = false;		// remove queens from chessboard
		F3->Visible = false;		// remove queens from chessboard
		F4->Visible = false;		// remove queens from chessboard
		F5->Visible = false;		// remove queens from chessboard
		F6->Visible = false;		// remove queens from chessboard
		F7->Visible = false;		// remove queens from chessboard
		F8->Visible = false;		// remove queens from chessboard
									// remove queens from chessboard
		G1->Visible = false;		// remove queens from chessboard
		G2->Visible = false;		// remove queens from chessboard
		G3->Visible = false;		// remove queens from chessboard
		G4->Visible = false;		// remove queens from chessboard
		G5->Visible = false;		// remove queens from chessboard
		G6->Visible = false;		// remove queens from chessboard
		G7->Visible = false;		// remove queens from chessboard
		G8->Visible = false;		// remove queens from chessboard
									// remove queens from chessboard
		H1->Visible = false;		// remove queens from chessboard
		H2->Visible = false;		// remove queens from chessboard
		H3->Visible = false;		// remove queens from chessboard
		H4->Visible = false;		// remove queens from chessboard
		H5->Visible = false;		// remove queens from chessboard
		H6->Visible = false;		// remove queens from chessboard
		H7->Visible = false;		// remove queens from chessboard
		H8->Visible = false;		// remove queens from chessboard

		smile->Visible = false;		// remove smile
		frown->Visible = false;		// remove frown

		numberOfQueens = 0;         //set up number of safe queens to 0
		totalScore = 0;				// reset score
		mistakes = 0;				// reset mistakes made
		startTime = 0;				// Set start time to 0 to allow the clock to reset
		this->scoreBox->Text = 0 + "";	// reset displayed score
		this->textBox1->Text = "";		// reset input box
		userName = "";					// reset name
	}

			 //Congratulation message function
			 void congrat(char QueenNumber) {
				 if (QueenNumber == 8) {
					 MessageBox::Show(" Congratulations! All 8 queens are safe");
					 // Save and close
					 Saves();
					 haveISaved = true;
				 }
			 }

			 // queenposition function evaluates queens' positions on chessboard 
			 char queenposition(char qX_shift, char qY_shift, array<String ^, 2>^ Chess_Board)
			 {

				 for (char j = 1; j<9; j++)
				 {
					 //horizontal fields "shot through" by queens
					 if (Chess_Board[qX_shift, j] != "Q") Chess_Board[qX_shift, j] = "q";

					 //vertical fields "shot through"  by queens
					 if (Chess_Board[j, qY_shift] != "Q") Chess_Board[j, qY_shift] = "q";
				 }

				 //diagonal fields "shot through"  by queens
				 char xnew = qX_shift;
				 char ynew = qY_shift;

				 while ((xnew<9) || (ynew<9)) {
					 if ((xnew == 8) || (ynew == 8)) break;
					 xnew = xnew + 1;
					 ynew = ynew + 1;
					 if (Chess_Board[xnew, ynew] != "Q") Chess_Board[xnew, ynew] = "q";
					 if ((xnew == 8) || (ynew == 8)) break;
				 }

				 xnew = qX_shift;
				 ynew = qY_shift;
				 while ((xnew >= 1) || (ynew >= 1)) {
					 if ((xnew == 1) || (ynew == 1)) break;
					 xnew = xnew - 1;
					 ynew = ynew - 1;

					 if (Chess_Board[xnew, ynew] != "Q") Chess_Board[xnew, ynew] = "q";
					 if ((xnew == 1) || (ynew == 1)) break;
				 }

				 xnew = qX_shift;
				 ynew = qY_shift;
				 while ((xnew >= 1) || (ynew<9)) {
					 if ((xnew == 1) || (ynew == 8)) break;
					 xnew = xnew - 1;
					 ynew = ynew + 1;

					 if (Chess_Board[xnew, ynew] != "Q") Chess_Board[xnew, ynew] = "q";
					 if ((xnew == 1) || (ynew == 8)) break;
				 }

				 xnew = qX_shift;
				 ynew = qY_shift;
				 while ((xnew<9) || (ynew >= 1)) {
					 if ((xnew == 8) || (ynew == 1)) break;
					 xnew = xnew + 1;
					 ynew = ynew - 1;

					 if (Chess_Board[xnew, ynew] != "Q") Chess_Board[xnew, ynew] = "q";
					 if ((xnew == 8) || (ynew == 1)) break;
				 }
				 return 0;
			 }

	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void chessBoard_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	
	private: System::Void exit_Click(System::Object^  sender, System::EventArgs^  e) {
		// Save only if i havent saved 
		if (!haveISaved) {
			Saves();
		}
		this->Close();
	}

	private: System::Void removeQueen_Click(System::Object^  sender, System::EventArgs^  e) {
		deleteAQueen();
	}


			 // Add good score function
			 void updateScoreGood() {
				 this->totalScore += 100;
				 this->scoreBox->Text = totalScore + "";
			 }

			 // Sub bad score but can't be negative function
			 void updateScoreBad() {
				 if (totalScore > 0) {
					 this->totalScore -= 50;
					 this->scoreBox->Text = totalScore + "";
				 }
			 }

			 // delete a queen function
			 void deleteAQueen() {
				 String ^ queenINPUT = textBox1->Text;
				 String ^ QUEENinput = queenINPUT->ToUpper();
				 Boolean queenNotFound = false;

				 // Only remove queens that are actually visible 
				 if (A1->Name == QUEENinput && A1->Visible == true)  A1->Visible = false;
				 else if (A2->Name == QUEENinput && A2->Visible == true)  A2->Visible = false;
				 else if (A3->Name == QUEENinput && A3->Visible == true)  A3->Visible = false;
				 else if (A4->Name == QUEENinput && A4->Visible == true)  A4->Visible = false;
				 else if (A5->Name == QUEENinput && A5->Visible == true)  A5->Visible = false;
				 else if (A6->Name == QUEENinput && A6->Visible == true)  A6->Visible = false;
				 else if (A7->Name == QUEENinput && A7->Visible == true)  A7->Visible = false;
				 else if (A8->Name == QUEENinput && A8->Visible == true)  A8->Visible = false;
				 else if (B1->Name == QUEENinput && B1->Visible == true)  B1->Visible = false;
				 else if (B2->Name == QUEENinput && B2->Visible == true)  B2->Visible = false;
				 else if (B3->Name == QUEENinput && B3->Visible == true)  B3->Visible = false;
				 else if (B4->Name == QUEENinput && B4->Visible == true)  B4->Visible = false;
				 else if (B5->Name == QUEENinput && B5->Visible == true)  B5->Visible = false;
				 else if (B6->Name == QUEENinput && B6->Visible == true)  B6->Visible = false;
				 else if (B7->Name == QUEENinput && B7->Visible == true)  B7->Visible = false;
				 else if (B8->Name == QUEENinput && B8->Visible == true)  B8->Visible = false;
				 else if (C1->Name == QUEENinput && C1->Visible == true)  C1->Visible = false;
				 else if (C2->Name == QUEENinput && C2->Visible == true)  C2->Visible = false;
				 else if (C3->Name == QUEENinput && C3->Visible == true)  C3->Visible = false;
				 else if (C4->Name == QUEENinput && C4->Visible == true)  C4->Visible = false;
				 else if (C5->Name == QUEENinput && C5->Visible == true)  C5->Visible = false;
				 else if (C6->Name == QUEENinput && C6->Visible == true)  C6->Visible = false;
				 else if (C7->Name == QUEENinput && C7->Visible == true)  C7->Visible = false;
				 else if (C8->Name == QUEENinput && C8->Visible == true)  C8->Visible = false;
				 else if (D1->Name == QUEENinput && D1->Visible == true)  D1->Visible = false;
				 else if (D2->Name == QUEENinput && D2->Visible == true)  D2->Visible = false;
				 else if (D3->Name == QUEENinput && D3->Visible == true)  D3->Visible = false;
				 else if (D4->Name == QUEENinput && D4->Visible == true)  D4->Visible = false;
				 else if (D5->Name == QUEENinput && D5->Visible == true)  D5->Visible = false;
				 else if (D6->Name == QUEENinput && D6->Visible == true)  D6->Visible = false;
				 else if (D7->Name == QUEENinput && D7->Visible == true)  D7->Visible = false;
				 else if (D8->Name == QUEENinput && D8->Visible == true)  D8->Visible = false;
				 else if (E1->Name == QUEENinput && E1->Visible == true)  E1->Visible = false;
				 else if (E2->Name == QUEENinput && E2->Visible == true)  E2->Visible = false;
				 else if (E3->Name == QUEENinput && E3->Visible == true)  E3->Visible = false;
				 else if (E4->Name == QUEENinput && E4->Visible == true)  E4->Visible = false;
				 else if (E5->Name == QUEENinput && E5->Visible == true)  E5->Visible = false;
				 else if (E6->Name == QUEENinput && E6->Visible == true)  E6->Visible = false;
				 else if (E7->Name == QUEENinput && E7->Visible == true)  E7->Visible = false;
				 else if (E8->Name == QUEENinput && E8->Visible == true)  E8->Visible = false;
				 else if (F1->Name == QUEENinput && F1->Visible == true)  F1->Visible = false;
				 else if (F2->Name == QUEENinput && F2->Visible == true)  F2->Visible = false;
				 else if (F3->Name == QUEENinput && F3->Visible == true)  F3->Visible = false;
				 else if (F4->Name == QUEENinput && F4->Visible == true)  F4->Visible = false;
				 else if (F5->Name == QUEENinput && F5->Visible == true)  F5->Visible = false;
				 else if (F6->Name == QUEENinput && F6->Visible == true)  F6->Visible = false;
				 else if (F7->Name == QUEENinput && F7->Visible == true)  F7->Visible = false;
				 else if (F8->Name == QUEENinput && F8->Visible == true)  F8->Visible = false;
				 else if (G1->Name == QUEENinput && G1->Visible == true)  G1->Visible = false;
				 else if (G2->Name == QUEENinput && G2->Visible == true)  G2->Visible = false;
				 else if (G3->Name == QUEENinput && G3->Visible == true)  G3->Visible = false;
				 else if (G4->Name == QUEENinput && G4->Visible == true)  G4->Visible = false;
				 else if (G5->Name == QUEENinput && G5->Visible == true)  G5->Visible = false;
				 else if (G6->Name == QUEENinput && G6->Visible == true)  G6->Visible = false;
				 else if (G7->Name == QUEENinput && G7->Visible == true)  G7->Visible = false;
				 else if (G8->Name == QUEENinput && G8->Visible == true)  G8->Visible = false;
				 else if (H1->Name == QUEENinput && H1->Visible == true)  H1->Visible = false;
				 else if (H2->Name == QUEENinput && H2->Visible == true)  H2->Visible = false;
				 else if (H3->Name == QUEENinput && H3->Visible == true)  H3->Visible = false;
				 else if (H4->Name == QUEENinput && H4->Visible == true)  H4->Visible = false;
				 else if (H5->Name == QUEENinput && H5->Visible == true)  H5->Visible = false;
				 else if (H6->Name == QUEENinput && H6->Visible == true)  H6->Visible = false;
				 else if (H7->Name == QUEENinput && H7->Visible == true)  H7->Visible = false;
				 else if (H8->Name == QUEENinput && H8->Visible == true)  H8->Visible = false;
				 else {
					 MessageBox::Show("INPUT ACCEPTIBLE RANGE is  A1....H8 OR NO QUEEN IN THAT SPOT");
					 queenNotFound = true;
				 };
				 if (!queenNotFound) {
					 for (int i = 0; i < 8; i++) {
						 if (QUEENinput == TestQueen[i]) {
							 numberOfQueens -= 1;
							 // If they remove a good queen subtrace 100
							 updateScoreBad();
							 updateScoreBad();
						 }
					 }
					 // If the remove a bad queen only 50
					updateScoreBad();
				 }
			 }


			 // Save the state of the game function
			 void Saves() {
				 // Stop the timer
				 end = clock();

				 // Get the current date
				 std::time_t rawtime;
				 std::tm* timeinfo;
				 char buffer[80];
				 std::time(&rawtime);

				 // Convert current date to string with formating
				 timeinfo = std::localtime(&rawtime);
				 std::strftime(buffer, 80, "%Y/%m/%d", timeinfo);
				 String^ TestDate = gcnew String(buffer);


				 // Convert timer into seconds
				 double diff = double(end - start) / CLOCKS_PER_SEC;

				 // The teacher said to start the timer when a queen is placed unsure of wether to follow the pdf or teacher so i followed what he said in class
				 if (diff < 0) {
					 diff = 0;
				 }

				 // Convert into time format #:##
				 time_t runTime = System::Convert::ToInt64(diff);
				 // Get minutes
				 time_t minutes = runTime / 60;
				 String ^timer;

				 // Subtrace the minutes from the runtime 
				 runTime -= (minutes * 60);

				 // Include 0 before ie 1:2 -> 1:02 if less then or equal to 9 
				 if (runTime <= 9) {
					 timer = minutes + ":" + "0" + runTime;
				 }
				 else {
					 // else return normal format
					 timer = minutes + ":" + runTime;
				 }

				 // Create the new form to show the time and other stats
				 hasanajMain^ form2 = gcnew hasanajMain();
				 if (mistakes == 0)
					 form2->time->Text = "Your score is " + totalScore + " with no penelties and time is " + timer + " mintue(s)";
				 else
					 form2->time->Text = "Your score is " + totalScore + " with " + mistakes + " penelties" + " and time is " + timer + " mintue(s)";


				 // Show the form so they can enter the name
				 form2->ShowDialog();
				 // Get the user name entered
				 userName = form2->nameInut->Text;

				
				 
				 // Create a new file
				 String ^fileName = "leaderboard.txt";
				 StreamReader^ sr = gcnew StreamReader(fileName);
				 array<String ^, 1>^ Top10Scores = gcnew array<String ^, 1>(10);
				 int locationOfScore;
				 String ^newScore;
				 int realScore;
				 // Used for swapping values 
				 String ^Temp;
				 String ^Temp2;
				 int count = 0;


				 // Read the top scores into the array
				 while (count <= 9) {
					 Top10Scores[count] = sr->ReadLine();
					 count++;
				 }
				 // Reset count 
				 count = 0;

				 // Go through the array and update the scores
				 while (count <= 9) {

					 // The way the file is set up is to using tabs do not chance the file format
					 // ignore 4 tabs to get the score
					 locationOfScore = Top10Scores[count]->IndexOf("\t", 0);
					 locationOfScore = Top10Scores[count]->IndexOf("\t", locationOfScore + 1);
					 locationOfScore = Top10Scores[count]->IndexOf("\t", locationOfScore + 1);
					 locationOfScore = Top10Scores[count]->IndexOf("\t", locationOfScore + 1);
					// only get the score and save it to newScore
					 newScore = Top10Scores[count]->Substring(locationOfScore + 1);

					 // if its == to score that means its a default value so it can replace it
					 if (newScore == "score") {
						 Temp = Top10Scores[count];
						 Top10Scores[count] = userName + "\t" + TestDate + "\t" + numberOfQueens + "\t" + timer + "\t" + totalScore;
						 // Ive update the score if ive made it here no need to loop anymore
						 count = 10;
					 }
					 else {
						 // Convert the score we've recieved to an Int 
						 realScore = System::Convert::ToInt16(newScore);
						 // If the new score is greater then the current ones on the leader update
						 if (realScore < totalScore) {
							 // Save the old score
							 Temp = Top10Scores[count];
							 Top10Scores[count] = userName + "\t" + TestDate + "\t" + numberOfQueens + "\t" + timer + "\t" + totalScore;
							 // Shift all the scores under the new one down stop at line 10
							 for (int i = count + 1; i <= 8; i++) {
								 Temp2 = Top10Scores[i];
								 Top10Scores[i] = Temp;
								 Temp = Temp2;
							 }
							 // Ive update the score if ive made it here no need to loop anymore
							 count = 10;
						 }

					 }
					 count++;
				 }
				 // close stream reader to open the writer
				 sr->Close();
				 // Reset count for use on stream writer
				 count = 0;
				 // Stream write all 10 scores to the new file;
				 StreamWriter^ sw = gcnew StreamWriter(fileName);
				 while (count <= 9) {
					 sw->WriteLine(Top10Scores[count]);
					 count++;
				 }

				 // Close stream writer
				 sw->Close();
			 }
};
	

	

	

}
