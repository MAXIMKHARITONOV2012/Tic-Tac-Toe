#pragma once
#include <vcclr.h>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button10;


















	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Location = System::Drawing::Point(38, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 90);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button2->Location = System::Drawing::Point(173, 21);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 90);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button3->Location = System::Drawing::Point(322, 21);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 90);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button4->Location = System::Drawing::Point(38, 136);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 90);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button5->Location = System::Drawing::Point(173, 136);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 90);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button6->Location = System::Drawing::Point(322, 136);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 90);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button7->Location = System::Drawing::Point(38, 260);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 90);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button8->Location = System::Drawing::Point(173, 260);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(90, 90);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button9->Location = System::Drawing::Point(322, 260);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(90, 90);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(-1, 366);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 87);
			this->label1->TabIndex = 9;
			this->label1->Text = L"ПОБЕДИЛА КОМАНДА : \r\n\r\n\r\n";
			this->label1->Visible = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Blue;
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button10->Location = System::Drawing::Point(302, 385);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(173, 57);
			this->button10->TabIndex = 10;
			this->button10->Text = L"РЕСТАРТ";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(465, 444);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(487, 500);
			this->MinimumSize = System::Drawing::Size(487, 500);
			this->Name = L"MyForm";
			this->Text = L"TIC TAC TOE";
			this->ResumeLayout(false);

		}
#pragma endregion
		//private: String^ go = "True";
		private: String^ player = "X";
			   private:bool rr = true;

			   //private: while (go == "True")
			   //{

			   //}

	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		isDraw();
		if (player == "X" && button -> Text == "" && rr )
		{
			
			button->Text = "X";
			player = "O";
			if (checkwin())
			{
				label1->Text = "ПОБЕДИЛА КОМАНДА : X";
				label1->Visible = true;
				rr = false;
			}
			else if (isDraw())
			{
				label1->Font = gcnew System::Drawing::Font("Arial",35);
				label1->Visible = true;
				label1->Text = "Ничья";
				rr = false;
			}

		}
		else if (player == "O" && button->Text == "" && rr )
		{
			button->Text = "O";
			player = "X";
			if (checkwin())
			{
				label1->Text = "ПОБЕДИЛА КОМАНДА : O";
				label1->Visible = true;
				rr = false;

			}
			else if (isDraw())
			{
				label1->Font = gcnew System::Drawing::Font("Arial", 35);
				label1->Visible = true;
				label1->Text = "Ничья";
				rr = false;
			}


		}
	}

	private: bool isDraw()
	{
		if (button1->Text != "" && button2->Text != "" && button3->Text != "" && button4->Text != "" && button5->Text != "" && button6->Text != "" && button7->Text != "" && button8->Text != "" && button9->Text != "" && !checkwin())
		{
			return true;
			
		}
		else
		{
			return false;
		}
	}

	private : bool checkwin()
	{
		if (button1->Text == button2->Text && button2->Text == button3->Text && button1->Text == button3->Text && button1->Text != "")
		{
			button1->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			button2->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			button3->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			return true;
		}
		if (button1->Text == button4->Text && button4->Text == button7->Text && button1->Text == button7->Text && button1->Text != "")
		{
			button1->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			button4->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			button7->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			return true;
		}
		if (button7->Text == button8->Text && button8->Text == button9->Text && button7->Text == button9->Text && button7->Text != "")
		{
			button7->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			button8->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			button9->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			return true;
		}
		if (button3->Text == button6->Text && button6->Text == button9->Text && button3->Text == button9->Text && button3->Text != "")
		{
			button3->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			button6->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			button9->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			return true;
		}
		if (button4->Text == button5->Text && button5->Text == button6->Text && button4->Text == button6->Text && button4->Text != "")
		{
			button4->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			button5->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			button6->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			return true;
		}
		if (button1->Text == button5->Text && button5->Text == button9->Text && button1->Text == button9->Text && button5->Text != "")
		{
			button1->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			button5->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			button9->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			return true;
		}
		if (button3->Text == button5->Text && button5->Text == button7->Text && button3->Text == button7->Text && button5->Text != "")
		{
			button3->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			button5->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			button7->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			return true;
		}
		if (button2->Text == button5->Text && button5->Text == button8->Text && button2->Text == button8->Text && button5->Text != "")
		{
			button2->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			button5->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			button8->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Pobt.png");
			return true;
		}


			return false;
		}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Text = "";
	button2->Text = "";
	button3->Text = "";
	button4->Text = "";
	button5->Text = "";
	button6->Text = "";
	button7->Text = "";
	button8->Text = "";
	button9->Text = "";
	button1->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Def.png");
	button2->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Def.png");
	button3->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Def.png");
	button4->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Def.png");
	button5->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Def.png");
	button6->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Def.png");
	button7->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Def.png");
	button8->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Def.png");
	button9->BackgroundImage = Image::FromFile("C:\\Unreal\\test\\Project1\\img\\Def.png");
	label1->Font = gcnew System::Drawing::Font("Arial", 14);

	label1->Visible = false;
	rr = true;
		

}
//private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
//	if (e->KeyCode.ToString() == "Q")
//		button1->Text = player;
//	}

};
}
