#pragma once

namespace Project13 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ buttonNext;
	private: System::Windows::Forms::Button^ buttonPreview;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ buttonAnswer1;
	private: System::Windows::Forms::Button^ buttonAnswer3;
	private: System::Windows::Forms::Button^ buttonAnswer4;



	private: System::Windows::Forms::Button^ buttonAnswer2;

	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonNext = (gcnew System::Windows::Forms::Button());
			this->buttonPreview = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->buttonAnswer1 = (gcnew System::Windows::Forms::Button());
			this->buttonAnswer3 = (gcnew System::Windows::Forms::Button());
			this->buttonAnswer4 = (gcnew System::Windows::Forms::Button());
			this->buttonAnswer2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(261, 313);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(103, 115);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// buttonNext
			// 
			this->buttonNext->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonNext->BackColor = System::Drawing::Color::Transparent;
			this->buttonNext->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonNext.BackgroundImage")));
			this->buttonNext->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonNext->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonNext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNext->Location = System::Drawing::Point(1169, 565);
			this->buttonNext->Name = L"buttonNext";
			this->buttonNext->Size = System::Drawing::Size(65, 65);
			this->buttonNext->TabIndex = 1;
			this->buttonNext->UseVisualStyleBackColor = false;
			this->buttonNext->Click += gcnew System::EventHandler(this, &MyForm::buttonNext_Click);
			// 
			// buttonPreview
			// 
			this->buttonPreview->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonPreview->BackColor = System::Drawing::Color::Transparent;
			this->buttonPreview->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonPreview.BackgroundImage")));
			this->buttonPreview->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonPreview->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPreview->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPreview->Location = System::Drawing::Point(0, 565);
			this->buttonPreview->Name = L"buttonPreview";
			this->buttonPreview->Size = System::Drawing::Size(65, 65);
			this->buttonPreview->TabIndex = 2;
			this->buttonPreview->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(0, 633);
			this->textBox1->Margin = System::Windows::Forms::Padding(0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1234, 119);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"выфвфывфыв";
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// buttonAnswer1
			// 
			this->buttonAnswer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonAnswer1->BackColor = System::Drawing::Color::Transparent;
			this->buttonAnswer1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAnswer1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonAnswer1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAnswer1->ForeColor = System::Drawing::Color::White;
			this->buttonAnswer1->Location = System::Drawing::Point(172, 514);
			this->buttonAnswer1->Name = L"buttonAnswer1";
			this->buttonAnswer1->Size = System::Drawing::Size(350, 55);
			this->buttonAnswer1->TabIndex = 4;
			this->buttonAnswer1->Text = L"¬ариант 1";
			this->buttonAnswer1->UseVisualStyleBackColor = false;
			this->buttonAnswer1->Visible = false;
			// 
			// buttonAnswer3
			// 
			this->buttonAnswer3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonAnswer3->BackColor = System::Drawing::Color::Transparent;
			this->buttonAnswer3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAnswer3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonAnswer3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAnswer3->ForeColor = System::Drawing::Color::White;
			this->buttonAnswer3->Location = System::Drawing::Point(172, 572);
			this->buttonAnswer3->Name = L"buttonAnswer3";
			this->buttonAnswer3->Size = System::Drawing::Size(350, 55);
			this->buttonAnswer3->TabIndex = 8;
			this->buttonAnswer3->Text = L"¬ариант 3";
			this->buttonAnswer3->UseVisualStyleBackColor = false;
			this->buttonAnswer3->Visible = false;
			// 
			// buttonAnswer4
			// 
			this->buttonAnswer4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonAnswer4->BackColor = System::Drawing::Color::Transparent;
			this->buttonAnswer4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAnswer4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonAnswer4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAnswer4->ForeColor = System::Drawing::Color::White;
			this->buttonAnswer4->Location = System::Drawing::Point(585, 572);
			this->buttonAnswer4->Name = L"buttonAnswer4";
			this->buttonAnswer4->Size = System::Drawing::Size(350, 55);
			this->buttonAnswer4->TabIndex = 10;
			this->buttonAnswer4->Text = L"¬ариант 4";
			this->buttonAnswer4->UseVisualStyleBackColor = false;
			this->buttonAnswer4->Visible = false;
			// 
			// buttonAnswer2
			// 
			this->buttonAnswer2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonAnswer2->BackColor = System::Drawing::Color::Transparent;
			this->buttonAnswer2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAnswer2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonAnswer2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAnswer2->ForeColor = System::Drawing::Color::White;
			this->buttonAnswer2->Location = System::Drawing::Point(585, 514);
			this->buttonAnswer2->Name = L"buttonAnswer2";
			this->buttonAnswer2->Size = System::Drawing::Size(350, 55);
			this->buttonAnswer2->TabIndex = 9;
			this->buttonAnswer2->Text = L"¬ариант 2";
			this->buttonAnswer2->UseVisualStyleBackColor = false;
			this->buttonAnswer2->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1234, 750);
			this->Controls->Add(this->buttonAnswer4);
			this->Controls->Add(this->buttonAnswer2);
			this->Controls->Add(this->buttonAnswer3);
			this->Controls->Add(this->buttonAnswer1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->buttonPreview);
			this->Controls->Add(this->buttonNext);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ёкологический квест";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ story = "√лавным героем визуальной новеллы €вл€етс€ молода€ эколог, котора€ решает вернутьс€ в свой родной город после окончани€ университета и начать борьбу за сохранение окружающей среды в —аратовской области.";
							
		int valueChar = 0;
		int countChar = story->Length;

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += story[valueChar];
		valueChar++;
		if (valueChar >= countChar) {
			timer1->Enabled = false;
			valueChar = 0;
			buttonAnswer1->Visible = true;
			buttonAnswer2->Visible = true;
			buttonAnswer3->Visible = true;
			buttonAnswer4->Visible = true;
		}
	}

	private: System::Void buttonNext_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		timer1->Enabled = true;
	}

};
}
