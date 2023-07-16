#pragma once
#ifndef MYFORM_H
#define MYFORM_H
#include <MyForm1.h>
#endif



using namespace System::Text::RegularExpressions;
using namespace System;
using namespace System::Net;
using namespace System::Text;
using namespace System::Windows::Forms;
using namespace System::Net::Sockets;
using namespace System::Diagnostics;
using namespace System::IO;
using namespace hostlistns;



namespace gears3Launcher {

	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form





	 {
	 public:
		MyForm(void)
		{
			
			
			InitializeComponent();

			
			
			
			
		}
		
	
		String^ stWorkingDirectory;
	
		

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
	internal: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Button^ button2;
	private:
	private: System::Windows::Forms::TextBox^ textBox1;
	public:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;

	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button4;
	 private: System::Windows::Forms::Button^ button5;







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
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			   this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			   this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // button1
			   // 
			   this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->button1->AutoSize = true;
			   this->button1->BackColor = System::Drawing::Color::Transparent;
			   this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			   this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			   this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Unispace", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->ForeColor = System::Drawing::Color::Red;
			   this->button1->Location = System::Drawing::Point(514, 431);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(113, 83);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Host Lobby";
			   this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			   this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				   L"Horde", L"SP", L"Siege", L"TDM", L"Annex", L"Wingman",
					   L"CTL", L"KOTH", L"TDM_Newb_Content"
			   });
			   this->comboBox1->Location = System::Drawing::Point(387, 431);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(121, 21);
			   this->comboBox1->TabIndex = 1;
			   this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::Color::Transparent;
			   this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Unispace", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::Color::Red;
			   this->label1->Location = System::Drawing::Point(249, 431);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(116, 25);
			   this->label1->TabIndex = 4;
			   this->label1->Text = L"Gamemode";
			   this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::Transparent;
			   this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Unispace", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::Color::Red;
			   this->label2->Location = System::Drawing::Point(249, 454);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(51, 25);
			   this->label2->TabIndex = 5;
			   this->label2->Text = L"Map";
			   // 
			   // button2
			   // 
			   this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->button2->AutoSize = true;
			   this->button2->BackColor = System::Drawing::Color::Transparent;
			   this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			   this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			   this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Unispace", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button2->ForeColor = System::Drawing::Color::Red;
			   this->button2->Location = System::Drawing::Point(130, 431);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(113, 83);
			   this->button2->TabIndex = 6;
			   this->button2->Text = L"Join Game";
			   this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			   this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			   // 
			   // textBox1
			   // 
			   this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->textBox1->Location = System::Drawing::Point(12, 483);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(100, 20);
			   this->textBox1->TabIndex = 7;
			   this->textBox1->Text = L"12";
			   this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Unispace", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->ForeColor = System::Drawing::Color::Red;
			   this->label3->Location = System::Drawing::Point(6, 454);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(118, 23);
			   this->label3->TabIndex = 8;
			   this->label3->Text = L"Server IP";
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(238, 33);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(308, 20);
			   this->textBox2->TabIndex = 9;
			   this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::Color::FloralWhite;
			   this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			   this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			   this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button3->Location = System::Drawing::Point(552, 33);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(75, 20);
			   this->button3->TabIndex = 10;
			   this->button3->Text = L"Browse";
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Unispace", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->ForeColor = System::Drawing::Color::Red;
			   this->label4->Location = System::Drawing::Point(304, 9);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(223, 15);
			   this->label4->TabIndex = 11;
			   this->label4->Text = L"Select the gears 3 exe file";
			   this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click_1);
			   // 
			   // openFileDialog1
			   // 
			   this->openFileDialog1->FileName = L"openFileDialog1";
			   // 
			   // comboBox2
			   // 
			   this->comboBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->comboBox2->FormattingEnabled = true;
			   this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(52) {
				   L"GridlockG3", L"Academy", L"Azura", L"Aftermath",
					   L"AllfathersGarden", L"Artillery", L"Azura", L"Badlands", L"BloodDrive", L"Canals", L"CanalsG3", L"Catacombs", L"Checkout", L"ClocktowerG3",
					   L"Courtyard", L"Cove", L"DayOne", L"Depot", L"DryDock", L"EscalationG3", L"Flood", L"Garden", L"GoldRush", L"GridlockSandStorm",
					   L"Hotel", L"Haven", L"JacintoG3", L"MansionG3", L"MausoleumG3", L"Mercy", L"Mercy2", L"MuseumG3", L"Mercy", L"OldTown", L"Overpass",
					   L"Process", L"Rampart", L"RavenDown", L"River", L"RooftopsG3", L"Ruin", L"RustLung", L"SandBar", L"Seasick2", L"Security", L"Stasis",
					   L"Subway", L"Swamp", L"Thrashball", L"Trenches", L"TyroStation", L"WarMachine"
			   });
			   this->comboBox2->Location = System::Drawing::Point(387, 460);
			   this->comboBox2->Name = L"comboBox2";
			   this->comboBox2->Size = System::Drawing::Size(121, 21);
			   this->comboBox2->TabIndex = 13;
			   this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged_1);
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->BackColor = System::Drawing::Color::Transparent;
			   this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Unispace", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->ForeColor = System::Drawing::Color::Red;
			   this->label5->Location = System::Drawing::Point(249, 479);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(64, 25);
			   this->label5->TabIndex = 14;
			   this->label5->Text = L"Bots";
			   // 
			   // checkBox1
			   // 
			   this->checkBox1->AutoSize = true;
			   this->checkBox1->Location = System::Drawing::Point(387, 485);
			   this->checkBox1->Name = L"checkBox1";
			   this->checkBox1->Size = System::Drawing::Size(80, 17);
			   this->checkBox1->TabIndex = 15;
			   this->checkBox1->Text = L"checkBox1";
			   this->checkBox1->UseVisualStyleBackColor = true;
			   this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			   // 
			   // button4
			   // 
			   this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			   this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				   static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			   this->button4->Font = (gcnew System::Drawing::Font(L"Unispace", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button4->ForeColor = System::Drawing::Color::White;
			   this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			   this->button4->Location = System::Drawing::Point(10, 9);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(222, 44);
			   this->button4->TabIndex = 16;
			   this->button4->Text = L"Server Browser";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			   // 
			   // button5
			   // 
			   this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button5->ForeColor = System::Drawing::Color::Lime;
			   this->button5->Location = System::Drawing::Point(552, 2);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(75, 29);
			   this->button5->TabIndex = 17;
			   this->button5->Text = L"Read Me";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_2);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->ClientSize = System::Drawing::Size(633, 517);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->checkBox1);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->comboBox2);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->comboBox1);
			   this->Controls->Add(this->button1);
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->MaximizeBox = false;
			   this->Name = L"MyForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Gears 3 Launcher";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
		 

	
		

