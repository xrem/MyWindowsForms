#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace MyWindowsForms {
	public ref class MainForm : public Form
	{
	public:
		MainForm(void);
		String^ GetFirstLine();
		String^ GetSecondLine();

	protected:
		~MainForm();

	private:
		System::ComponentModel::Container ^components;
		TextBox^ textBox1;
		TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
			 Button^ button1;
		void InitializeComponent(void);
		void button1_Click(Object^ sender, EventArgs^ e);
		void button2_Click(Object^ sender, EventArgs^  e);
	};
}
