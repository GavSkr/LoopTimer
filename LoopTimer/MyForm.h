#pragma once

namespace LoopTimer {

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
	private: System::Windows::Forms::Label^ label_Timer;
	private: System::Windows::Forms::Button^ button_Start;
	private: System::Windows::Forms::Button^ button_Stop;
	private: System::Windows::Forms::Button^ button_Clear;
	private: System::Windows::Forms::TextBox^ textBox_Hour;
	private: System::Windows::Forms::TextBox^ textBox_Minute;
	private: System::Windows::Forms::TextBox^ textBox_Second;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_Repeat;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button_Pause;
	private: System::Windows::Forms::Timer^ timer;
	private: System::ComponentModel::IContainer^ components;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label_CountRepeat;
	private: System::Windows::Forms::Label^ label4;

	public:
		String^ hour{ "00" };
		String^ minute{ "00" };
		String^ second{ "00" };

		int checkTime(String^ hour);

		int t_hour = 0;
		int t_minute = 0;
		int t_second = 0;
		int i_repeat = -1;
		bool b_repeat = true;
		bool b_pause = false;

		int r_hour = 0;
		int r_minute = 0;
		int r_second = 0;

		Char^ c = gcnew Char();

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
			this->label_Timer = (gcnew System::Windows::Forms::Label());
			this->button_Start = (gcnew System::Windows::Forms::Button());
			this->button_Stop = (gcnew System::Windows::Forms::Button());
			this->button_Clear = (gcnew System::Windows::Forms::Button());
			this->textBox_Hour = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Minute = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Second = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_Repeat = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button_Pause = (gcnew System::Windows::Forms::Button());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label_CountRepeat = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label_Timer
			// 
			this->label_Timer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_Timer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 120, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Timer->Location = System::Drawing::Point(0, 0);
			this->label_Timer->Name = L"label_Timer";
			this->label_Timer->Size = System::Drawing::Size(758, 385);
			this->label_Timer->TabIndex = 0;
			this->label_Timer->Text = L"00:00:00";
			this->label_Timer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_Start
			// 
			this->button_Start->Location = System::Drawing::Point(3, 0);
			this->button_Start->Name = L"button_Start";
			this->button_Start->Size = System::Drawing::Size(50, 23);
			this->button_Start->TabIndex = 1;
			this->button_Start->Text = L"Start";
			this->button_Start->UseVisualStyleBackColor = true;
			this->button_Start->Click += gcnew System::EventHandler(this, &MyForm::button_Start_Click);
			// 
			// button_Stop
			// 
			this->button_Stop->Enabled = false;
			this->button_Stop->Location = System::Drawing::Point(115, 0);
			this->button_Stop->Name = L"button_Stop";
			this->button_Stop->Size = System::Drawing::Size(50, 23);
			this->button_Stop->TabIndex = 2;
			this->button_Stop->Text = L"Stop";
			this->button_Stop->UseVisualStyleBackColor = true;
			this->button_Stop->Click += gcnew System::EventHandler(this, &MyForm::button_Stop_Click);
			// 
			// button_Clear
			// 
			this->button_Clear->Location = System::Drawing::Point(171, 0);
			this->button_Clear->Name = L"button_Clear";
			this->button_Clear->Size = System::Drawing::Size(50, 23);
			this->button_Clear->TabIndex = 3;
			this->button_Clear->Text = L"Clear";
			this->button_Clear->UseVisualStyleBackColor = true;
			this->button_Clear->Click += gcnew System::EventHandler(this, &MyForm::button_Clear_Click);
			// 
			// textBox_Hour
			// 
			this->textBox_Hour->Location = System::Drawing::Point(3, 29);
			this->textBox_Hour->Name = L"textBox_Hour";
			this->textBox_Hour->Size = System::Drawing::Size(29, 20);
			this->textBox_Hour->TabIndex = 4;
			this->textBox_Hour->Text = L"00";
			this->textBox_Hour->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox_Hour->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_Hour_KeyPress);
			// 
			// textBox_Minute
			// 
			this->textBox_Minute->Location = System::Drawing::Point(52, 29);
			this->textBox_Minute->Name = L"textBox_Minute";
			this->textBox_Minute->Size = System::Drawing::Size(29, 20);
			this->textBox_Minute->TabIndex = 5;
			this->textBox_Minute->Text = L"00";
			this->textBox_Minute->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox_Minute->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_Minute_KeyPress);
			// 
			// textBox_Second
			// 
			this->textBox_Second->Location = System::Drawing::Point(104, 29);
			this->textBox_Second->Name = L"textBox_Second";
			this->textBox_Second->Size = System::Drawing::Size(29, 20);
			this->textBox_Second->TabIndex = 6;
			this->textBox_Second->Text = L"00";
			this->textBox_Second->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox_Second->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_Second_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"h :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(81, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"m :";
			// 
			// textBox_Repeat
			// 
			this->textBox_Repeat->Location = System::Drawing::Point(3, 55);
			this->textBox_Repeat->Name = L"textBox_Repeat";
			this->textBox_Repeat->Size = System::Drawing::Size(29, 20);
			this->textBox_Repeat->TabIndex = 9;
			this->textBox_Repeat->Text = L"0";
			this->textBox_Repeat->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox_Repeat->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_Repeat_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"- repeat: ";
			// 
			// button_Pause
			// 
			this->button_Pause->Enabled = false;
			this->button_Pause->Location = System::Drawing::Point(59, 0);
			this->button_Pause->Name = L"button_Pause";
			this->button_Pause->Size = System::Drawing::Size(50, 23);
			this->button_Pause->TabIndex = 11;
			this->button_Pause->Text = L"Pause";
			this->button_Pause->UseVisualStyleBackColor = true;
			this->button_Pause->Click += gcnew System::EventHandler(this, &MyForm::button_Pause_Click);
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label_CountRepeat);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBox_Minute);
			this->panel1->Controls->Add(this->button_Start);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button_Pause);
			this->panel1->Controls->Add(this->textBox_Repeat);
			this->panel1->Controls->Add(this->button_Stop);
			this->panel1->Controls->Add(this->button_Clear);
			this->panel1->Controls->Add(this->textBox_Second);
			this->panel1->Controls->Add(this->textBox_Hour);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 385);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(758, 80);
			this->panel1->TabIndex = 12;
			// 
			// label_CountRepeat
			// 
			this->label_CountRepeat->AutoSize = true;
			this->label_CountRepeat->Location = System::Drawing::Point(76, 58);
			this->label_CountRepeat->Name = L"label_CountRepeat";
			this->label_CountRepeat->Size = System::Drawing::Size(43, 13);
			this->label_CountRepeat->TabIndex = 13;
			this->label_CountRepeat->Text = L"endless";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(133, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(12, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"s";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label_Timer);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(758, 385);
			this->panel2->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(758, 465);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->RightToLeftLayout = true;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Loop Timer";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_Start_Click(System::Object^ sender, System::EventArgs^ e) {
		if (b_pause)
		{
			timer->Enabled = true;
			b_pause = false;
			button_Start->Enabled = false;
			button_Stop->Enabled = true;
			button_Pause->Enabled = true;
			button_Clear->Enabled = false;
		}
		else
		{
			t_hour = checkTime(textBox_Hour->Text);
			if (t_hour > 23) t_hour = 23;
			t_minute = checkTime(textBox_Minute->Text);
			if (t_minute > 59) t_minute = 59;
			t_second = checkTime(textBox_Second->Text);

			(t_hour >= 0 && t_hour < 10) ? textBox_Hour->Text = "0" + System::Convert::ToString(t_hour) : textBox_Hour->Text = System::Convert::ToString(t_hour);
			(t_minute >= 0 && t_minute < 10) ? textBox_Minute->Text = "0" + System::Convert::ToString(t_minute) : textBox_Minute->Text = System::Convert::ToString(t_minute);
			(t_second >= 0 && t_second < 10) ? textBox_Second->Text = "0" + System::Convert::ToString(t_second) : textBox_Second->Text = System::Convert::ToString(t_second);

			if (textBox_Repeat->Text == "") textBox_Repeat->Text = "0";
			auto i = System::Convert::ToInt32(textBox_Repeat->Text);
			if (i <= 0)
			{
				textBox_Repeat->Text = "0";
			}
			i_repeat = (textBox_Repeat->Text != "" || textBox_Repeat->Text == "0") ? System::Convert::ToInt32(textBox_Repeat->Text) : -1;
			if (i_repeat <= 0)
				label_CountRepeat->Text = "endless";
			else
				label_CountRepeat->Text = System::Convert::ToString(i_repeat);

			r_hour = t_hour;
			r_minute = t_minute;
			r_second = t_second;

			
			timer->Start();
			--i_repeat;

			button_Start->Enabled = false;
			button_Stop->Enabled = true;
			button_Pause->Enabled = true;
			button_Clear->Enabled = false;

			if (t_hour == 0 && t_minute == 0 && t_second == 0)
			{
				timer->Stop();
				i_repeat = -1;
				b_repeat = true;
				button_Start->Enabled = true;
				button_Stop->Enabled = false;
				button_Clear->Enabled = true;
				button_Pause->Enabled = false;
			}
		}
	}
