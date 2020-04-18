#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace MyWindowsForms {

	public ref class ChildForm : public Form
	{
	public:
		ChildForm(void);
		ChildForm(String^ text);

	protected:
		~ChildForm();

	private:
		System::ComponentModel::Container ^components;
		Label^ label1;
		void InitializeComponent(String^ label1Text);
		void ChildForm_Load(Object^  sender, EventArgs^  e);
	};
}
