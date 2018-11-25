#pragma once
#include "Multitude.h"

bool activeB1 = false, activeB2 = false;
int firstM = -1, secondM = -1;
int sizeLine = 0;
int ifindex = 0;
Multi* multiLine = new Multi[sizeLine];;

namespace V9Multitude {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;


	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;



	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(44, 183);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Создание пустого множества";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(215, 111);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Включение элемента";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(215, 157);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(172, 40);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Исключение элемента";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(215, 203);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(172, 40);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Проверка вхождения элемента в множество";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Main::button4_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(44, 45);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(144, 132);
			this->listBox1->TabIndex = 10;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(44, 229);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(144, 40);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Сохранить множества";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Main::button5_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(215, 85);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(172, 20);
			this->textBox1->TabIndex = 12;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(230, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 17);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Работа с элементом";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(198, 20);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Сохранённые множества";
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(413, 45);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(80, 40);
			this->button10->TabIndex = 18;
			this->button10->Text = L"Выделить первое м.";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Main::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(505, 45);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(80, 40);
			this->button11->TabIndex = 19;
			this->button11->Text = L"Выделить второе м.";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Main::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(44, 275);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(144, 40);
			this->button12->TabIndex = 20;
			this->button12->Text = L"Загрузить множества";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Main::button12_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Enabled = false;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(413, 111);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(64, 64);
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Main::button6_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Enabled = false;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(519, 111);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(64, 64);
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Main::button7_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Enabled = false;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(413, 203);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(64, 64);
			this->pictureBox3->TabIndex = 23;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Main::button8_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Enabled = false;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(519, 203);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(64, 64);
			this->pictureBox4->TabIndex = 24;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Main::button9_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(608, 328);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Main";
			this->Text = L"Множества целых чисел из диапазона 0-n";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	try
	{
		ofstream file;
		ifstream file1("Multi.txt");
		if (sizeLine == 0)
		{
			throw 323;
		}
		else
		{
			int ind = 0;
			file.open("Multi.txt", ios_base::out | ios_base::trunc);
			while (ind < sizeLine)
			{
				for (int index = 0; index < multiLine[ind].get_size(); index++)
					if (multiLine[ind].get_elMassiv(index) == true)
						file << index << ' ';
				file << ";";
				ind++;
			}
			file.close();
			MessageBox::Show("Множества сохранены");
		}
	}
	catch (int)
	{
		MessageBox::Show("Нет множеств");
	}
}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b')
	{
		e->Handled = true;
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e)
{
	try
	{
		if (listBox1->SelectedIndex == -1)
		{
			firstM = -1;
			throw firstM;
		}
		else
		{
			activeB1 = true;
			button10->Text = "Множ. №" + Convert::ToString(listBox1->SelectedIndex + 1);
			if (activeB1 && activeB2)
			{
				pictureBox1->Enabled = true;
				pictureBox2->Enabled = true;
				pictureBox3->Enabled = true;
				pictureBox4->Enabled = true;
			}
			firstM = listBox1->SelectedIndex;
		}
	}
	catch (int)
	{
		if (firstM == -1)
			MessageBox::Show("Множество не выбрано");
	}
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e)
{
	try
	{
		if (listBox1->SelectedIndex == -1)
		{
			secondM = -1;
			throw secondM;
		}
		else
		{
			activeB2 = true;
			button11->Text = "Множ. №" + Convert::ToString(listBox1->SelectedIndex + 1);
			if (activeB1 && activeB2)
			{
				pictureBox1->Enabled = true;
				pictureBox2->Enabled = true;
				pictureBox3->Enabled = true;
				pictureBox4->Enabled = true;
			}
			secondM = listBox1->SelectedIndex;
		}
	}
	catch (int)
	{
		if (secondM == -1)
			MessageBox::Show("Множество не выбрано");
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	multiLine = upSize(multiLine, sizeLine, sizeLine + 1);
	listBox1->Items->Add(Convert::ToString(sizeLine));
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	try
	{
		if (listBox1->SelectedIndex == -1)
			throw 505;
		else
			if (textBox1->Text == "")
				throw 506;
			else
				if (INT32_MAX < Convert::ToInt32(textBox1->Text)) throw 507;
				else
				{
					multiLine[listBox1->SelectedIndex].addElement(Convert::ToInt32(textBox1->Text));
					MessageBox::Show("Элемент добавлен");
				}
	}
	catch (int a)
	{
		if (a == 505)
			MessageBox::Show("Множество не выбрано");
		if (a == 506)
			MessageBox::Show("Элемент, который нужно добавить, не указан");
		if (a == 507)
			MessageBox::Show("Этот элемент нельзя сохранить");
	}
}
					  
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
{
	try
	{
		if (listBox1->SelectedIndex == -1)
			throw 505;
		else
			if (textBox1->Text == "")
				throw 506;
			else
			{
				multiLine[listBox1->SelectedIndex].delElement(Convert::ToInt32(textBox1->Text));
				MessageBox::Show("Элемент удален");
			}
	}
	catch (int a)
	{
		if (a == 505)
			MessageBox::Show("Множество не выбрано");
		if (a == 506)
			MessageBox::Show("Элемент, который нужно добавить, не указан");
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
{
	try
	{
		if (listBox1->SelectedIndex == -1)
			throw 505;
		else
			if (textBox1->Text == "")
				throw 506;
			else
			{
				if (multiLine[listBox1->SelectedIndex].searchElement(Convert::ToInt32(textBox1->Text)))
					MessageBox::Show("Множество содержит указанный элемент");
				else
					MessageBox::Show("Множество не содержит указанный элемент");
			}
	}
	catch (int a)
	{
		if (a == 505)
			MessageBox::Show("Множество не выбрано");
		if (a == 506)
			MessageBox::Show("Элемент, который нужно добавить, не указан");
	}
}
void buttonOff()
{
	pictureBox1->Enabled = false;
	pictureBox2->Enabled = false;
	pictureBox3->Enabled = false;
	pictureBox4->Enabled = false;
	activeB1 = false;
	activeB2 = false;
	button10->Text = "Выделить первое м.";
	button11->Text = "Выделить второе м.";
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	multiLine = upSize(multiLine, sizeLine, sizeLine + 1);
	multiLine[sizeLine - 1].operationPlus(multiLine[firstM], multiLine[secondM]);
	listBox1->Items->Add(Convert::ToString(sizeLine));
	buttonOff();
	listBox1->SelectedIndex = -1;
	
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
{
	multiLine = upSize(multiLine, sizeLine, sizeLine + 1);
	multiLine[sizeLine - 1].operationX(multiLine[firstM], multiLine[secondM]);
	listBox1->Items->Add(Convert::ToString(sizeLine));
	buttonOff();
	listBox1->SelectedIndex = -1;
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e)
{
	multiLine = upSize(multiLine, sizeLine, sizeLine + 1);
	multiLine[sizeLine - 1].operationMinus(multiLine[firstM], multiLine[secondM]);
	listBox1->Items->Add(Convert::ToString(sizeLine));
	buttonOff();
	listBox1->SelectedIndex = -1;
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (multiLine[firstM] == multiLine[secondM]) MessageBox::Show("Множества равны");
	else MessageBox::Show("Множества не равны");
	buttonOff();
}
		 template <typename Stream>
		 bool read_num(Stream &stream, int &number)
		 {
			 char c = 0;
			 std::string buf;
			 while (true)
			 {
				 stream.read(&c, 1);
				 if (c == ';') ifindex++;
				 if (c == ' ' || stream.eof())
				 {
					 if (!buf.empty())
					 {
						 number = atoi(buf.c_str());
						 return true;
					 }
				 }
				 else
				 {
					 buf += c;
				 }
			 }
			 return false;
		 }

	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ifstream digits;
		digits.open("Multi.txt", ios_base::in);
		int num = 0;
		while (read_num(digits, num))
		{
			multiLine[ifindex].addElement(num);
		}
		digits.close();
	}
};
}