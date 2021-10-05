#pragma once

namespace MathCalculator {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StandardMode
	/// </summary>
	public ref class StandardMode : public System::Windows::Forms::Form
	{
	public:
		StandardMode(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StandardMode() {
			if (components) {
				delete components;
			}
		}
	public: System::Windows::Forms::ListBox^ historyList;

	public: System::Windows::Forms::Button^ btnDecimalPoint;
	public: System::Windows::Forms::Button^ btnEqually;
	public: System::Windows::Forms::Button^ btnDivide;
	public: System::Windows::Forms::Button^ btnZero;
	public: System::Windows::Forms::Button^ btnTwo;
	public: System::Windows::Forms::Button^ btnThree;
	public: System::Windows::Forms::Button^ btnMultiplication;
	public: System::Windows::Forms::Button^ btnOne;
	public: System::Windows::Forms::Button^ btnFive;
	public: System::Windows::Forms::Button^ btnSix;
	public: System::Windows::Forms::Button^ btnSubtraction;
	public: System::Windows::Forms::Button^ btnFour;
	public: System::Windows::Forms::Button^ btnEight;
	public: System::Windows::Forms::Button^ btnNine;
	public: System::Windows::Forms::Button^ btnAddition;
	public: System::Windows::Forms::Button^ btnSeven;
	public: System::Windows::Forms::Button^ btnCE;
	public: System::Windows::Forms::Button^ btnC;
	public: System::Windows::Forms::Button^ btnPlusMinus;
	public: System::Windows::Forms::Button^ btnBackspace;

	public: System::Windows::Forms::TextBox^ display;
	public: System::Windows::Forms::MenuStrip^ menu;
	public: System::Windows::Forms::ToolStripMenuItem^ file;
	public: System::Windows::Forms::ToolStripMenuItem^ history;
	public: System::Windows::Forms::ToolStripMenuItem^ exit;
	public: System::Windows::Forms::ToolStripMenuItem^ edit;
	public: System::Windows::Forms::ToolStripMenuItem^ copy;
	public: System::Windows::Forms::ToolStripMenuItem^ paste;
	public: System::Windows::Forms::ToolStripMenuItem^ home;
	public: System::Windows::Forms::Label^ lblShow;

	public:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StandardMode::typeid));
			this->historyList = (gcnew System::Windows::Forms::ListBox());
			this->btnDecimalPoint = (gcnew System::Windows::Forms::Button());
			this->btnEqually = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnZero = (gcnew System::Windows::Forms::Button());
			this->btnTwo = (gcnew System::Windows::Forms::Button());
			this->btnThree = (gcnew System::Windows::Forms::Button());
			this->btnMultiplication = (gcnew System::Windows::Forms::Button());
			this->btnOne = (gcnew System::Windows::Forms::Button());
			this->btnFive = (gcnew System::Windows::Forms::Button());
			this->btnSix = (gcnew System::Windows::Forms::Button());
			this->btnSubtraction = (gcnew System::Windows::Forms::Button());
			this->btnFour = (gcnew System::Windows::Forms::Button());
			this->btnEight = (gcnew System::Windows::Forms::Button());
			this->btnNine = (gcnew System::Windows::Forms::Button());
			this->btnAddition = (gcnew System::Windows::Forms::Button());
			this->btnSeven = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnPlusMinus = (gcnew System::Windows::Forms::Button());
			this->btnBackspace = (gcnew System::Windows::Forms::Button());
			this->display = (gcnew System::Windows::Forms::TextBox());
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->file = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->home = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->history = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copy = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paste = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lblShow = (gcnew System::Windows::Forms::Label());
			this->menu->SuspendLayout();
			this->SuspendLayout();
			// 
			// historyList
			// 
			this->historyList->FormattingEnabled = true;
			this->historyList->Location = System::Drawing::Point(12, 447);
			this->historyList->Name = L"historyList";
			this->historyList->Size = System::Drawing::Size(286, 134);
			this->historyList->TabIndex = 72;
			// 
			// btnDecimalPoint
			// 
			this->btnDecimalPoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDecimalPoint->Location = System::Drawing::Point(85, 375);
			this->btnDecimalPoint->Name = L"btnDecimalPoint";
			this->btnDecimalPoint->Size = System::Drawing::Size(67, 63);
			this->btnDecimalPoint->TabIndex = 70;
			this->btnDecimalPoint->Text = L".";
			this->btnDecimalPoint->UseVisualStyleBackColor = true;
			this->btnDecimalPoint->Click += gcnew System::EventHandler(this, &StandardMode::btnDecimalPoint_Click);
			// 
			// btnEqually
			// 
			this->btnEqually->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnEqually->Location = System::Drawing::Point(158, 375);
			this->btnEqually->Name = L"btnEqually";
			this->btnEqually->Size = System::Drawing::Size(67, 63);
			this->btnEqually->TabIndex = 69;
			this->btnEqually->Text = L"=";
			this->btnEqually->UseVisualStyleBackColor = true;
			this->btnEqually->Click += gcnew System::EventHandler(this, &StandardMode::btnEqually_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDivide->Location = System::Drawing::Point(231, 375);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(67, 63);
			this->btnDivide->TabIndex = 68;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &StandardMode::btnAritmeticOp_Click);
			// 
			// btnZero
			// 
			this->btnZero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnZero->Location = System::Drawing::Point(11, 375);
			this->btnZero->Name = L"btnZero";
			this->btnZero->Size = System::Drawing::Size(67, 63);
			this->btnZero->TabIndex = 67;
			this->btnZero->Text = L"0";
			this->btnZero->UseVisualStyleBackColor = true;
			this->btnZero->Click += gcnew System::EventHandler(this, &StandardMode::btnNumber_Click);
			// 
			// btnTwo
			// 
			this->btnTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnTwo->Location = System::Drawing::Point(84, 306);
			this->btnTwo->Name = L"btnTwo";
			this->btnTwo->Size = System::Drawing::Size(67, 63);
			this->btnTwo->TabIndex = 66;
			this->btnTwo->Text = L"2";
			this->btnTwo->UseVisualStyleBackColor = true;
			this->btnTwo->Click += gcnew System::EventHandler(this, &StandardMode::btnNumber_Click);
			// 
			// btnThree
			// 
			this->btnThree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnThree->Location = System::Drawing::Point(157, 307);
			this->btnThree->Name = L"btnThree";
			this->btnThree->Size = System::Drawing::Size(67, 63);
			this->btnThree->TabIndex = 65;
			this->btnThree->Text = L"3";
			this->btnThree->UseVisualStyleBackColor = true;
			this->btnThree->Click += gcnew System::EventHandler(this, &StandardMode::btnNumber_Click);
			// 
			// btnMultiplication
			// 
			this->btnMultiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnMultiplication->Location = System::Drawing::Point(230, 306);
			this->btnMultiplication->Name = L"btnMultiplication";
			this->btnMultiplication->Size = System::Drawing::Size(67, 63);
			this->btnMultiplication->TabIndex = 64;
			this->btnMultiplication->Text = L"*";
			this->btnMultiplication->UseVisualStyleBackColor = true;
			this->btnMultiplication->Click += gcnew System::EventHandler(this, &StandardMode::btnAritmeticOp_Click);
			// 
			// btnOne
			// 
			this->btnOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnOne->Location = System::Drawing::Point(11, 306);
			this->btnOne->Name = L"btnOne";
			this->btnOne->Size = System::Drawing::Size(67, 63);
			this->btnOne->TabIndex = 63;
			this->btnOne->Text = L"1";
			this->btnOne->UseVisualStyleBackColor = true;
			this->btnOne->Click += gcnew System::EventHandler(this, &StandardMode::btnNumber_Click);
			// 
			// btnFive
			// 
			this->btnFive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnFive->Location = System::Drawing::Point(84, 237);
			this->btnFive->Name = L"btnFive";
			this->btnFive->Size = System::Drawing::Size(67, 63);
			this->btnFive->TabIndex = 62;
			this->btnFive->Text = L"5";
			this->btnFive->UseVisualStyleBackColor = true;
			this->btnFive->Click += gcnew System::EventHandler(this, &StandardMode::btnNumber_Click);
			// 
			// btnSix
			// 
			this->btnSix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSix->Location = System::Drawing::Point(157, 237);
			this->btnSix->Name = L"btnSix";
			this->btnSix->Size = System::Drawing::Size(67, 63);
			this->btnSix->TabIndex = 61;
			this->btnSix->Text = L"6";
			this->btnSix->UseVisualStyleBackColor = true;
			this->btnSix->Click += gcnew System::EventHandler(this, &StandardMode::btnNumber_Click);
			// 
			// btnSubtraction
			// 
			this->btnSubtraction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSubtraction->Location = System::Drawing::Point(230, 237);
			this->btnSubtraction->Name = L"btnSubtraction";
			this->btnSubtraction->Size = System::Drawing::Size(67, 63);
			this->btnSubtraction->TabIndex = 60;
			this->btnSubtraction->Text = L"-";
			this->btnSubtraction->UseVisualStyleBackColor = true;
			this->btnSubtraction->Click += gcnew System::EventHandler(this, &StandardMode::btnAritmeticOp_Click);
			// 
			// btnFour
			// 
			this->btnFour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnFour->Location = System::Drawing::Point(11, 237);
			this->btnFour->Name = L"btnFour";
			this->btnFour->Size = System::Drawing::Size(67, 63);
			this->btnFour->TabIndex = 59;
			this->btnFour->Text = L"4";
			this->btnFour->UseVisualStyleBackColor = true;
			this->btnFour->Click += gcnew System::EventHandler(this, &StandardMode::btnNumber_Click);
			// 
			// btnEight
			// 
			this->btnEight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnEight->Location = System::Drawing::Point(85, 168);
			this->btnEight->Name = L"btnEight";
			this->btnEight->Size = System::Drawing::Size(67, 63);
			this->btnEight->TabIndex = 58;
			this->btnEight->Text = L"8";
			this->btnEight->UseVisualStyleBackColor = true;
			this->btnEight->Click += gcnew System::EventHandler(this, &StandardMode::btnNumber_Click);
			// 
			// btnNine
			// 
			this->btnNine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnNine->Location = System::Drawing::Point(158, 168);
			this->btnNine->Name = L"btnNine";
			this->btnNine->Size = System::Drawing::Size(67, 63);
			this->btnNine->TabIndex = 57;
			this->btnNine->Text = L"9";
			this->btnNine->UseVisualStyleBackColor = true;
			this->btnNine->Click += gcnew System::EventHandler(this, &StandardMode::btnNumber_Click);
			// 
			// btnAddition
			// 
			this->btnAddition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnAddition->Location = System::Drawing::Point(231, 168);
			this->btnAddition->Name = L"btnAddition";
			this->btnAddition->Size = System::Drawing::Size(67, 63);
			this->btnAddition->TabIndex = 56;
			this->btnAddition->Text = L"+";
			this->btnAddition->UseVisualStyleBackColor = true;
			this->btnAddition->Click += gcnew System::EventHandler(this, &StandardMode::btnAritmeticOp_Click);
			// 
			// btnSeven
			// 
			this->btnSeven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnSeven->Location = System::Drawing::Point(11, 168);
			this->btnSeven->Name = L"btnSeven";
			this->btnSeven->Size = System::Drawing::Size(67, 63);
			this->btnSeven->TabIndex = 55;
			this->btnSeven->Text = L"7";
			this->btnSeven->UseVisualStyleBackColor = true;
			this->btnSeven->Click += gcnew System::EventHandler(this, &StandardMode::btnNumber_Click);
			// 
			// btnCE
			// 
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnCE->Location = System::Drawing::Point(85, 99);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(67, 63);
			this->btnCE->TabIndex = 54;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &StandardMode::btnCE_Click);
			// 
			// btnC
			// 
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnC->Location = System::Drawing::Point(158, 99);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(67, 63);
			this->btnC->TabIndex = 53;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &StandardMode::btnC_Click);
			// 
			// btnPlusMinus
			// 
			this->btnPlusMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnPlusMinus->Location = System::Drawing::Point(231, 99);
			this->btnPlusMinus->Name = L"btnPlusMinus";
			this->btnPlusMinus->Size = System::Drawing::Size(67, 63);
			this->btnPlusMinus->TabIndex = 52;
			this->btnPlusMinus->Text = L"±";
			this->btnPlusMinus->UseVisualStyleBackColor = true;
			this->btnPlusMinus->Click += gcnew System::EventHandler(this, &StandardMode::btnPlusMinus_Click);
			// 
			// btnBackspace
			// 
			this->btnBackspace->Font = (gcnew System::Drawing::Font(L"Wingdings", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnBackspace->Location = System::Drawing::Point(12, 99);
			this->btnBackspace->Name = L"btnBackspace";
			this->btnBackspace->Size = System::Drawing::Size(67, 63);
			this->btnBackspace->TabIndex = 51;
			this->btnBackspace->Text = L"";
			this->btnBackspace->UseVisualStyleBackColor = true;
			this->btnBackspace->Click += gcnew System::EventHandler(this, &StandardMode::btnBackspace_Click);
			// 
			// display
			// 
			this->display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->display->Location = System::Drawing::Point(12, 28);
			this->display->Multiline = true;
			this->display->Name = L"display";
			this->display->ReadOnly = true;
			this->display->Size = System::Drawing::Size(287, 60);
			this->display->TabIndex = 71;
			this->display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// menu
			// 
			this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->file, this->edit });
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(309, 24);
			this->menu->TabIndex = 50;
			this->menu->Text = L"menu";
			// 
			// file
			// 
			this->file->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->home, this->history,
					this->exit
			});
			this->file->Name = L"file";
			this->file->Size = System::Drawing::Size(37, 20);
			this->file->Text = L"File";
			// 
			// home
			// 
			this->home->Name = L"home";
			this->home->Size = System::Drawing::Size(112, 22);
			this->home->Text = L"Home";
			this->home->Click += gcnew System::EventHandler(this, &StandardMode::home_Click);
			// 
			// history
			// 
			this->history->Name = L"history";
			this->history->Size = System::Drawing::Size(112, 22);
			this->history->Text = L"History";
			this->history->Click += gcnew System::EventHandler(this, &StandardMode::history_Click);
			// 
			// exit
			// 
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(112, 22);
			this->exit->Text = L"Exit";
			this->exit->Click += gcnew System::EventHandler(this, &StandardMode::exit_Click);
			// 
			// edit
			// 
			this->edit->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->copy, this->paste });
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(39, 20);
			this->edit->Text = L"Edit";
			// 
			// copy
			// 
			this->copy->Name = L"copy";
			this->copy->Size = System::Drawing::Size(102, 22);
			this->copy->Text = L"Copy";
			this->copy->Click += gcnew System::EventHandler(this, &StandardMode::copy_Click);
			// 
			// paste
			// 
			this->paste->Name = L"paste";
			this->paste->Size = System::Drawing::Size(102, 22);
			this->paste->Text = L"Paste";
			this->paste->Click += gcnew System::EventHandler(this, &StandardMode::paste_Click);
			// 
			// lblShow
			// 
			this->lblShow->AutoSize = true;
			this->lblShow->BackColor = System::Drawing::SystemColors::Control;
			this->lblShow->Location = System::Drawing::Point(15, 31);
			this->lblShow->Name = L"lblShow";
			this->lblShow->Size = System::Drawing::Size(29, 13);
			this->lblShow->TabIndex = 73;
			this->lblShow->Text = L"label";
			// 
			// StandardMode
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(309, 447);
			this->Controls->Add(this->lblShow);
			this->Controls->Add(this->historyList);
			this->Controls->Add(this->btnDecimalPoint);
			this->Controls->Add(this->btnEqually);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnZero);
			this->Controls->Add(this->btnTwo);
			this->Controls->Add(this->btnThree);
			this->Controls->Add(this->btnMultiplication);
			this->Controls->Add(this->btnOne);
			this->Controls->Add(this->btnFive);
			this->Controls->Add(this->btnSix);
			this->Controls->Add(this->btnSubtraction);
			this->Controls->Add(this->btnFour);
			this->Controls->Add(this->btnEight);
			this->Controls->Add(this->btnNine);
			this->Controls->Add(this->btnAddition);
			this->Controls->Add(this->btnSeven);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnPlusMinus);
			this->Controls->Add(this->btnBackspace);
			this->Controls->Add(this->display);
			this->Controls->Add(this->menu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"StandardMode";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Standard";
			this->Load += gcnew System::EventHandler(this, &StandardMode::standardMode_Load);
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
		public: double iFirstnum;
		public: double iSecondnum;
		public: double iResult;
		public: double a;
		public: String^ iOperator;

		public: String^ copyX = "0";
		public: String^ pasteX;

		bool state = true;

		//pogledati i popraviti metodu ispod
		public: System::Void standardMode_Load(System::Object^ sender, System::EventArgs^ e) {
			this->Width = 325;
			this->Height = 485;
			display->Text = "0";
			lblShow->Text = "0";
			historyList->Items->Clear();
			history->Checked = false;
		}

		private: System::Void home_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}

		public: System::Void history_Click(System::Object^ sender, System::EventArgs^ e) {
			history->Checked = state;
			if (history->Checked == true) {
				historyList->Visible = true;
				this->Height = 631;
				state = false;
			}
			else if (history->Checked == false) {
				historyList->Visible = false;
				this->Height = 485;
				state = true;
			}
		}
		
		public: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
			Application::Exit();
		}

		// Button Backspace
		public: System::Void btnBackspace_Click(System::Object^ sender, System::EventArgs^ e) {
			if (display->Text->Length > 0) {
				display->Text = display->Text->Remove(display->Text->Length - 1, 1);
			}
			if ((display->Text == "") || (display->Text == "-")) {
				display->Text = "0";
			}
		}

        // Button CE
		public: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
			display->Text = "0";
		}

		// Button C
		public: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
			lblShow->Text = "0";
			display->Text = "0";
		}
		
		// Button PlusMinus
		public: System::Void btnPlusMinus_Click(System::Object^ sender, System::EventArgs^ e) {
			if (display->Text->Contains("-")) {
				display->Text = display->Text->Remove(0, 1);
			}
			else {
				display->Text = "-" + display->Text;
			}
		}
		
		// Buttons Numbers(0, 1, 2, 3, 4, 5, 6, 7, 8, 9)
		public: System::Void btnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
			Button^ Numbers = safe_cast<Button^>(sender);
			if (display->Text == "0") {
				display->Text = Numbers->Text;
			}
			else {
				display->Text = display->Text + Numbers->Text;
			}
		}

		//Buttons Arithmetic Operations(+, -, *, /)
		public: System::Void btnAritmeticOp_Click(System::Object^ sender, System::EventArgs^ e) {
			Button^ op = safe_cast<Button^>(sender);
			iFirstnum = Double::Parse(display->Text);
			display->Text = "0";
			iOperator = op->Text;
			lblShow->Text = System::Convert::ToString(iFirstnum) + " " + iOperator;
		}
		
		// Button Equal
		public: System::Void btnEqually_Click(System::Object^ sender, System::EventArgs^ e) {
			iSecondnum = Double::Parse(display->Text);
			if (iOperator == "+") {
				iResult = iFirstnum + iSecondnum;
				display->Text = System::Convert::ToString(iResult);
				historyList->Items->Add(lblShow->Text + " " + System::Convert::ToString(iSecondnum));
			}
			else if (iOperator == "-") {
				iResult = iFirstnum - iSecondnum;
				display->Text = System::Convert::ToString(iResult);
				historyList->Items->Add(lblShow->Text + " " + System::Convert::ToString(iSecondnum));
			}
			else if (iOperator == "*") {
				iResult = iFirstnum * iSecondnum;
				display->Text = System::Convert::ToString(iResult);
				historyList->Items->Add(lblShow->Text + " " + System::Convert::ToString(iSecondnum));
			}
			else if (iOperator == "/") {
				iResult = iFirstnum / iSecondnum;
				display->Text = System::Convert::ToString(iResult);
				historyList->Items->Add(lblShow->Text + " " + System::Convert::ToString(iSecondnum));
			}
			else if (iOperator == "Mod") {
				int iFirst, iSecond, iRes;
				iFirst = Convert::ToInt32(iFirstnum);
				iSecond = Convert::ToInt32(iSecondnum);
				iRes = iFirst % iSecond;
				display->Text = System::Convert::ToString(iRes);
				historyList->Items->Add(lblShow->Text + " " + System::Convert::ToString(iSecondnum));
			}
			else if (iOperator == "Pow") {
				iResult = Math::Pow(iFirstnum, iSecondnum);
				display->Text = System::Convert::ToString(iResult);
				historyList->Items->Add(lblShow->Text + " " + System::Convert::ToString(iSecondnum));
			}
		}

		// Button Decimal Point
		public: System::Void btnDecimalPoint_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!display->Text->Contains(",")) {
				display->Text = display->Text + ",";
			}
		}

		//Copy And Paste Options
		public: System::Void copy_Click(System::Object^ sender, System::EventArgs^ e) {
			copyX = display->Text;
		}

		public: System::Void paste_Click(System::Object^ sender, System::EventArgs^ e) {
			pasteX = copyX;
			display->Text = pasteX;
		}
};
}