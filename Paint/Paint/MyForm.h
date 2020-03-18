#pragma once

#include <time.h>
#include <iostream>

namespace Paint {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêðûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõðàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòüToolStripMenuItem;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Panel^ panel2;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêðûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõðàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(1, 57);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(833, 443);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(12, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Êàðàíäàø";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(767, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(55, 23);
			this->panel1->TabIndex = 2;
			this->panel1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseClick);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(714, 28);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(47, 20);
			this->numericUpDown1->TabIndex = 3;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 503);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(834, 22);
			this->statusStrip1->TabIndex = 4;
			this->statusStrip1->Text = L"Ðèñîâàëêà";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(13, 17);
			this->toolStripStatusLabel1->Text = L"0";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(22, 17);
			this->toolStripStatusLabel2->Text = L":  0";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->Cursor = System::Windows::Forms::Cursors::Default;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(93, 28);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Áàëëîí÷èê";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->Cursor = System::Windows::Forms::Cursors::Default;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(174, 28);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Ëàñòèê";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->Cursor = System::Windows::Forms::Cursors::Default;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Location = System::Drawing::Point(255, 28);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Ëèíèÿ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->Cursor = System::Windows::Forms::Cursors::Default;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Location = System::Drawing::Point(336, 28);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Ïðÿìîóãîëüíèê";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->Cursor = System::Windows::Forms::Cursors::Default;
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->Location = System::Drawing::Point(417, 28);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Ýëëèïñ";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button7->Cursor = System::Windows::Forms::Cursors::Default;
			this->button7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button7->Location = System::Drawing::Point(498, 28);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Çàëèâêà";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ôàéëToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(834, 25);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->îòêðûòüToolStripMenuItem,
					this->ñîõðàíèòüToolStripMenuItem, this->î÷èñòèòüToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(50, 21);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// îòêðûòüToolStripMenuItem
			// 
			this->îòêðûòüToolStripMenuItem->Name = L"îòêðûòüToolStripMenuItem";
			this->îòêðûòüToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->îòêðûòüToolStripMenuItem->Text = L"Îòêðûòü";
			this->îòêðûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îòêðûòüToolStripMenuItem_Click);
			// 
			// ñîõðàíèòüToolStripMenuItem
			// 
			this->ñîõðàíèòüToolStripMenuItem->Name = L"ñîõðàíèòüToolStripMenuItem";
			this->ñîõðàíèòüToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->ñîõðàíèòüToolStripMenuItem->Text = L"Ñîõðàíèòü";
			this->ñîõðàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñîõðàíèòüToolStripMenuItem_Click);
			// 
			// î÷èñòèòüToolStripMenuItem
			// 
			this->î÷èñòèòüToolStripMenuItem->Name = L"î÷èñòèòüToolStripMenuItem";
			this->î÷èñòèòüToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->î÷èñòèòüToolStripMenuItem->Text = L"Î÷èñòèòü";
			this->î÷èñòèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::î÷èñòèòüToolStripMenuItem_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button8->Cursor = System::Windows::Forms::Cursors::Default;
			this->button8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button8->Location = System::Drawing::Point(579, 28);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 12;
			this->button8->Text = L"Ïèïåòêà";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Linen;
			this->panel2->Location = System::Drawing::Point(779, 502);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(55, 23);
			this->panel2->TabIndex = 3;
			this->panel2->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(834, 525);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Ðèñîâàëêà";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool Drow;
		bool zaliv;
		bool Ball;
		bool pen;
		bool line;
		bool lastic;
		bool rectangle;
		bool ellipse;
		bool Pipetka;
		bool Line2;
		Point first;
		Point second;
		Pen^ PenColor;
		Brush^ mybrush;
		Graphics^ g, ^ gg;
		Bitmap^ b;
		static int MX, MY;


		void FillMyFlood(int x, int y, Color fill_color, Color pixel_color)
		{
			int x_left, x_right, YY, i;
			int XMAX, YMAX;
			XMAX = pictureBox1->Width - 3;
			YMAX = pictureBox1->Height - 3;

			x_left = x_right = x;

			while (b->GetPixel(x_left, y) == pixel_color && x_left > 0)
			{
				b->SetPixel(x_left, y, fill_color);
				x_left--;
			}
			x_right++;
			while (b->GetPixel(x_right, y) == pixel_color && x_right < XMAX)
			{
				b->SetPixel(x_right, y, fill_color);
				x_right++;
			}
			x = (x_right + x_left) >> 1;
			for (i = -1; i <= 1; i += 2)
			{
				YY = y;
				while (b->GetPixel(x, YY) == pixel_color && YY < YMAX && YY>0) YY += i;
				YY = (y + YY) >> 1;
				if (b->GetPixel(x, YY) == pixel_color && b->GetPixel(x, YY) != fill_color) FillMyFlood(x, YY, fill_color, pixel_color);
			}
			for (YY = y - 1; YY <= y + 1; YY += 2)
			{
				x = x_left + 1;
				while (x < x_right && YY>0 && YY < YMAX)
				{
					if (b->GetPixel(x, YY) == pixel_color && b->GetPixel(x, YY) != fill_color) FillMyFlood(x, YY, fill_color, pixel_color);
					x++;
				}
			}
		}

	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		toolStripStatusLabel1->Text = Convert::ToString(e->X);
		toolStripStatusLabel2->Text = ":  " + Convert::ToString(e->Y);
		if (Drow)
		{
			if (pen)
			{
				PenColor->Width = Convert::ToDouble(numericUpDown1->Value);
				PenColor->Color = panel1->BackColor;
				g->DrawLine(PenColor, first, second);
				second = first;
				first = Point(e->X, e->Y);
			}
			if (Ball)
			{
				mybrush = gcnew SolidBrush(colorDialog1->Color);
				g->FillEllipse(mybrush, Convert::ToInt32(first.X + rand() % (8 * numericUpDown1->Value)), Convert::ToInt32(first.Y + rand() % (8 * numericUpDown1->Value)), Convert::ToDouble(numericUpDown1->Value) + 1, Convert::ToDouble(numericUpDown1->Value) + 1);
				g->FillEllipse(mybrush, Convert::ToInt32(first.X - rand() % (8 * numericUpDown1->Value)), Convert::ToInt32(first.Y - rand() % (8 * numericUpDown1->Value)), Convert::ToDouble(numericUpDown1->Value) + 1, Convert::ToDouble(numericUpDown1->Value) + 1);
				g->FillEllipse(mybrush, Convert::ToInt32(first.X - rand() % (8 * numericUpDown1->Value)), Convert::ToInt32(first.Y + rand() % (8 * numericUpDown1->Value)), Convert::ToDouble(numericUpDown1->Value) + 1, Convert::ToDouble(numericUpDown1->Value) + 1);
				g->FillEllipse(mybrush, Convert::ToInt32(first.X + rand() % (8 * numericUpDown1->Value)), Convert::ToInt32(first.Y - rand() % (8 * numericUpDown1->Value)), Convert::ToDouble(numericUpDown1->Value) + 1, Convert::ToDouble(numericUpDown1->Value) + 1);
				second = first;
				first = Point(e->X, e->Y);
			}
			if (lastic)
			{
				PenColor->Width = Convert::ToInt32(numericUpDown1->Value) + 10;
				PenColor->Color = Color::White;
				g->DrawLine(PenColor, first, second);
				second = first;
				first = Point(e->X, e->Y);
			}
			if (Line2)
			{
				Pen^ blackPen = gcnew Pen(panel1->BackColor, Convert::ToInt32(numericUpDown1->Value) + 1);
				g->DrawLine(blackPen, MX, e->Y, e->X, MY);
				gg->DrawLine(blackPen, MX, e->Y, e->X, MY);

			}
			pictureBox1->Refresh();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		pen = true;
		Ball = false;
		line = false;
		lastic = false;
		rectangle = false;
		ellipse = false;
		zaliv = false;
		Pipetka = false;
		Line2 = false;
	}
	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (!Drow)
		{
			MX = e->X;
			MY = e->Y;
			first = Point(e->X, e->Y);
			if (pen || line || lastic || Ball || Line2)
			{
				second = Point(e->X, e->Y);
				Drow = true;
			}
			if (rectangle || ellipse || zaliv || Pipetka) {
				Drow = true;
			}
		}
	}
	private: System::Void panel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			panel1->BackColor = colorDialog1->Color;
	}
	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (Drow) {

			PenColor->Width = Convert::ToInt32(numericUpDown1->Value) + 2;
			PenColor->Color = panel1->BackColor;
			if (line)
			{

				second = Point(e->X, e->Y);
				g->DrawLine(PenColor, first, second);

			}
			if (rectangle)
			{
				if (first.X < e->X && first.Y < e->Y) g->DrawRectangle(PenColor, Rectangle::FromLTRB(first.X, first.Y, e->X, e->Y));
				if (first.X < e->X && first.Y > e->Y) g->DrawRectangle(PenColor, Rectangle::FromLTRB(first.X, e->Y, e->X, first.Y));
				if (first.X > e->X&& first.Y < e->Y) g->DrawRectangle(PenColor, Rectangle::FromLTRB(e->X, first.Y, first.X, e->Y));
				if (first.X > e->X&& first.Y > e->Y) g->DrawRectangle(PenColor, Rectangle::FromLTRB(e->X, e->Y, first.X, first.Y));

			}
			if (ellipse) {
				g->DrawEllipse(PenColor, first.X, first.Y, e->X - first.X, e->Y - first.Y);
			}
			if (Pipetka)
			{
				Bitmap^ b = gcnew Bitmap(pictureBox1->Image);
				Color color = b->GetPixel(e->X, e->Y);
				panel1->BackColor = color;
			}
		}
		Drow = false;
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		b = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		g = Graphics::FromImage(b);
		pictureBox1->Image = b;
		PenColor = gcnew Pen(Color::Black, 2);
		colorDialog1->Color = Color::Black;
		Ball = false;
		pen = true;
		line = false;
		lastic = false;
		rectangle = false;
		ellipse = false;
		zaliv = false;
		Pipetka = false;
		Line2 = false;
		pictureBox1->Refresh();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		pen = false;
		Ball = true;
		line = false;
		lastic = false;
		rectangle = false;
		ellipse = false;
		zaliv = false;
		Pipetka = false;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		pen = false;
		Ball = false;
		line = false;
		lastic = true;
		rectangle = false;
		ellipse = false;
		zaliv = false;
		Pipetka = false;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Ball = false;
		pen = false;
		line = true;
		lastic = false;
		rectangle = false;
		ellipse = false;
		zaliv = false;
		Pipetka = false;
		Line2 = false;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Ball = false;
		pen = false;
		line = false;
		lastic = false;
		rectangle = true;
		ellipse = false;
		zaliv = false;
		Line2 = false;
		Pipetka = false;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		Ball = false;
		pen = false;
		line = false;
		lastic = false;
		rectangle = false;
		ellipse = true;
		zaliv = false;
		Pipetka = false;
		Line2 = false;
	}
	private: System::Void îòêðûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ dia = gcnew OpenFileDialog();
		dia->Filter = "Image Failes(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG|All files(*.*)|(*.*)";
		if (dia->ShowDialog() == ::System::Windows::Forms::DialogResult::OK) {
			b = gcnew Bitmap(dia->FileName, 2);
			pictureBox1->Image = b;
			g = Graphics::FromImage(pictureBox1->Image);
			pictureBox1->Refresh();
		}
	}
	private: System::Void ñîõðàíèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ dl = gcnew SaveFileDialog();
		dl->Title = "Ñîõðàíèòü êàê...";
		dl->OverwritePrompt = true;
		dl->CheckPathExists = true;
		dl->Filter = "Image Files(*.BMP)|*.BMP|Image Files(*.JPG)|*.JPG|Image Files(*.GIF)|*.GIF|Image Files(*.PNG)|*.PNG|All files(*.*)|*.*";
		dl->ShowHelp = true;
		if (dl->ShowDialog() == ::System::Windows::Forms::DialogResult::OK) {
			Bitmap^ saveBit = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
			pictureBox1->DrawToBitmap(saveBit, pictureBox1->ClientRectangle);
			saveBit->Save(dl->FileName);
		}

	}

	private: System::Void î÷èñòèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		g->Clear(Color::White);
		pictureBox1->Refresh();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		Ball = false;
		pen = false;
		line = false;
		lastic = false;
		rectangle = false;
		ellipse = false;
		zaliv = true;
		Pipetka = false;
		Line2 = false;
	}
	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (Drow)
			if (zaliv)
			{
				b = gcnew Bitmap(pictureBox1->Image);
				FillMyFlood(e->X, e->Y, panel2->BackColor, b->GetPixel(e->X, e->Y));
				pictureBox1->Image = b;
				g = Graphics::FromImage(pictureBox1->Image);
				gg = pictureBox1->CreateGraphics();

				b = gcnew Bitmap(pictureBox1->Image);
				FillMyFlood(e->X, e->Y, panel1->BackColor, b->GetPixel(e->X, e->Y));
				pictureBox1->Image = b;
				g = Graphics::FromImage(pictureBox1->Image);
				gg = pictureBox1->CreateGraphics();
			}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		Ball = false;
		pen = false;
		line = false;
		lastic = false;
		rectangle = false;
		ellipse = false;
		zaliv = false;
		Pipetka = true;
		Line2 = false;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		Ball = false;
		pen = false;
		line = false;
		lastic = false;
		rectangle = false;
		ellipse = false;
		zaliv = false;
		Pipetka = false;
		Line2 = true;
	}
	};
}