#pragma once
#include<cliext/algorithm>
#include<cliext/vector>
#include<cliext/numeric>
#include<cliext/functional>
#include<random>
#include<chrono>

namespace Pick4Me {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for QuickPick
	/// </summary>
	public ref class QuickPick : public System::Windows::Forms::Form
	{
	public:
		QuickPick(void)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
			numNumber->Minimum = 1;
			numNumber->Maximum = 10;
			numLetters->Minimum = 1;
			numLetters->Maximum = 10;
			rbNumbers->Checked = true;

		}
		
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~QuickPick()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  gbLetters;
	protected:

	private: System::Windows::Forms::GroupBox^  gbNumbers;
	protected:


	private: System::Windows::Forms::RadioButton^  rbNumbers;
	private: System::Windows::Forms::RadioButton^  rbLetters;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  chDupNumbers;




	private: System::Windows::Forms::NumericUpDown^  numEndNumber;

	private: System::Windows::Forms::NumericUpDown^  numStartNumber;

	private: System::Windows::Forms::NumericUpDown^  numNumber;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  cmbEnd;

	private: System::Windows::Forms::ComboBox^  cmbStart;
	private: System::Windows::Forms::CheckBox^  chDupLetters;


	private: System::Windows::Forms::NumericUpDown^  numLetters;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  txtResults;
	private: System::Windows::Forms::Button^  btnGenerate;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;


