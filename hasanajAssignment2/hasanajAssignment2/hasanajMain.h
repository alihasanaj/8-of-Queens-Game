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

#include <sstream>
#pragma once

namespace hasanajAssignment2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for hasanajMain
	/// </summary>
	public ref class hasanajMain : public System::Windows::Forms::Form
	{
	public:
		hasanajMain(void)
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
		~hasanajMain()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^  time;
	private: System::Windows::Forms::Label^  Namee;
	public:

	public:
	public: System::Windows::Forms::TextBox^  nameInut;
	public: System::Windows::Forms::Button^  okButton;
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
			this->time = (gcnew System::Windows::Forms::TextBox());
			this->Namee = (gcnew System::Windows::Forms::Label());
			this->nameInut = (gcnew System::Windows::Forms::TextBox());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// time
			// 
			this->time->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->time->Enabled = false;
			this->time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->time->Location = System::Drawing::Point(22, 12);
			this->time->Multiline = true;
			this->time->Name = L"time";
			this->time->Size = System::Drawing::Size(304, 47);
			this->time->TabIndex = 0;
			// 
			// Namee
			// 
			this->Namee->AutoSize = true;
			this->Namee->Location = System::Drawing::Point(73, 79);
			this->Namee->Name = L"Namee";
			this->Namee->Size = System::Drawing::Size(60, 13);
			this->Namee->TabIndex = 2;
			this->Namee->Text = L"Your Name";
			// 
			// nameInut
			// 
			this->nameInut->Location = System::Drawing::Point(139, 76);
			this->nameInut->Name = L"nameInut";
			this->nameInut->Size = System::Drawing::Size(100, 20);
			this->nameInut->TabIndex = 3;
			// 
			// okButton
			// 
			this->okButton->Location = System::Drawing::Point(241, 112);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(75, 23);
			this->okButton->TabIndex = 4;
			this->okButton->Text = L"OK";
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &hasanajMain::okButton_Click);
			// 
			// hasanajMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 147);
			this->Controls->Add(this->okButton);
			this->Controls->Add(this->nameInut);
			this->Controls->Add(this->Namee);
			this->Controls->Add(this->time);
			this->Name = L"hasanajMain";
			this->ShowIcon = false;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	// Close form on ok
	public: System::Void okButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

};
}
