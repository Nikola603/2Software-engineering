#pragma once

namespace MathCalculator {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DescriptionMode
	/// </summary>
	public ref class DescriptionMode : public System::Windows::Forms::Form
	{
	public:
		DescriptionMode(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DescriptionMode() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ok;
	private: System::Windows::Forms::Label^ contact;
	private: System::Windows::Forms::Label^ copyright;
	private: System::Windows::Forms::Label^ version;
	private: System::Windows::Forms::Label^ system;
	private: System::Windows::Forms::PictureBox^ picture;
	private: System::Windows::Forms::TextBox^ email;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DescriptionMode::typeid));
			this->ok = (gcnew System::Windows::Forms::Button());
			this->contact = (gcnew System::Windows::Forms::Label());
			this->copyright = (gcnew System::Windows::Forms::Label());
			this->version = (gcnew System::Windows::Forms::Label());
			this->system = (gcnew System::Windows::Forms::Label());
			this->picture = (gcnew System::Windows::Forms::PictureBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->BeginInit();
			this->SuspendLayout();
			// 
			// ok
			// 
			this->ok->Location = System::Drawing::Point(439, 232);
			this->ok->Name = L"ok";
			this->ok->Size = System::Drawing::Size(83, 33);
			this->ok->TabIndex = 13;
			this->ok->Text = L"OK";
			this->ok->UseVisualStyleBackColor = true;
			this->ok->Click += gcnew System::EventHandler(this, &DescriptionMode::okClick);
			// 
			// contact
			// 
			this->contact->AutoSize = true;
			this->contact->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->contact->Location = System::Drawing::Point(107, 121);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(75, 20);
			this->contact->TabIndex = 12;
			this->contact->Text = L"Contact: ";
			// 
			// copyright
			// 
			this->copyright->AutoSize = true;
			this->copyright->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->copyright->Location = System::Drawing::Point(107, 91);
			this->copyright->Name = L"copyright";
			this->copyright->Size = System::Drawing::Size(421, 20);
			this->copyright->TabIndex = 11;
			this->copyright->Text = L"Copyright ©  2020 Nikola Mitrevski. All rights reserved.";
			// 
			// version
			// 
			this->version->AutoSize = true;
			this->version->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->version->Location = System::Drawing::Point(107, 62);
			this->version->Name = L"version";
			this->version->Size = System::Drawing::Size(92, 20);
			this->version->TabIndex = 10;
			this->version->Text = L"Version 1.0";
			// 
			// system
			// 
			this->system->AutoSize = true;
			this->system->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->system->Location = System::Drawing::Point(107, 33);
			this->system->Name = L"system";
			this->system->Size = System::Drawing::Size(147, 20);
			this->system->TabIndex = 9;
			this->system->Text = L"Microsoft Windows";
			// 
			// picture
			// 
			this->picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture.Image")));
			this->picture->Location = System::Drawing::Point(12, 46);
			this->picture->Name = L"picture";
			this->picture->Size = System::Drawing::Size(80, 80);
			this->picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picture->TabIndex = 8;
			this->picture->TabStop = false;
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::SystemColors::Control;
			this->email->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->email->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->email->Location = System::Drawing::Point(188, 118);
			this->email->Name = L"email";
			this->email->ReadOnly = true;
			this->email->Size = System::Drawing::Size(250, 27);
			this->email->TabIndex = 7;
			this->email->Text = L"nikola.mitrevski1998@gmail.com";
			this->email->WordWrap = false;
			// 
			// DescriptionMode
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(537, 299);
			this->Controls->Add(this->ok);
			this->Controls->Add(this->contact);
			this->Controls->Add(this->copyright);
			this->Controls->Add(this->version);
			this->Controls->Add(this->system);
			this->Controls->Add(this->picture);
			this->Controls->Add(this->email);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"DescriptionMode";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"AboutCalculator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
		private: System::Void okClick(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
};
}