#pragma endregion
	private: String^ getWorkingDirectory(String^ executablepath) {
		int lastSlashIndex;


		for (int i = 0;i < executablepath->Length;i++) {
			char character = executablepath[i];

			if (character == '\\') {
				lastSlashIndex = i;
			}
		}
		return executablepath->Substring(0, lastSlashIndex);
	}

		   String^ botsArg = "";

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {
			botsArg = "?bots=9";  // how many bots i think default will be 9
		}
		else {
			botsArg = "";  // if not checked add nothing should work right.
		}
	}
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		//String^ stMap = listBox1->SelectedIndex;
		String^ stGameMode = comboBox1->Text;
		String^ stexecutable = textBox2->Text;
		String^ stMap = comboBox2->Text;



		MessageBox::Show("Server will open shortly. Do not join the Server until it fully initializes.If you end up at the title screen it most likely means the server was not up yet or you need to click on the server and press enter.");



		//String^ stWorkingDirectory = "E:\\GearsofwarBuild\\Gears 3 PC-001\\Gears 3 PC\\Gears 3 Jacinto v1.1.1\\Binaries\\Win64";
		//Check the output of both strings
		//MessageBox::Show( stexecutable + " -join " + stipaddress);


	 stWorkingDirectory = getWorkingDirectory(stexecutable);

	
		



		//MessageBox::Show(stWorkingDirectory);

		Process^ process = gcnew Process;
		process->StartInfo->FileName = stexecutable;
		process->StartInfo->Arguments = " server MP_" + stMap + "?game=" + "GearGameContent.GearGame" + stGameMode + botsArg;
		process->StartInfo->WorkingDirectory = stWorkingDirectory;
		process->Start();
		
		//MessageBox::Show(process->StartInfo->Arguments); //messagebox for debugging



		std::thread serverThread(serverstatus123);
		serverThread.detach();






		//MessageBox::Show(getpublicip()); //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!Returns Public IP!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	 }

		
		



		   static void serverstatus123() {




			   while (true) {

				   // initialize socket
				   WSADATA wsaData;
				   if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
					   std::cerr << "WSAStartup failed" << std::endl;

				   }

				   // Create socket
				   SOCKET sock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
				   if (sock == INVALID_SOCKET) {
					   std::cerr << "socket creation failed with error code: " << WSAGetLastError() << std::endl;
					   WSACleanup();

				   }

				   // Set up socket
				   sockaddr_in serverAddr;
				   serverAddr.sin_family = AF_INET;
				   serverAddr.sin_port = htons(1000);  // Port of server
				   serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");  // ip of server

				   // Send a query to the server to check if it's up
				   const char* query = "\\deeznuts\\";
				   if (sendto(sock, query, strlen(query), 0, (sockaddr*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR) {
					   std::cerr << "sendto failed with error code: " << WSAGetLastError() << std::endl;
					   closesocket(sock);
					   WSACleanup();

				   }

				   // Wait for a response from the server
				   char response[1024];
				   sockaddr_in clientAddr;
				   int clientAddrLen = sizeof(clientAddr);
				   int bytesReceived = recvfrom(sock, response, sizeof(response) - 1, 0, (sockaddr*)&clientAddr, &clientAddrLen);
				   if (bytesReceived == SOCKET_ERROR) {
					   std::cerr << "recvfrom failed with error code: " << WSAGetLastError() << std::endl;
					   //MessageBox::Show("Please make sure that the server is running and it is listening on port 1000. You may need to disable your firewall");
					   closesocket(sock);
					   WSACleanup();
				   }
				   else {
					   response[bytesReceived] = '\0';
					   System::String^ string_object = gcnew System::String(response);
					   sendipinformation(getpublicip(),"sera.ini");
					   closesocket(sock);
					   WSACleanup();
				   }





				   // Loop so it can check the server again 2 seconds
				   std::this_thread::sleep_for(std::chrono::seconds(2));
			   }

			  







		   }



	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {








	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


		openFileDialog1->Filter = " executable|*.exe; ";
		openFileDialog1->ShowDialog();
		textBox2->SelectedText = openFileDialog1->FileName;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {




		String^ stipaddress = textBox1->Text;
		String^ stexecutable = textBox2->Text;

		//String^ stWorkingDirectory = "E:\\GearsofwarBuild\\Gears 3 PC-001\\Gears 3 PC\\Gears 3 Jacinto v1.1.1\\Binaries\\Win64";
		//Check the output of both strings
		//MessageBox::Show( stexecutable + " -join " + stipaddress);



		String^ stWorkingDirectory = getWorkingDirectory(stexecutable);
		//MessageBox::Show(stWorkingDirectory);



		Process^ process = gcnew Process;
		process->StartInfo->FileName = stexecutable;
		process->StartInfo->Arguments = " " + stipaddress;
		process->StartInfo->WorkingDirectory = stWorkingDirectory;
		process->Start();

		//MessageBox::Show(process->StartInfo->Arguments);



	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {



	}
	private: System::Void comboBox2_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ stexecutable = textBox2->Text;
		stWorkingDirectory = getWorkingDirectory(stexecutable);







		std::thread hostlistthread(HostList::getHostList);
		hostlistthread.detach();

		// Create an instance of myform1
		MyForm1^ form1 = gcnew MyForm1();
		form1->executablePath = stWorkingDirectory;
		// Display myform1
		form1->Show();

		

	}


	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

		   size_t write_callback(char* ptr, size_t size, size_t nmemb, void* userdata) {
			   std::string* response = static_cast<std::string*>(userdata);
			   response->append(ptr, size * nmemb);
			   return size * nmemb;
		   }

		   static System::String^ getpublicip() {




			   // Initialize Winsock
			   WSADATA wsaData;
			   int result = WSAStartup(MAKEWORD(2, 2), &wsaData);
			   if (result != 0) {
				   std::cerr << "WSAStartup failed with error: " << result << std::endl;

			   }

			   // Create a socket
			   SOCKET sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
			   if (sock == INVALID_SOCKET) {
				   std::cerr << "Failed to create socket with error: " << WSAGetLastError() << std::endl;
				   WSACleanup();

			   }

			   // Resolve the IP address of ipinfo.io
			   struct addrinfo* result_list = nullptr;
			   struct addrinfo hints = {};
			   hints.ai_family = AF_INET;
			   hints.ai_socktype = SOCK_STREAM;
			   hints.ai_protocol = IPPROTO_TCP;
			   result = getaddrinfo("ipinfo.io", "http", &hints, &result_list);
			   if (result != 0) {
				   std::cerr << "getaddrinfo failed with error: " << result << std::endl;
				   closesocket(sock);
				   WSACleanup();

			   }

			   // Connect to ipinfo.io
			   result = connect(sock, result_list->ai_addr, static_cast<int>(result_list->ai_addrlen));
			   if (result == SOCKET_ERROR) {
				   std::cerr << "Failed to connect with error: " << WSAGetLastError() << std::endl;
				   closesocket(sock);
				   WSACleanup();

			   }

			   // Send an HTTP GET request for the IP address
			   std::string request = "GET /ip HTTP/1.1\r\nHost: ipinfo.io\r\nConnection: close\r\n\r\n";
			   result = send(sock, request.c_str(), static_cast<int>(request.size()), 0);
			   if (result == SOCKET_ERROR) {
				   std::cerr << "Failed to send data with error: " << WSAGetLastError() << std::endl;
				   closesocket(sock);
				   WSACleanup();

			   }

			   // Receive the response and extract the IP address
			   std::string response;
			   char buf[1024];
			   int bytes_received;
			   do {
				   bytes_received = recv(sock, buf, sizeof(buf), 0);
				   if (bytes_received > 0) {
					   response.append(buf, bytes_received);
				   }
			   } while (bytes_received > 0);

			   std::string ip_address;
			   std::size_t start_pos = response.find(":\"") + 2;
			   std::size_t end_pos = response.find("\"}");
			   ip_address = response.substr(start_pos, end_pos - start_pos);

			   std::cout << "Your external IP address is: " << ip_address << std::endl;

			   System::String^ sysStr = msclr::interop::marshal_as<System::String^>(ip_address);




			   //std::string str = msclr::interop::marshal_as<std::string>(sysStr);



			   System::String^ pattern = "(\\d{1,3}\\.){3}\\d{1,3}";

			   Regex^ rgx = gcnew Regex(pattern);
			   Match^ match = rgx->Match(sysStr);

			   return match->Value;






			   // Clean up
			   closesocket(sock);
			   WSACleanup();

		   }




	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {






	}


		   //static void sendipinformation(System::String^ ip, System::String^ filePath)
		   //{
			  // try {
				 //  // Create a new socket for the client
				 //  Socket^ client = gcnew Socket(AddressFamily::InterNetwork,
					//   SocketType::Stream, ProtocolType::Tcp);

				 //  // Parse the IP address and create an endpoint
				 //  IPAddress^ ipAddress = IPAddress::Parse(ip);
				 //  IPEndPoint^ remoteEP = gcnew IPEndPoint(ipAddress, 11000);

				 //  // Connect to the remote endpoint
				 //  client->Connect(remoteEP);

				 //  // Convert the file path to std::string
				 //  std::string stdFilePath = msclr::interop::marshal_as<std::string>(filePath);

				 //  // Read the contents of the file
				 //  std::ifstream fileStream(stdFilePath);

				 //  if (fileStream.is_open()) {
					//   std::stringstream buffer;
					//   buffer << fileStream.rdbuf();
					//   std::string fileContents = buffer.str();

					//   // Send the file contents along with the IP information
					//   client->Send(Encoding::UTF8->GetBytes(ip));
					//   client->Send(Encoding::UTF8->GetBytes(gcnew System::String(fileContents.c_str())));

					//   // Close the file stream
					//   fileStream.close();
				 //  }

				 //  // Shutdown and close the client socket
				 //  client->Shutdown(SocketShutdown::Both);
				 //  client->Close();
			  // }
			  // catch (System::Exception^ ex) {
				 //  // Handle any exceptions here
				 //  System::Console::WriteLine(ex->Message);
			  // }
		   //}




		  static void sendipinformation(System::String^ ip, System::String^ filepath)
		   {
			   __try {
				   Socket^ client = gcnew Socket(AddressFamily::InterNetwork,
					   SocketType::Stream, ProtocolType::Tcp);


				   IPAddress^ ipAddress = IPAddress::Parse("127.0.0.1");
				   IPEndPoint^ remoteEP = gcnew IPEndPoint(ipAddress, 11000);

				   client->Connect(remoteEP);



				   String^ message = getpublicip();
				   array<Byte>^ buffer = Encoding::UTF8->GetBytes(message);

				   client->Send(buffer);


				   client->Shutdown(SocketShutdown::Both);
				   client->Close();

			   }

			   __except (EXCEPTION_EXECUTE_HANDLER)
			   {

			   }

		   }




	






	private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {





	}
		 


private: System::Void button5_Click_2(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("-Please make sure to change your name in the sera.ini file.\n\n-Please Make sure that you are selecting the .exe under win64 and not trying to use a shortcut. \n\n-Please make sure that the server is fully initialized before trying to join it. \n\n-This currently has only been teted with Jacinto 1.12 and a heavely modified version of it. Any other version i cannot guarentee it will work. \n\n-As of right now you will need to modify any custom gamemodes you want that are not already listed and make any playlists you want via the .ini files.\n\n-Any questions contact g3ars0fwar on twitch.");



}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};


}


