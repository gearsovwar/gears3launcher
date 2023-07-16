#pragma once
#include <functional>
#include "gethostlist.h"


namespace gears3Launcher {

	
	


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace hostlistns;
	using namespace System::Diagnostics;


	public ref class MyForm1 : public System::Windows::Forms::Form
	{

	public:


		property String^ executablePath;





	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//


			



		}
		//constructor that is broke as shit
		

		/*MyForm1(gears3Launcher::MyForm^ FormInstance)
		{
			InitializeComponent();
			MyFormInstance = FormInstance;

		}*/





	protected:
	
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Threading::Thread^ hostListThread;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(402, 748);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 61);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Refresh button placeholder";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(408, 430);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Aqua;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(993, 821);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"MyForm1";
			this->Text = L"serverBrowser";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);

		}


		void AddLabelToTableLayoutPanel(Label^ label, TableLayoutPanel^ panel, int row, int column)
		{
			// set the label's anchor to top, bottom, left, and right to keep it in place
			label->Anchor = AnchorStyles::Top | AnchorStyles::Bottom | AnchorStyles::Left | AnchorStyles::Right;

			// add the label to the TableLayoutPanel at the specified row and column indices
			panel->Controls->Add(label, column, row);
		}

		
		






	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Create a button based on the value stored in HostList::serverData[0].get_ip_sys()
		Button^ dynamicButton = gcnew Button();
		dynamicButton->Text = "join";
		dynamicButton->Size = System::Drawing::Size(100, 30);
		dynamicButton->Location = System::Drawing::Point(10, 10);

		// Attach an event handler to the button
		dynamicButton->Click += gcnew System::EventHandler(this, &MyForm1::DynamicButton_Click);

		// Add the button to the form's controls
		this->Controls->Add(dynamicButton);
	}

private: System::Void DynamicButton_Click(System::Object^ sender, System::EventArgs^ e) {

	////Dynamic button do stuff
 //   Process^ process = gcnew Process;
	////process->StartInfo->FileName = executablePath;
	//process->StartInfo->Arguments = " " + HostList::serverData[0].get_ip_sys();
	////process->StartInfo->WorkingDirectory = executablePath;
	////process->Start();
	//MessageBox::Show(process->StartInfo->Arguments);
	
Button^ clickedButton = dynamic_cast<Button^>(sender);

  
	if (clickedButton != nullptr) {
		// Retrieve the text of the clicked button
		String^ buttonText = clickedButton->Text;
		if (HostList::serverData.size() > 0) {
			// Display a message with the clicked button's text
			MessageBox::Show(HostList::serverData[0].get_ip_sys());

		}


    	}

      




}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


	MessageBox::Show(executablePath);


}
};
}











