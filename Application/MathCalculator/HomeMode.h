#include "StandardMode.h"
#include "ScientificMode.h"
#include "DescriptionMode.h"

#pragma once
namespace MathCalculator {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HomeMode
	/// </summary>
	public ref class HomeMode : public System::Windows::Forms::Form
	{
	public:
		HomeMode(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HomeMode() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ picture;
	private: System::Windows::Forms::Button^ standardMode;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Button^ scientificMode;
	private: System::Windows::Forms::Button^ descriptionMode;
	private: System::Windows::Forms::Button^ exit;

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
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomeMode::typeid));
			this->picture = (gcnew System::Windows::Forms::PictureBox());
			this->standardMode = (gcnew System::Windows::Forms::Button());
			this->title = (gcnew System::Windows::Forms::Label());
			this->scientificMode = (gcnew System::Windows::Forms::Button());
			this->descriptionMode = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->BeginInit();
			this->SuspendLayout();
			// 
			// picture
			// 
			this->picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture.Image")));
			this->picture->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture.InitialImage")));
			this->picture->Location = System::Drawing::Point(14, 14);
			this->picture->Name = L"picture";
			this->picture->Size = System::Drawing::Size(80, 80);
			this->picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picture->TabIndex = 0;
			this->picture->TabStop = false;
			// 
			// standardMode
			// 
			this->standardMode->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->standardMode->Location = System::Drawing::Point(59, 113);
			this->standardMode->Name = L"standardMode";
			this->standardMode->Size = System::Drawing::Size(192, 44);
			this->standardMode->TabIndex = 1;
			this->standardMode->Text = L"Standard Mode";
			this->standardMode->UseVisualStyleBackColor = true;
			this->standardMode->Click += gcnew System::EventHandler(this, &HomeMode::standardMode_Click);
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->title->Location = System::Drawing::Point(100, 39);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(203, 37);
			this->title->TabIndex = 4;
			this->title->Text = L"Math Calculator";
			// 
			// scientificMode
			// 
			this->scientificMode->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->scientificMode->Location = System::Drawing::Point(59, 173);
			this->scientificMode->Name = L"scientificMode";
			this->scientificMode->Size = System::Drawing::Size(192, 44);
			this->scientificMode->TabIndex = 5;
			this->scientificMode->Text = L"Scientific Mode";
			this->scientificMode->UseVisualStyleBackColor = true;
			this->scientificMode->Click += gcnew System::EventHandler(this, &HomeMode::scientificMode_Click);
			// 
			// descriptionMode
			// 
			this->descriptionMode->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->descriptionMode->Location = System::Drawing::Point(59, 233);
			this->descriptionMode->Name = L"descriptionMode";
			this->descriptionMode->Size = System::Drawing::Size(192, 44);
			this->descriptionMode->TabIndex = 6;
			this->descriptionMode->Text = L"Description Mode";
			this->descriptionMode->UseVisualStyleBackColor = true;
			this->descriptionMode->Click += gcnew System::EventHandler(this, &HomeMode::descriptionMode_Click);
			// 
			// exit
			// 
			this->exit->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->exit->Location = System::Drawing::Point(59, 294);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(192, 44);
			this->exit->TabIndex = 7;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &HomeMode::exit_Click);
			// 
			// HomeMode
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(312, 357);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->descriptionMode);
			this->Controls->Add(this->scientificMode);
			this->Controls->Add(this->title);
			this->Controls->Add(this->standardMode);
			this->Controls->Add(this->picture);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"HomeMode";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void standardMode_Click(System::Object^ sender, System::EventArgs^ e) {
			StandardMode^ sm = gcnew StandardMode;
			this->Hide();
			sm->ShowDialog();
			this->Show();
		}

		private: System::Void scientificMode_Click(System::Object^ sender, System::EventArgs^ e) {
			ScientificMode^ sm = gcnew ScientificMode;
			this->Hide();
			sm->ShowDialog();
			this->Show();
		}

		private: System::Void descriptionMode_Click(System::Object^ sender, System::EventArgs^ e) {
			DescriptionMode^ dm = gcnew DescriptionMode;
			this->Hide();
			dm->ShowDialog();
			this->Show();
		}

		private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
			Application::Exit();
		}
};
}