	private:
		int noOfNumbers;
		int noOfLetters;
		int startNum;
		int endNum;
		int randNumber;
		String^ startL;
		String^ endL;
		cliext::vector<int> numbers;
		cliext::vector<int> letters;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(QuickPick::typeid));
			this->gbLetters = (gcnew System::Windows::Forms::GroupBox());
			this->cmbEnd = (gcnew System::Windows::Forms::ComboBox());
			this->cmbStart = (gcnew System::Windows::Forms::ComboBox());
			this->chDupLetters = (gcnew System::Windows::Forms::CheckBox());
			this->numLetters = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->gbNumbers = (gcnew System::Windows::Forms::GroupBox());
			this->chDupNumbers = (gcnew System::Windows::Forms::CheckBox());
			this->numEndNumber = (gcnew System::Windows::Forms::NumericUpDown());
			this->numStartNumber = (gcnew System::Windows::Forms::NumericUpDown());
			this->numNumber = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rbNumbers = (gcnew System::Windows::Forms::RadioButton());
			this->rbLetters = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnGenerate = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtResults = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->gbLetters->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLetters))->BeginInit();
			this->gbNumbers->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numEndNumber))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStartNumber))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numNumber))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// gbLetters
			// 
			this->gbLetters->Controls->Add(this->cmbEnd);
			this->gbLetters->Controls->Add(this->cmbStart);
			this->gbLetters->Controls->Add(this->chDupLetters);
			this->gbLetters->Controls->Add(this->numLetters);
			this->gbLetters->Controls->Add(this->label13);
			this->gbLetters->Controls->Add(this->label12);
			this->gbLetters->Controls->Add(this->label11);
			this->gbLetters->Controls->Add(this->label5);
			this->gbLetters->Controls->Add(this->label4);
			this->gbLetters->Location = System::Drawing::Point(248, 126);
			this->gbLetters->Name = L"gbLetters";
			this->gbLetters->Size = System::Drawing::Size(233, 119);
			this->gbLetters->TabIndex = 0;
			this->gbLetters->TabStop = false;
			// 
			// cmbEnd
			// 
			this->cmbEnd->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbEnd->FormattingEnabled = true;
			this->cmbEnd->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I",
					L"J", L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"X", L"Y", L"Z"
			});
			this->cmbEnd->Location = System::Drawing::Point(142, 63);
			this->cmbEnd->Name = L"cmbEnd";
			this->cmbEnd->Size = System::Drawing::Size(63, 21);
			this->cmbEnd->TabIndex = 15;
			// 
			// cmbStart
			// 
			this->cmbStart->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbStart->FormattingEnabled = true;
			this->cmbStart->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H",
					L"I", L"J", L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"X", L"Y", L"Z"
			});
			this->cmbStart->Location = System::Drawing::Point(142, 39);
			this->cmbStart->Name = L"cmbStart";
			this->cmbStart->Size = System::Drawing::Size(63, 21);
			this->cmbStart->TabIndex = 14;
			// 
			// chDupLetters
			// 
			this->chDupLetters->AutoSize = true;
			this->chDupLetters->Location = System::Drawing::Point(142, 89);
			this->chDupLetters->Name = L"chDupLetters";
			this->chDupLetters->Size = System::Drawing::Size(76, 17);
			this->chDupLetters->TabIndex = 13;
			this->chDupLetters->Text = L"Duplicates";
			this->chDupLetters->UseVisualStyleBackColor = true;
			// 
			// numLetters
			// 
			this->numLetters->Location = System::Drawing::Point(142, 17);
			this->numLetters->Name = L"numLetters";
			this->numLetters->Size = System::Drawing::Size(63, 20);
			this->numLetters->TabIndex = 12;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(79, 63);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(57, 13);
			this->label13->TabIndex = 11;
			this->label13->Text = L"End With :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(75, 39);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(61, 13);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Start From :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(22, 90);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(114, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Select For Duplicates :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(39, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Number of Letters :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 5;
			// 
			// gbNumbers
			// 
			this->gbNumbers->Controls->Add(this->chDupNumbers);
			this->gbNumbers->Controls->Add(this->numEndNumber);
			this->gbNumbers->Controls->Add(this->numStartNumber);
			this->gbNumbers->Controls->Add(this->numNumber);
			this->gbNumbers->Controls->Add(this->label10);
			this->gbNumbers->Controls->Add(this->label9);
			this->gbNumbers->Controls->Add(this->label3);
			this->gbNumbers->Controls->Add(this->label2);
			this->gbNumbers->Location = System::Drawing::Point(26, 126);
			this->gbNumbers->Name = L"gbNumbers";
			this->gbNumbers->Size = System::Drawing::Size(216, 119);
			this->gbNumbers->TabIndex = 1;
			this->gbNumbers->TabStop = false;
			this->gbNumbers->Enter += gcnew System::EventHandler(this, &QuickPick::groupBox3_Enter);
			// 
			// chDupNumbers
			// 
			this->chDupNumbers->AutoSize = true;
			this->chDupNumbers->Location = System::Drawing::Point(126, 90);
			this->chDupNumbers->Name = L"chDupNumbers";
			this->chDupNumbers->Size = System::Drawing::Size(76, 17);
			this->chDupNumbers->TabIndex = 12;
			this->chDupNumbers->Text = L"Duplicates";
			this->chDupNumbers->UseVisualStyleBackColor = true;
			// 
			// numEndNumber
			// 
			this->numEndNumber->Location = System::Drawing::Point(126, 63);
			this->numEndNumber->Name = L"numEndNumber";
			this->numEndNumber->Size = System::Drawing::Size(63, 20);
			this->numEndNumber->TabIndex = 11;
			// 
			// numStartNumber
			// 
			this->numStartNumber->Location = System::Drawing::Point(126, 39);
			this->numStartNumber->Name = L"numStartNumber";
			this->numStartNumber->Size = System::Drawing::Size(63, 20);
			this->numStartNumber->TabIndex = 10;
			// 
			// numNumber
			// 
			this->numNumber->Location = System::Drawing::Point(126, 17);
			this->numNumber->Name = L"numNumber";
			this->numNumber->Size = System::Drawing::Size(63, 20);
			this->numNumber->TabIndex = 9;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 90);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(114, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Select For Duplicates :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 19);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(107, 13);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Number of Numbers :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(63, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"End With :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Start From :";
			// 
			// rbNumbers
			// 
			this->rbNumbers->AutoSize = true;
			this->rbNumbers->Location = System::Drawing::Point(139, 103);
			this->rbNumbers->Name = L"rbNumbers";
			this->rbNumbers->Size = System::Drawing::Size(103, 17);
			this->rbNumbers->TabIndex = 2;
			this->rbNumbers->TabStop = true;
			this->rbNumbers->Text = L"Numbers 1234...";
			this->rbNumbers->UseVisualStyleBackColor = true;
			this->rbNumbers->CheckedChanged += gcnew System::EventHandler(this, &QuickPick::rbNumbers_CheckedChanged);
			// 
			// rbLetters
			// 
			this->rbLetters->AutoSize = true;
			this->rbLetters->Location = System::Drawing::Point(379, 103);
			this->rbLetters->Name = L"rbLetters";
			this->rbLetters->Size = System::Drawing::Size(102, 17);
			this->rbLetters->TabIndex = 3;
			this->rbLetters->TabStop = true;
			this->rbLetters->Text = L"Alphabet ABcd..";
			this->rbLetters->UseVisualStyleBackColor = true;
			this->rbLetters->CheckedChanged += gcnew System::EventHandler(this, &QuickPick::rbLetters_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI Light", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(117, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(278, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Please Choose Numbers or Aphabets";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(92, 60);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Date :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(79, 31);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L" Results :";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnGenerate);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->txtResults);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Location = System::Drawing::Point(26, 251);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(455, 115);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &QuickPick::groupBox2_Enter);
			// 
			// btnGenerate
			// 
			this->btnGenerate->Location = System::Drawing::Point(174, 80);
			this->btnGenerate->Name = L"btnGenerate";
			this->btnGenerate->Size = System::Drawing::Size(96, 23);
			this->btnGenerate->TabIndex = 10;
			this->btnGenerate->Text = L"Generate";
			this->btnGenerate->UseVisualStyleBackColor = true;
			this->btnGenerate->Click += gcnew System::EventHandler(this, &QuickPick::btnGenerate_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"ddMMMyyyy hh:mm";
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(136, 54);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(198, 20);
			this->dateTimePicker1->TabIndex = 9;
			// 
			// txtResults
			// 
			this->txtResults->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->txtResults->Location = System::Drawing::Point(136, 28);
			this->txtResults->Name = L"txtResults";
			this->txtResults->ReadOnly = true;
			this->txtResults->Size = System::Drawing::Size(198, 20);
			this->txtResults->TabIndex = 8;
			this->txtResults->TextChanged += gcnew System::EventHandler(this, &QuickPick::txtResults_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(26, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(86, 80);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(395, 24);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(86, 80);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// QuickPick
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(506, 378);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->rbLetters);
			this->Controls->Add(this->rbNumbers);
			this->Controls->Add(this->gbNumbers);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->gbLetters);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"QuickPick";
			this->Text = L"QuickPick";
			this->Load += gcnew System::EventHandler(this, &QuickPick::QuickPick_Load);
			this->gbLetters->ResumeLayout(false);
			this->gbLetters->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLetters))->EndInit();
			this->gbNumbers->ResumeLayout(false);
			this->gbNumbers->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numEndNumber))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStartNumber))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numNumber))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void txtResults_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void QuickPick_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void rbNumbers_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
	if (rbNumbers->Checked == true)
	{

		numStartNumber->Value = numStartNumber->Minimum;
		numEndNumber->Value = numEndNumber->Maximum;		
		gbNumbers->Enabled = true;
		gbLetters->Enabled = false;
		chDupNumbers->Checked = false;

		numLetters->Value = numLetters->Minimum;
		cmbStart->SelectedIndex = -1;
		cmbEnd->SelectedIndex = -1;
		txtResults->Clear();
		

	}

}      
private: System::Void rbLetters_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (rbLetters->Checked == true)
	{
		
		gbNumbers->Enabled = false;
		gbLetters->Enabled = true;
		chDupLetters->Checked = false;


		numNumber->Value = numNumber->Minimum;
		numStartNumber->Value = numStartNumber->Minimum;
		numEndNumber->Value = numEndNumber->Maximum;
		txtResults->Clear();
	}
}
private: System::Void btnGenerate_Click(System::Object^  sender, System::EventArgs^  e) {
	 
	if (rbNumbers->Checked == true)
	{
		startNum = static_cast<int>(numStartNumber->Value);
		endNum = static_cast<int>(numEndNumber->Value);
		noOfNumbers = static_cast<int>(numNumber->Value);
		numbers.clear();
		numbers.erase(remove(numbers.begin(), numbers.end(), 0), numbers.end());
		numbers.resize(noOfNumbers);
		txtResults->Clear();
		auto seed(std::chrono::system_clock::now().time_since_epoch().count());
		std::mt19937 gen(seed);
		if (startNum < endNum)
		{
			std::uniform_int_distribution<> dist(startNum, endNum);

			for (int i = 0; i < noOfNumbers; i++) {
				if (chDupNumbers->Checked == true) {
					randNumber = dist(gen);
					numbers[i] = randNumber;
					txtResults->AppendText(numbers[i].ToString());
					txtResults->AppendText("  ");
				}
				else
				{

					if (noOfNumbers <= endNum && startNum < endNum)
					{
						if (noOfNumbers == endNum && startNum == endNum - 1) {

							MessageBox::Show("Starting Number Cannot be one or less than Ending Number while Number of Numbers is equal to Ending Number", "Invalid Input Bounds", MessageBoxButtons::OK, MessageBoxIcon::Error);
							return;
						}
						else if (endNum - startNum <= noOfNumbers)
						{
							MessageBox::Show("Range between Starting Number and Ending Number cannot be less than Number of Numbers without Duplicates", "Invalid Input Bounds", MessageBoxButtons::OK, MessageBoxIcon::Error);
							return;
						}
						else
						{

							do
							{
								std::uniform_int_distribution<> dist(startNum, endNum);
								randNumber = dist(gen);
								if (!(cliext::find(numbers.begin(), numbers.end(), randNumber) != numbers.end()))
								{
									numbers[i] = randNumber;
									break;

								}



							} while (cliext::find(numbers.begin(), numbers.end(), randNumber) != numbers.end());

							numbers.push_back(randNumber);
							txtResults->AppendText(numbers[i].ToString());
							txtResults->AppendText("  ");

						}

					}

					else
					{
						MessageBox::Show("Number of Numbers and Starting Number Cannot exceed Ending Number without duplicates", "Invalid Input Bounds", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;
					}

				}


			}
		}
		else
		{
			MessageBox::Show("Starting Number Cannot be more or equal to Ending Number", "Invalid Input Bounds", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		   
					
		}
	


	if (rbLetters->Checked == true)
	{
		if (chDupLetters->Checked == true) {

			MessageBox::Show("Dups allowed");
		}
		else
		{
			MessageBox::Show("No Dups allowed");
		}

	}
}
};
}
