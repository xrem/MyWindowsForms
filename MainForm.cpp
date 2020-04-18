#include "MainForm.h"
#include "ChildForm.h"

MyWindowsForms::MainForm::MainForm()
{
	InitializeComponent();
}

MyWindowsForms::MainForm::~MainForm()
{
	if (components)
	{
		delete components;
	}
}

void MyWindowsForms::MainForm::InitializeComponent(void)
{
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->textBox1 = (gcnew System::Windows::Forms::TextBox());
	this->textBox2 = (gcnew System::Windows::Forms::TextBox());
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->SuspendLayout();
	// 
	// button1
	// 
	this->button1->Location = System::Drawing::Point(12, 12);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(123, 49);
	this->button1->TabIndex = 0;
	this->button1->Text = L"Просто создать окно";
	this->button1->UseVisualStyleBackColor = true;
	this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
	// 
	// textBox1
	// 
	this->textBox1->Location = System::Drawing::Point(12, 80);
	this->textBox1->Name = L"textBox1";
	this->textBox1->Size = System::Drawing::Size(260, 20);
	this->textBox1->TabIndex = 1;
	// 
	// textBox2
	// 
	this->textBox2->Location = System::Drawing::Point(12, 112);
	this->textBox2->Name = L"textBox2";
	this->textBox2->Size = System::Drawing::Size(260, 20);
	this->textBox2->TabIndex = 2;
	// 
	// button2
	// 
	this->button2->Location = System::Drawing::Point(149, 12);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(123, 49);
	this->button2->TabIndex = 3;
	this->button2->Text = L"Передать вторую строку";
	this->button2->UseVisualStyleBackColor = true;
	this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
	// 
	// MainForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(284, 144);
	this->Controls->Add(this->button2);
	this->Controls->Add(this->textBox2);
	this->Controls->Add(this->textBox1);
	this->Controls->Add(this->button1);
	this->Name = L"MainForm";
	this->Text = L"MainForm";
	this->ResumeLayout(false);
	this->PerformLayout();

}

String^ MyWindowsForms::MainForm::GetFirstLine()
{
	return this->textBox1->Text;
}

String^ MyWindowsForms::MainForm::GetSecondLine()
{
	return this->textBox2->Text;
}

void MyWindowsForms::MainForm::button1_Click(Object^ sender, EventArgs^ e)
{
	ChildForm^ child_form = gcnew ChildForm();
	child_form->ShowDialog(this);
}

void MyWindowsForms::MainForm::button2_Click(Object^ sender, EventArgs^ e)
{
	ChildForm^ child_form = gcnew ChildForm(this->textBox2->Text);
	child_form->ShowDialog(this);
}
