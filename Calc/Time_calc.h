#pragma once
#include "Time.h"

namespace Logvar10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Time_calc
	/// </summary>
	public ref class Time_calc : public System::Windows::Forms::Form
	{
	public:
		Time_calc(void)
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
		~Time_calc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label15;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Время 1:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(26, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(64, 52);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(26, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(111, 52);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(26, 20);
			this->textBox3->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(48, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(10, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L":";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(95, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(10, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L":";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"HH";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(65, 36);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"MM";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(116, 36);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"SS";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(299, 36);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"SS";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(248, 36);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(25, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"MM";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(202, 36);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(23, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"HH";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(278, 55);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(10, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L":";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(231, 55);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(10, 13);
			this->label11->TabIndex = 13;
			this->label11->Text = L":";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(294, 52);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(26, 20);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(247, 52);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(26, 20);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(199, 52);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(26, 20);
			this->textBox6->TabIndex = 10;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(196, 13);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 13);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Время 2:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Сложение", L"Вычитание", L"Умножить \"Время 1\" на n",
					L"Умножить \"Время 2\" на n", L"Разделить \"Время 1\" на n", L"Разделить \"Время 2\" на n"
			});
			this->comboBox1->Location = System::Drawing::Point(485, 47);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(153, 21);
			this->comboBox1->TabIndex = 18;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Time_calc::comboBox1_SelectedIndexChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(482, 32);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(60, 13);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Операция:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(16, 140);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 20;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(13, 124);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(62, 13);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Результат:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(394, 50);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(56, 20);
			this->textBox8->TabIndex = 22;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(377, 54);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(16, 13);
			this->label15->TabIndex = 23;
			this->label15->Text = L"n:";
			// 
			// Time_calc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(650, 171);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Time_calc";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Time_calc";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		//записываем значения из текстбоксов в переменные
		int h1 = Convert::ToInt16(textBox1->Text);
		int m1 = Convert::ToInt16(textBox2->Text);
		int s1 = Convert::ToInt16(textBox3->Text);
		Time time1(h1, m1, s1);
		int h2 = Convert::ToInt16(textBox6->Text);
		int m2 = Convert::ToInt16(textBox5->Text);
		int s2 = Convert::ToInt16(textBox4->Text);
		Time time2(h2, m2, s2);
		int n = Convert::ToInt16(textBox8->Text);

		//если часы, минуты и секунды удовлетворяют условиям, то выполняем действия, иначе выводим текст об ошибке
		if ((h1 <= 24 && h1 >= 0 && h2 <= 24 && h2 >= 0) &&
			(m1 <= 60 && m1 >= 0 && m2 <= 60 && m2 >= 0) &&
			(s1 <= 60 && s1 >= 0 && s2 <= 60 && s2 >= 0))
		{
			switch (comboBox1->SelectedIndex)//проверяем какое поле выбрано из комбобокса
			{
			case 0://сложение
				time1 += time2;
				textBox7->Text = Convert::ToString(time1.get_hours()) + ":" +
					Convert::ToString(time1.get_min()) + ":" +
					Convert::ToString(time1.get_sec());
				break;
			case 1://вычитание
				time1 -= time2;
				textBox7->Text = Convert::ToString(time1.get_hours()) + ":" +
					Convert::ToString(time1.get_min()) + ":" +
					Convert::ToString(time1.get_sec());
				break;
			case 2://умножить 1 на n
				time1 *= n;
				textBox7->Text = Convert::ToString(time1.get_hours()) + ":" +
					Convert::ToString(time1.get_min()) + ":" +
					Convert::ToString(time1.get_sec());
				break;
			case 3://умножить 2 на n
				time2 *= n;
				textBox7->Text = Convert::ToString(time2.get_hours()) + ":" +
					Convert::ToString(time2.get_min()) + ":" +
					Convert::ToString(time2.get_sec());
				break;
			case 4://разделить 1 на n
				if (n == 0)//проверека на деление на 0
				{
					textBox7->Text = "Error!";
					break;
				}
				time1 /= n;
				textBox7->Text = Convert::ToString(time1.get_hours()) + ":" +
					Convert::ToString(time1.get_min()) + ":" +
					Convert::ToString(time1.get_sec());
				break;
			case 5://разделить 2 на n
				if (n == 0)//проверка на деление на 0
				{
					textBox7->Text = "Error!";
					break;
				}
				time2 /= n;
				textBox7->Text = Convert::ToString(time2.get_hours()) + ":" +
					Convert::ToString(time2.get_min()) + ":" +
					Convert::ToString(time2.get_sec());
				break;
			}
		}
		else
		{
			textBox7->Text = "Неверный формат";
		}
	}
};
}
