#pragma once
#include "Standard.h"
#include "Time_calc.h"
#include "Number_system.h"
#include "Log_calc.h"

namespace Logvar10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Calc_valdt20
	/// </summary>
	public ref class Calc_valdt20 : public System::Windows::Forms::Form
	{
	public:
		Calc_valdt20(void)
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
		~Calc_valdt20()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;







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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(243, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Калькулятор";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label2->Location = System::Drawing::Point(278, 367);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"by vladt20";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(206, 75);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Стандартный калькулятор";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Calc_valdt20::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(206, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(199, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Время";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Calc_valdt20::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(206, 133);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(199, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Системы счисления";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Calc_valdt20::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(206, 162);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(199, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Калькулятор логарифмов";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Calc_valdt20::button4_Click);
			// 
			// Calc_valdt20
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 391);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Calc_valdt20";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calc_valdt20";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Standard^ standard_form = gcnew Standard();//Создаём новый экземпляр
	standard_form->Show();//Открываем форму со стандартным калькулятором
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Time_calc^ time_form = gcnew Time_calc();//Создаём новый экземпляр
	time_form->Show();//Открываем форму с калькулятором времени
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Number_system^ numsys_form = gcnew Number_system();//Создаём новый экземпляр
	numsys_form->Show();//Открываем форму с калькулятором систем счисления
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Log_calc^ log_form = gcnew Log_calc();//Создаём новый экземпляр
	log_form->Show();//Открываем форму с логарифмами
}
};
}
