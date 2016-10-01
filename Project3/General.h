#pragma once
#include "GUser.h"
#include "GFacture.h"
#include "GClient.h"
#include "statistque.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace std;

	public ref class General : public System::Windows::Forms::Form
	{
	public:
		General(void)
		{
			InitializeComponent();

			
		}
		
	protected:
		~General()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  GUser_btn;
	protected:


	private: System::Windows::Forms::Button^  GFacture_btn;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  GClient_btn;

	public: System::Windows::Forms::Label^  Username;
	
	public: System::Windows::Forms::Label^  Time;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button5;




	public: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ToolTip^  GFacture_Info;
	private: System::Windows::Forms::Timer^  timer1;

	public:
	private:



	private: System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(General::typeid));
			this->GUser_btn = (gcnew System::Windows::Forms::Button());
			this->GFacture_btn = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->GClient_btn = (gcnew System::Windows::Forms::Button());
			this->Username = (gcnew System::Windows::Forms::Label());
			this->Time = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->GFacture_Info = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// GUser_btn
			// 
			this->GUser_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->GUser_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GUser_btn.BackgroundImage")));
			this->GUser_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->GUser_btn->FlatAppearance->BorderSize = 0;
			this->GUser_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GUser_btn->Location = System::Drawing::Point(109, 95);
			this->GUser_btn->Name = L"GUser_btn";
			this->GUser_btn->Size = System::Drawing::Size(275, 147);
			this->GUser_btn->TabIndex = 0;
			this->GFacture_Info->SetToolTip(this->GUser_btn, L"La Gestion des Comptes Utilisateurs");
			this->GUser_btn->UseVisualStyleBackColor = false;
			this->GUser_btn->Click += gcnew System::EventHandler(this, &General::GUser_btn_Click);
			// 
			// GFacture_btn
			// 
			this->GFacture_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->GFacture_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GFacture_btn.BackgroundImage")));
			this->GFacture_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->GFacture_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->GFacture_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GFacture_btn->Location = System::Drawing::Point(409, 95);
			this->GFacture_btn->Name = L"GFacture_btn";
			this->GFacture_btn->Size = System::Drawing::Size(275, 147);
			this->GFacture_btn->TabIndex = 1;
			this->GFacture_Info->SetToolTip(this->GFacture_btn, L"La Gestion des Factures des Clients Inscrits");
			this->GFacture_btn->UseVisualStyleBackColor = false;
			this->GFacture_btn->Click += gcnew System::EventHandler(this, &General::GFacture_btn_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(109, 256);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(275, 147);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &General::button3_Click);
			// 
			// GClient_btn
			// 
			this->GClient_btn->BackColor = System::Drawing::Color::Transparent;
			this->GClient_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GClient_btn.BackgroundImage")));
			this->GClient_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->GClient_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GClient_btn->Location = System::Drawing::Point(409, 256);
			this->GClient_btn->Name = L"GClient_btn";
			this->GClient_btn->Size = System::Drawing::Size(275, 147);
			this->GClient_btn->TabIndex = 3;
			this->GFacture_Info->SetToolTip(this->GClient_btn, L"La Gestion des Clients ");
			this->GClient_btn->UseVisualStyleBackColor = false;
			this->GClient_btn->Click += gcnew System::EventHandler(this, &General::GClient_btn_Click);
			// 
			// Username
			// 
			this->Username->AutoSize = true;
			this->Username->BackColor = System::Drawing::Color::Transparent;
			this->Username->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Username->ForeColor = System::Drawing::Color::White;
			this->Username->Location = System::Drawing::Point(71, 9);
			this->Username->Name = L"Username";
			this->Username->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Username->Size = System::Drawing::Size(81, 20);
			this->Username->TabIndex = 4;
			this->Username->Text = L"UserName";
			// 
			// Time
			// 
			this->Time->AutoSize = true;
			this->Time->BackColor = System::Drawing::Color::Transparent;
			this->Time->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->Time->Location = System::Drawing::Point(444, 10);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(0, 20);
			this->Time->TabIndex = 6;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(12, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(51, 54);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderColor = System::Drawing::SystemColors::WindowFrame;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(796, 7);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(32, 32);
			this->button5->TabIndex = 8;
			this->GFacture_Info->SetToolTip(this->button5, L"Se Déconnecter");
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &General::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->label1->Location = System::Drawing::Point(72, 35);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label1->Size = System::Drawing::Size(76, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"UserName";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &General::timer1_Tick);
			// 
			// General
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(840, 470);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Time);
			this->Controls->Add(this->Username);
			this->Controls->Add(this->GClient_btn);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->GFacture_btn);
			this->Controls->Add(this->GUser_btn);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"General";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Général";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &General::General_FormClosing);
			this->Load += gcnew System::EventHandler(this, &General::General_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	



private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (MessageBox::Show("Est-ce que vous voulez vraiment Quitter ?", "Quitter", MessageBoxButtons::YesNo,
				 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
				 Application::Exit();
			 }
}



private: System::Void GClient_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 GClient^ x = gcnew GClient();
			 x->ShowDialog();
			 if (!x->Visible)
			 {
				 x->Close();
				 this->Show();
			 }
}
private: System::Void GFacture_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 GFacture^ x = gcnew GFacture();
			 x->ShowDialog();
			 if (!x->Visible)
			 {
				 x->Close();
				 this->Show();
			 }
}
private: System::Void GUser_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 GUser^ x = gcnew GUser();
			 x->ShowDialog();
			 if (!x->Visible)
			 {
				 x->Close();
				 this->Show();
			 }
}
private: System::Void General_Load(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void General_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 
				 Application::Exit();
				 
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 statistque^ x = gcnew statistque();
			 x->ShowDialog();
			 if (!x->Visible)
			 {
				 x->Close();
				 this->Show();
			 }
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->Time->Text = DateTime::Now.ToString();
}
};
}
