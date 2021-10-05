#include "StandardMode.h"

#pragma once

namespace MathCalculator {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ScientificMode
	/// </summary>
	public ref class ScientificMode : public StandardMode
	{
		
	public:
		ScientificMode(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ScientificMode() {
			if (components) {
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btnReciprocity;
	private: System::Windows::Forms::Button^ btnCub;
	private: System::Windows::Forms::Button^ btnMod;
	private: System::Windows::Forms::Button^ btnOct;
	private: System::Windows::Forms::Button^ btnPercent;
	private: System::Windows::Forms::Button^ btnPow;
	private: System::Windows::Forms::Button^ btnTan;
	private: System::Windows::Forms::Button^ btnHex;
	private: System::Windows::Forms::Button^ btnLn;
	private: System::Windows::Forms::Button^ btnTanh;
	private: System::Windows::Forms::Button^ btnCos;
	private: System::Windows::Forms::Button^ btnBin;
	private: System::Windows::Forms::Button^ btnLog;
	private: System::Windows::Forms::Button^ btnCosh;
	private: System::Windows::Forms::Button^ btnSin;
	private: System::Windows::Forms::Button^ btnFactorial;
	private: System::Windows::Forms::Button^ btnSqrt;
	private: System::Windows::Forms::Button^ btnSinh;
	private: System::Windows::Forms::Button^ btnQuadrate;
	private: System::Windows::Forms::Button^ btnPI;

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
			this->btnReciprocity = (gcnew System::Windows::Forms::Button());
			this->btnCub = (gcnew System::Windows::Forms::Button());
			this->btnMod = (gcnew System::Windows::Forms::Button());
			this->btnOct = (gcnew System::Windows::Forms::Button());
			this->btnPercent = (gcnew System::Windows::Forms::Button());
			this->btnPow = (gcnew System::Windows::Forms::Button());
			this->btnTan = (gcnew System::Windows::Forms::Button());
			this->btnHex = (gcnew System::Windows::Forms::Button());
			this->btnLn = (gcnew System::Windows::Forms::Button());
			this->btnTanh = (gcnew System::Windows::Forms::Button());
			this->btnCos = (gcnew System::Windows::Forms::Button());
			this->btnBin = (gcnew System::Windows::Forms::Button());
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->btnCosh = (gcnew System::Windows::Forms::Button());
			this->btnSin = (gcnew System::Windows::Forms::Button());
			this->btnFactorial = (gcnew System::Windows::Forms::Button());
			this->btnSqrt = (gcnew System::Windows::Forms::Button());
			this->btnSinh = (gcnew System::Windows::Forms::Button());
			this->btnQuadrate = (gcnew System::Windows::Forms::Button());
			this->btnPI = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnReciprocity
			// 
			this->btnReciprocity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnReciprocity->Location = System::Drawing::Point(536, 374);
			this->btnReciprocity->Name = L"btnReciprocity";
			this->btnReciprocity->Size = System::Drawing::Size(67, 63);
			this->btnReciprocity->TabIndex = 73;
			this->btnReciprocity->Text = L"1/x";
			this->btnReciprocity->UseVisualStyleBackColor = true;
			this->btnReciprocity->Click += gcnew System::EventHandler(this, &ScientificMode::btnReciprocity_Click);
			// 
			// btnCub
			// 
			this->btnCub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnCub->Location = System::Drawing::Point(536, 168);
			this->btnCub->Name = L"btnCub";
			this->btnCub->Size = System::Drawing::Size(67, 63);
			this->btnCub->TabIndex = 72;
			this->btnCub->Text = L"x^3";
			this->btnCub->UseVisualStyleBackColor = true;
			this->btnCub->Click += gcnew System::EventHandler(this, &ScientificMode::btnCub_Click);
			// 
			// btnMod
			// 
			this->btnMod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnMod->Location = System::Drawing::Point(389, 375);
			this->btnMod->Name = L"btnMod";
			this->btnMod->Size = System::Drawing::Size(67, 63);
			this->btnMod->TabIndex = 90;
			this->btnMod->Text = L"Mod";
			this->btnMod->UseVisualStyleBackColor = true;
			this->btnMod->Click += gcnew System::EventHandler(this, &ScientificMode::btnAritmeticOp_Click);
			// 
			// btnOct
			// 
			this->btnOct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnOct->Location = System::Drawing::Point(462, 375);
			this->btnOct->Name = L"btnOct";
			this->btnOct->Size = System::Drawing::Size(67, 63);
			this->btnOct->TabIndex = 89;
			this->btnOct->Text = L"Oct";
			this->btnOct->UseVisualStyleBackColor = true;
			this->btnOct->Click += gcnew System::EventHandler(this, &ScientificMode::btnOct_Click);
			// 
			// btnPercent
			// 
			this->btnPercent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnPercent->Location = System::Drawing::Point(315, 375);
			this->btnPercent->Name = L"btnPercent";
			this->btnPercent->Size = System::Drawing::Size(67, 63);
			this->btnPercent->TabIndex = 88;
			this->btnPercent->Text = L"%";
			this->btnPercent->UseVisualStyleBackColor = true;
			this->btnPercent->Click += gcnew System::EventHandler(this, &ScientificMode::btnPercent_Click);
			// 
			// btnPow
			// 
			this->btnPow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnPow->Location = System::Drawing::Point(536, 237);
			this->btnPow->Name = L"btnPow";
			this->btnPow->Size = System::Drawing::Size(67, 63);
			this->btnPow->TabIndex = 87;
			this->btnPow->Text = L"Pow";
			this->btnPow->UseVisualStyleBackColor = true;
			this->btnPow->Click += gcnew System::EventHandler(this, &ScientificMode::btnAritmeticOp_Click);
			// 
			// btnTan
			// 
			this->btnTan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnTan->Location = System::Drawing::Point(388, 306);
			this->btnTan->Name = L"btnTan";
			this->btnTan->Size = System::Drawing::Size(67, 63);
			this->btnTan->TabIndex = 86;
			this->btnTan->Text = L"Tan";
			this->btnTan->UseVisualStyleBackColor = true;
			this->btnTan->Click += gcnew System::EventHandler(this, &ScientificMode::btnTan_Click);
			// 
			// btnHex
			// 
			this->btnHex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnHex->Location = System::Drawing::Point(461, 306);
			this->btnHex->Name = L"btnHex";
			this->btnHex->Size = System::Drawing::Size(67, 63);
			this->btnHex->TabIndex = 85;
			this->btnHex->Text = L"Hex";
			this->btnHex->UseVisualStyleBackColor = true;
			this->btnHex->Click += gcnew System::EventHandler(this, &ScientificMode::btnHex_Click);
			// 
			// btnLn
			// 
			this->btnLn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnLn->Location = System::Drawing::Point(462, 99);
			this->btnLn->Name = L"btnLn";
			this->btnLn->Size = System::Drawing::Size(67, 63);
			this->btnLn->TabIndex = 84;
			this->btnLn->Text = L"ln";
			this->btnLn->UseVisualStyleBackColor = true;
			this->btnLn->Click += gcnew System::EventHandler(this, &ScientificMode::btnLn_Click);
			// 
			// btnTanh
			// 
			this->btnTanh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnTanh->Location = System::Drawing::Point(315, 306);
			this->btnTanh->Name = L"btnTanh";
			this->btnTanh->Size = System::Drawing::Size(67, 63);
			this->btnTanh->TabIndex = 83;
			this->btnTanh->Text = L"Tanh";
			this->btnTanh->UseVisualStyleBackColor = true;
			this->btnTanh->Click += gcnew System::EventHandler(this, &ScientificMode::btnTanh_Click);
			// 
			// btnCos
			// 
			this->btnCos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnCos->Location = System::Drawing::Point(388, 237);
			this->btnCos->Name = L"btnCos";
			this->btnCos->Size = System::Drawing::Size(67, 63);
			this->btnCos->TabIndex = 82;
			this->btnCos->Text = L"Cos";
			this->btnCos->UseVisualStyleBackColor = true;
			this->btnCos->Click += gcnew System::EventHandler(this, &ScientificMode::btnCos_Click);
			// 
			// btnBin
			// 
			this->btnBin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnBin->Location = System::Drawing::Point(461, 237);
			this->btnBin->Name = L"btnBin";
			this->btnBin->Size = System::Drawing::Size(67, 63);
			this->btnBin->TabIndex = 81;
			this->btnBin->Text = L"Bin";
			this->btnBin->UseVisualStyleBackColor = true;
			this->btnBin->Click += gcnew System::EventHandler(this, &ScientificMode::btnBin_Click);
			// 
			// btnLog
			// 
			this->btnLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnLog->Location = System::Drawing::Point(389, 99);
			this->btnLog->Name = L"btnLog";
			this->btnLog->Size = System::Drawing::Size(67, 63);
			this->btnLog->TabIndex = 80;
			this->btnLog->Text = L"Log";
			this->btnLog->UseVisualStyleBackColor = true;
			this->btnLog->Click += gcnew System::EventHandler(this, &ScientificMode::btnLog_Click);
			// 
			// btnCosh
			// 
			this->btnCosh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnCosh->Location = System::Drawing::Point(315, 237);
			this->btnCosh->Name = L"btnCosh";
			this->btnCosh->Size = System::Drawing::Size(67, 63);
			this->btnCosh->TabIndex = 79;
			this->btnCosh->Text = L"Cosh";
			this->btnCosh->UseVisualStyleBackColor = true;
			this->btnCosh->Click += gcnew System::EventHandler(this, &ScientificMode::btnCosh_Click);
			// 
			// btnSin
			// 
			this->btnSin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSin->Location = System::Drawing::Point(389, 168);
			this->btnSin->Name = L"btnSin";
			this->btnSin->Size = System::Drawing::Size(67, 63);
			this->btnSin->TabIndex = 78;
			this->btnSin->Text = L"Sin";
			this->btnSin->UseVisualStyleBackColor = true;
			this->btnSin->Click += gcnew System::EventHandler(this, &ScientificMode::btnSin_Click);
			// 
			// btnFactorial
			// 
			this->btnFactorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnFactorial->Location = System::Drawing::Point(536, 307);
			this->btnFactorial->Name = L"btnFactorial";
			this->btnFactorial->Size = System::Drawing::Size(67, 63);
			this->btnFactorial->TabIndex = 77;
			this->btnFactorial->Text = L"x!";
			this->btnFactorial->UseVisualStyleBackColor = true;
			this->btnFactorial->Click += gcnew System::EventHandler(this, &ScientificMode::btnFactorial_Click);
			// 
			// btnSqrt
			// 
			this->btnSqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSqrt->Location = System::Drawing::Point(462, 168);
			this->btnSqrt->Name = L"btnSqrt";
			this->btnSqrt->Size = System::Drawing::Size(67, 63);
			this->btnSqrt->TabIndex = 76;
			this->btnSqrt->Text = L"Sqrt";
			this->btnSqrt->UseVisualStyleBackColor = true;
			this->btnSqrt->Click += gcnew System::EventHandler(this, &ScientificMode::btnSqrt_Click);
			// 
			// btnSinh
			// 
			this->btnSinh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSinh->Location = System::Drawing::Point(315, 168);
			this->btnSinh->Name = L"btnSinh";
			this->btnSinh->Size = System::Drawing::Size(67, 63);
			this->btnSinh->TabIndex = 75;
			this->btnSinh->Text = L"Sinh";
			this->btnSinh->UseVisualStyleBackColor = true;
			this->btnSinh->Click += gcnew System::EventHandler(this, &ScientificMode::btnSinh_Click);
			// 
			// btnQuadrate
			// 
			this->btnQuadrate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnQuadrate->Location = System::Drawing::Point(535, 100);
			this->btnQuadrate->Name = L"btnQuadrate";
			this->btnQuadrate->Size = System::Drawing::Size(67, 63);
			this->btnQuadrate->TabIndex = 74;
			this->btnQuadrate->Text = L"x^2";
			this->btnQuadrate->UseVisualStyleBackColor = true;
			this->btnQuadrate->Click += gcnew System::EventHandler(this, &ScientificMode::btnQuadrate_Click);
			// 
			// btnPI
			// 
			this->btnPI->Font = (gcnew System::Drawing::Font(L"Centaur", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPI->Location = System::Drawing::Point(316, 99);
			this->btnPI->Name = L"btnPI";
			this->btnPI->Size = System::Drawing::Size(67, 63);
			this->btnPI->TabIndex = 71;
			this->btnPI->Text = L"π";
			this->btnPI->UseVisualStyleBackColor = true;
			this->btnPI->Click += gcnew System::EventHandler(this, &ScientificMode::btnPI_Click);
			// 
			// ScientificMode
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(666, 454);
			this->Controls->Add(this->btnReciprocity);
			this->Controls->Add(this->btnCub);
			this->Controls->Add(this->btnMod);
			this->Controls->Add(this->btnOct);
			this->Controls->Add(this->btnPercent);
			this->Controls->Add(this->btnPow);
			this->Controls->Add(this->btnTan);
			this->Controls->Add(this->btnHex);
			this->Controls->Add(this->btnLn);
			this->Controls->Add(this->btnTanh);
			this->Controls->Add(this->btnCos);
			this->Controls->Add(this->btnBin);
			this->Controls->Add(this->btnLog);
			this->Controls->Add(this->btnCosh);
			this->Controls->Add(this->btnSin);
			this->Controls->Add(this->btnFactorial);
			this->Controls->Add(this->btnSqrt);
			this->Controls->Add(this->btnSinh);
			this->Controls->Add(this->btnQuadrate);
			this->Controls->Add(this->btnPI);
			this->Name = L"ScientificMode";
			this->Text = L"ScientificMode";
			this->Load += gcnew System::EventHandler(this, &ScientificMode::scientificMode_Load);
			this->ResumeLayout(false);
		}
#pragma endregion
		private: System::Void scientificMode_Load(System::Object^ sender, System::EventArgs^ e) {
			this->Width = 633;
			this->Height = 485;
			historyList->Width = 593;
			display->Width = 593;
		}

		// Button PI
		private: System::Void btnPI_Click(System::Object^ sender, System::EventArgs^ e) {
			lblShow->Text = "PI";
			historyList->Items->Add("3.1415926535897932384626433832795");
			display->Text = ("3.1415926535897932384626433832795");
		}

		// Button Log
		private: System::Void btnLog_Click(System::Object^ sender, System::EventArgs^ e) {
			a = Double::Parse(display->Text);
			lblShow->Text = System::Convert::ToString("log10 " + "(" + (display->Text) + ")");
			historyList->Items->Add(lblShow->Text);
			a = Math::Log10(a);
			display->Text = System::Convert::ToString(a);
		}

		// Button ln
		private: System::Void btnLn_Click(System::Object^ sender, System::EventArgs^ e) {
			a = System::Math::Log(Convert::ToDouble(display->Text));
			lblShow->Text = System::Convert::ToString("ln " + "(" + (display->Text) + ")");
			historyList->Items->Add(lblShow->Text);
			display->Text = Convert::ToString(a);
		}

		// Button x^2
		private: System::Void btnQuadrate_Click(System::Object^ sender, System::EventArgs^ e) {
			lblShow->Text = display->Text + "^2";
			historyList->Items->Add(lblShow->Text);
			a = Convert::ToDouble(display->Text) * Convert::ToDouble(display->Text);
			display->Text = Convert::ToString(a);
		}

		// Button Sinh
		private: System::Void btnSinh_Click(System::Object^ sender, System::EventArgs^ e) {
			a = Double::Parse(display->Text);
			lblShow->Text = System::Convert::ToString("Sinh " + "(" + (display->Text) + ")");
			historyList->Items->Add(lblShow->Text);
			a = Math::Sinh(a);
			display->Text = System::Convert::ToString(a);
		}

		// Button Sin
		private: System::Void btnSin_Click(System::Object^ sender, System::EventArgs^ e) {
			a = Double::Parse(display->Text);
			lblShow->Text = System::Convert::ToString("Sinr " + "(" + (display->Text) + ")");
			historyList->Items->Add(lblShow->Text);
			a = Math::Sin(a);
			display->Text = System::Convert::ToString(a);
		}

		// Button Sqrt
		private: System::Void btnSqrt_Click(System::Object^ sender, System::EventArgs^ e) {
			a = Double::Parse(display->Text);
			lblShow->Text = System::Convert::ToString("Sqrt " + "(" + (display->Text) + ")");
			historyList->Items->Add(lblShow->Text);
			a = Math::Sqrt(a);
			display->Text = System::Convert::ToString(a);
		}

		// Button x^3
		private: System::Void btnCub_Click(System::Object^ sender, System::EventArgs^ e) {
			lblShow->Text = display->Text + "^3";
			historyList->Items->Add(lblShow->Text);
			a = Convert::ToDouble(display->Text) * Convert::ToDouble(display->Text) * Convert::ToDouble(display->Text);
			display->Text = Convert::ToString(a);
		}

		// Button Cosh
		private: System::Void btnCosh_Click(System::Object^ sender, System::EventArgs^ e) {
			a = Double::Parse(display->Text);
			lblShow->Text = System::Convert::ToString("Cosh " + "(" + (display->Text) + ")");
			historyList->Items->Add(lblShow->Text);
			a = Math::Cosh(a);
			display->Text = System::Convert::ToString(a);
		}

		// Button Cos
		private: System::Void btnCos_Click(System::Object^ sender, System::EventArgs^ e) {
			a = Double::Parse(display->Text);
			lblShow->Text = System::Convert::ToString("Cosr " + "(" + (display->Text) + ")");
			historyList->Items->Add(lblShow->Text);
			a = Math::Cos(a);
			display->Text = System::Convert::ToString(a);
		}

		// Button Bin
		private: System::Void btnBin_Click(System::Object^ sender, System::EventArgs^ e) {
			lblShow->Text = System::Convert::ToString("Bin " + "(" + (display->Text) + ")");
			historyList->Items->Add(lblShow->Text);
			int a = (int)(Double::Parse(display->Text));
			display->Text = System::Convert::ToString(a, 2);
		}

		// Button Tanh
		private: System::Void btnTanh_Click(System::Object^ sender, System::EventArgs^ e) {
			a = Double::Parse(display->Text);
			lblShow->Text = System::Convert::ToString("Tanh " + "(" + (display->Text) + ")");
			historyList->Items->Add(lblShow->Text);
			a = Math::Tanh(a);
			display->Text = System::Convert::ToString(a);
		}

		// Button Tan
		private: System::Void btnTan_Click(System::Object^ sender, System::EventArgs^ e) {
			a = Double::Parse(display->Text);
			lblShow->Text = System::Convert::ToString("Tanr " + "(" + (display->Text) + ")");
			historyList->Items->Add(lblShow->Text);
			a = Math::Tan(a);
			display->Text = System::Convert::ToString(a);
		}

		// Button Hex
		private: System::Void btnHex_Click(System::Object^ sender, System::EventArgs^ e) {
			lblShow->Text = System::Convert::ToString("Hex " + "(" + (display->Text) + ")");
			historyList->Items->Add(lblShow->Text);
			int a = (int)(Double::Parse(display->Text));
			display->Text = System::Convert::ToString(a, 16);
		}

		// Button x!
		private: System::Void btnFactorial_Click(System::Object^ sender, System::EventArgs^ e) {
			double fact = Double::Parse(display->Text);
			lblShow->Text = System::Convert::ToString(fact) + "!";
			historyList->Items->Add(System::Convert::ToString(fact) + "!");
			for (int i = fact - 1; i > 0; i--) {
				fact = fact * double(i);
			}
			display->Text = System::Convert::ToString(fact);
		}

		// Button %
		private: System::Void btnPercent_Click(System::Object^ sender, System::EventArgs^ e) {
			lblShow->Text = (display->Text) + "%";
			historyList->Items->Add(lblShow->Text);
			a = Convert::ToDouble(display->Text) / Convert::ToDouble(100);
			display->Text = Convert::ToString(a);
		}

		// Button Oct
		private: System::Void btnOct_Click(System::Object^ sender, System::EventArgs^ e) {
			lblShow->Text = System::Convert::ToString("Oct " + "(" + (display->Text) + ")");
			historyList->Items->Add(lblShow->Text);
			int a = (int)(Double::Parse(display->Text));
			display->Text = System::Convert::ToString(a, 8);
		}

		// Button 1/x
		private: System::Void btnReciprocity_Click(System::Object^ sender, System::EventArgs^ e) {
			lblShow->Text = "1/" + (display->Text);
			historyList->Items->Add(lblShow->Text);
			a = Convert::ToDouble(1.0 / Convert::ToDouble(display->Text));
			display->Text = Convert::ToString(a);
		}
};
}
