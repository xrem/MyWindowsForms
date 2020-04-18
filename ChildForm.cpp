#include "ChildForm.h"
#include "MainForm.h"

MyWindowsForms::ChildForm::ChildForm()
{
	InitializeComponent("");
}

MyWindowsForms::ChildForm::ChildForm(String^ text)
{
	InitializeComponent(text);
}

MyWindowsForms::ChildForm::~ChildForm()
{
	if (components)
	{
		delete components;
	}
}

void MyWindowsForms::ChildForm::InitializeComponent(String^ label1Text)
{
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->SuspendLayout();
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Location = System::Drawing::Point(12, 33);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(35, 13);
	this->label1->TabIndex = 0;
	this->label1->Text = label1Text;
	// 
	// ChildForm
	// 
	this->ClientSize = System::Drawing::Size(317, 76);
	this->Controls->Add(this->label1);
	this->Name = L"ChildForm";
	this->Text = L"Child window";
	if (System::String::IsNullOrWhiteSpace(label1Text)) {
		this->Load += gcnew System::EventHandler(this, &ChildForm::ChildForm_Load);
	}
	this->ResumeLayout(false);
	this->PerformLayout();

}

void MyWindowsForms::ChildForm::ChildForm_Load(Object^ sender, EventArgs^ e)
{
	MainForm^ owner = static_cast<MainForm^>(this->Owner);
	this->label1->Text = owner->GetUserText();
}
