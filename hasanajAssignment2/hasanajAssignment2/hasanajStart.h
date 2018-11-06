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

#include "chessBoard.h"
#include "leaderBoard.h"
#pragma once

namespace hasanajAssignment2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for hasanajStart
	/// </summary>
	public ref class hasanajStart : public System::Windows::Forms::Form
	{
	public:
		hasanajStart(void)
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
		~hasanajStart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  QueenGame;
	private: System::Windows::Forms::Button^  leaderBoardd;

	private: System::Windows::Forms::Button^  exit;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(hasanajStart::typeid));
			this->QueenGame = (gcnew System::Windows::Forms::Button());
			this->leaderBoardd = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// QueenGame
			// 
			this->QueenGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QueenGame->Location = System::Drawing::Point(79, 38);
			this->QueenGame->Name = L"QueenGame";
			this->QueenGame->Size = System::Drawing::Size(183, 55);
			this->QueenGame->TabIndex = 0;
			this->QueenGame->Text = L" 8-Queen Game";
			this->QueenGame->UseVisualStyleBackColor = true;
			this->QueenGame->Click += gcnew System::EventHandler(this, &hasanajStart::QueenGame_Click);
			// 
			// leaderBoardd
			// 
			this->leaderBoardd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leaderBoardd->Location = System::Drawing::Point(79, 99);
			this->leaderBoardd->Name = L"leaderBoardd";
			this->leaderBoardd->Size = System::Drawing::Size(183, 57);
			this->leaderBoardd->TabIndex = 1;
			this->leaderBoardd->Text = L"Leader Board";
			this->leaderBoardd->UseVisualStyleBackColor = true;
			this->leaderBoardd->Click += gcnew System::EventHandler(this, &hasanajStart::leaderBoard_Click);
			// 
			// exit
			// 
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit->Location = System::Drawing::Point(79, 201);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(183, 56);
			this->exit->TabIndex = 2;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &hasanajStart::button3_Click);
			// 
			// hasanajStart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(338, 288);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->leaderBoardd);
			this->Controls->Add(this->QueenGame);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"hasanajStart";
			this->Text = L"hasanajStart";
			this->ResumeLayout(false);

		}
#pragma endregion
	// Exit button
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	// Run the chessboard
	private: System::Void QueenGame_Click(System::Object^  sender, System::EventArgs^  e) {
		chessBoard^ form = gcnew chessBoard();
		form->ShowDialog();
	}
	
	// Run the leaderboard
	private: System::Void leaderBoard_Click(System::Object^  sender, System::EventArgs^  e) {
		leaderBoard^ form2 = gcnew leaderBoard;
		form2->ShowDialog();
	}

};
}
