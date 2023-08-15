#pragma once

namespace BMICalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ weight;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ height;
	private: System::Windows::Forms::Label^ label4;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->weight = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->height = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// weight
			// 
			this->weight->BackColor = System::Drawing::SystemColors::Menu;
			this->weight->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->weight->Font = (gcnew System::Drawing::Font(L"Cambria", 15, System::Drawing::FontStyle::Bold));
			this->weight->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->weight->Location = System::Drawing::Point(292, 102);
			this->weight->Name = L"weight";
			this->weight->Size = System::Drawing::Size(73, 30);
			this->weight->TabIndex = 0;
			this->weight->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->weight->TextChanged += gcnew System::EventHandler(this, &MyForm::weight_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::AliceBlue;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->button1->Location = System::Drawing::Point(12, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(256, 71);
			this->button1->TabIndex = 1;
			this->button1->Text = L"CALCULATE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 40, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightCyan;
			this->label1->Location = System::Drawing::Point(121, 328);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 77);
			this->label1->TabIndex = 2;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Menu;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(366, 47);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(1, 1, 10, 1);
			this->label2->Size = System::Drawing::Size(43, 28);
			this->label2->TabIndex = 2;
			this->label2->Text = L"m";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Menu;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label3->Location = System::Drawing::Point(366, 102);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(1);
			this->label3->Size = System::Drawing::Size(43, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Kg";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// height
			// 
			this->height->BackColor = System::Drawing::SystemColors::Menu;
			this->height->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->height->Font = (gcnew System::Drawing::Font(L"Cambria", 15, System::Drawing::FontStyle::Bold));
			this->height->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->height->Location = System::Drawing::Point(292, 47);
			this->height->Name = L"height";
			this->height->Size = System::Drawing::Size(73, 30);
			this->height->TabIndex = 0;
			this->height->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->height->TextChanged += gcnew System::EventHandler(this, &MyForm::height_TextChanged_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::LightSkyBlue;
			this->label4->Location = System::Drawing::Point(11, 407);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(1, 1, 10, 1);
			this->label4->Size = System::Drawing::Size(254, 33);
			this->label4->TabIndex = 2;
			this->label4->Text = L"\"Eat Healthy, Stay Fit\"";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleTurquoise;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(522, 493);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->height);
			this->Controls->Add(this->weight);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(540, 540);
			this->MinimumSize = System::Drawing::Size(540, 540);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BMI Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (height->Text == "" || weight->Text == "") {
			if (height->Text == "" && weight->Text == "") {
			label4->Text = "Enter Height and Weight";
			}
			else if (height->Text == "") {
			label4->Text = "Enter Height";
			}
			else if(weight->Text == "") {
			label4->Text = "Enter Weight";
			}
		}
		else {
		double h = System::Convert::ToDouble(height->Text);
		double w = System::Convert::ToDouble(weight->Text);
		if (h == 0 || w == 0) {
			label4->Text = "Invalid Input";
		}
		else {
			double bmi = w / (h * h);
			int roundoff = bmi * 10;
			bmi = double(roundoff) / 10;
			label1->Text = System::Convert::ToString(bmi);

			if (bmi < 18.5) {
				label4->Text = "Under Weight";
			}
			else if (bmi >= 18.5 && bmi < 25) {
				label4->Text = "Normal Weight";
			}
			else if (bmi >= 25 && bmi < 30) {
				label4->Text = "Over Weight";
			}
			else if (bmi >= 30 && bmi < 35) {
				label4->Text = "Obese";
			}
			else if (bmi >= 35) {
				label4->Text = "Extremely Obese";
			}
		}
		}
	}
private: System::Void height_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void weight_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void height_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
