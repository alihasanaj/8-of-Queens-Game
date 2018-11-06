/*
Title: Assignmet 2
Author: Ali Hasanaj
Last Edit: 2018-02-28
Description:  8 Queen Chess Game GUI application
Note: I was unsure of some thinks like when we should save the score so i saved if they hit new
game or exit or if they got 8 queens in a row also I used labels for the 10 top position tab because its eaiser and the
numbers wont be change the users scores will be

* If you get all 8 queens you have to  manually exit after entering your name *
*/

#include <fstream>
#include <string>
#include <iostream>
#include <cstdio>
#include <ctime>
#include <time.h>
#include "hasanajMain.h"
#pragma once

namespace hasanajAssignment2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for leaderBoard
	/// </summary>
	public ref class leaderBoard : public System::Windows::Forms::Form
	{
	public:
		leaderBoard(void)
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
		~leaderBoard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  top10;
	private: System::Windows::Forms::TextBox^  scores;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(leaderBoard::typeid));
			this->top10 = (gcnew System::Windows::Forms::Label());
			this->scores = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// top10
			// 
			this->top10->AutoSize = true;
			this->top10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->top10->Location = System::Drawing::Point(212, 9);
			this->top10->Name = L"top10";
			this->top10->Size = System::Drawing::Size(170, 24);
			this->top10->TabIndex = 0;
			this->top10->Text = L"TOP 10 SCORES";
			// 
			// scores
			// 
			this->scores->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->scores->Cursor = System::Windows::Forms::Cursors::Default;
			this->scores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scores->ForeColor = System::Drawing::SystemColors::WindowText;
			this->scores->Location = System::Drawing::Point(58, 81);
			this->scores->Multiline = true;
			this->scores->Name = L"scores";
			this->scores->ReadOnly = true;
			this->scores->Size = System::Drawing::Size(546, 358);
			this->scores->TabIndex = 1;
			this->scores->TabStop = false;
			this->scores->Text = L"Here\r\n\r\nHere\r\n\r\nHere\r\n\r\nHere\r\n\r\nHere\r\n\r\nHere\r\n\r\nHere\r\n\r\nHere\r\n\r\nHere\r\n\r\nHere\r\n";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(36, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"1.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(36, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"2.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(36, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"3.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(36, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"4.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(36, 210);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"5.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(36, 239);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"6.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(36, 276);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 16);
			this->label7->TabIndex = 8;
			this->label7->Text = L"7.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(36, 302);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 16);
			this->label8->TabIndex = 9;
			this->label8->Text = L"8.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(36, 339);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 16);
			this->label9->TabIndex = 10;
			this->label9->Text = L"9.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(30, 370);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(25, 16);
			this->label10->TabIndex = 11;
			this->label10->Text = L"10.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(30, 49);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(35, 16);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Pos.";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(113, 49);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(45, 16);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Name";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(193, 49);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 16);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Date";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(262, 49);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(79, 16);
			this->label14->TabIndex = 15;
			this->label14->Text = L"# of Queens";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(365, 49);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(39, 16);
			this->label15->TabIndex = 16;
			this->label15->Text = L"Time";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(436, 49);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(44, 16);
			this->label16->TabIndex = 17;
			this->label16->Text = L"Score";
			// 
			// leaderBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 461);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->scores);
			this->Controls->Add(this->top10);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"leaderBoard";
			this->Text = L"leaderBoard";
			this->Load += gcnew System::EventHandler(this, &leaderBoard::leaderBoard_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void leaderBoard_Load(System::Object^  sender, System::EventArgs^  e) {
		// Read the leader file
		StreamReader^ sr = gcnew StreamReader("leaderboard.txt");
		// Number of lines to read
		int count = 0;
		// The final text to be outputed
		String ^Final;
		while (count <= 9) {
			// Read a line in and format it
			Final += "\t";
			Final += sr->ReadLine();
			Final += "\r\n";
			Final += "\r\n";
			count++;
		}
		// Put it in the text box
		scores->Text = Final;
		// Text box doesnt need to be highlighted on start because you cant edit the text
		scores->SelectionStart = 0;
	}
};
}