private: System::Void button_Clear_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!timer->Enabled)
	{
		label_Timer->Text = "00:00:00";

		textBox_Hour->Text = "00";
		textBox_Minute->Text = "00";
		textBox_Second->Text = "00";
		textBox_Repeat->Text = "0";

		t_hour = 0;
		t_minute = 0;
		t_second = 0;
		i_repeat = -1;
		label_CountRepeat->Text = "endless";

		b_repeat = true;
		button_Start->Enabled = true;
		button_Stop->Enabled = false;
		button_Pause->Enabled = false;
		this->BackColor = System::Drawing::SystemColors::Control;
	}
}
private: System::Void button_Stop_Click(System::Object^ sender, System::EventArgs^ e) {
	timer->Stop();
	i_repeat = 0;
	b_repeat = true;
	b_pause = false;
	button_Start->Enabled = true;
	button_Stop->Enabled = false;
	button_Clear->Enabled = true;
	button_Pause->Enabled = false;
	this->BackColor = System::Drawing::SystemColors::Control;
}
private: System::Void button_Pause_Click(System::Object^ sender, System::EventArgs^ e) {
	b_pause = true;
	timer->Enabled = false;
	button_Pause->Enabled = false;
	button_Start->Enabled = true;
	button_Clear->Enabled = false;
	this->BackColor = System::Drawing::SystemColors::Control;
}
private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
	
		if(b_repeat)
			this->BackColor = System::Drawing::Color::LimeGreen;
		else
			this->BackColor = System::Drawing::SystemColors::Control;
		(t_hour >= 0 && t_hour < 10) ? hour = "0" + System::Convert::ToString(t_hour) : hour = System::Convert::ToString(t_hour);
		(t_minute >= 0 && t_minute < 10) ? minute = "0" + System::Convert::ToString(t_minute) : minute = System::Convert::ToString(t_minute);
		(t_second >= 0 && t_second < 10) ? second = "0" + System::Convert::ToString(t_second) : second = System::Convert::ToString(t_second);
		label_Timer->Text = hour + ":" + minute + ":" + second;

		if (t_hour || t_minute || t_second)
		{
			if (t_second >= 0)
			{
				--t_second;
				b_repeat = false;
			}
			if (t_second < 0 && (t_minute > 0 || t_hour > 0))
			{
				--t_minute;
				t_second = 59;
			}
			if (t_minute < 0 && t_hour > 0)
			{
				--t_hour;
				t_minute = 59;;
			}
		}
		else
		{
			this->BackColor = System::Drawing::Color::OrangeRed;
			if (i_repeat > 0)
			{
				label_CountRepeat->Text = System::Convert::ToString(i_repeat);
				--i_repeat;
			}
			else if (i_repeat == 0)
			{
				label_CountRepeat->Text = System::Convert::ToString(i_repeat);
				timer->Stop();
				button_Start->Enabled = true;
				button_Stop->Enabled = false;
				button_Clear->Enabled = true;
			}
			t_hour = r_hour;
			t_minute = r_minute;
			t_second = r_second;
			b_repeat = true;
		}
}

private: System::Void textBox_Hour_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!c->IsControl(e->KeyChar) && !c->IsDigit(e->KeyChar) &&	(e->KeyChar != '.'))
	{
		e->Handled = true;
	}

	// only allow one decimal point
	if ((e->KeyChar == '.'))// && (textBox_Hour->Text->IndexOf('.') > -1))
	{
		e->Handled = true;
	}
}
private: System::Void textBox_Minute_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!c->IsControl(e->KeyChar) && !c->IsDigit(e->KeyChar) && (e->KeyChar != '.'))
	{
		e->Handled = true;
	}

	// only allow one decimal point
	if ((e->KeyChar == '.'))// && (textBox_Hour->Text->IndexOf('.') > -1))
	{
		e->Handled = true;
	}
}
private: System::Void textBox_Second_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!c->IsControl(e->KeyChar) && !c->IsDigit(e->KeyChar) && (e->KeyChar != '.'))
	{
		e->Handled = true;
	}

	// only allow one decimal point
	if ((e->KeyChar == '.'))// && (textBox_Hour->Text->IndexOf('.') > -1))
	{
		e->Handled = true;
	}
}
private: System::Void textBox_Repeat_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!c->IsControl(e->KeyChar) && !c->IsDigit(e->KeyChar) && (e->KeyChar != '.'))
	{
		e->Handled = true;
	}

	// only allow one decimal point
	if ((e->KeyChar == '.'))// && (textBox_Hour->Text->IndexOf('.') > -1))
	{
		e->Handled = true;
	}
}
};
}
