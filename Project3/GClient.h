#pragma once
#include "AddClient.h"
#include "RemoveClient.h"
#include "SearchClient.h"
#include "UpdateClient.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GClient
	/// </summary>
	public ref class GClient : public System::Windows::Forms::Form
	{
	public:
		GClient(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  menu;
	protected:
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  edit;

	private: System::Windows::Forms::Button^  delete_btn;
	private: System::Windows::Forms::Button^  search_btn;


	private: System::Windows::Forms::Button^  AddUser_btn;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GClient::typeid));
			this->menu = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->delete_btn = (gcnew System::Windows::Forms::Button());
			this->search_btn = (gcnew System::Windows::Forms::Button());
			this->AddUser_btn = (gcnew System::Windows::Forms::Button());
			this->menu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menu
			// 
			this->menu->Controls->Add(this->label9);
			this->menu->Controls->Add(this->label8);
			this->menu->Controls->Add(this->label7);
			this->menu->Controls->Add(this->label6);
			this->menu->Controls->Add(this->label5);
			this->menu->Controls->Add(this->pictureBox1);
			this->menu->Controls->Add(this->label4);
			this->menu->Controls->Add(this->label3);
			this->menu->Controls->Add(this->label2);
			this->menu->Controls->Add(this->label1);
			this->menu->Controls->Add(this->edit);
			this->menu->Controls->Add(this->delete_btn);
			this->menu->Controls->Add(this->search_btn);
			this->menu->Controls->Add(this->AddUser_btn);
			this->menu->Location = System::Drawing::Point(45, 38);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(999, 444);
			this->menu->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(725, 302);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(247, 40);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Modifier toutes les Informations d\'un\r\n utilisateurs ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(230, 302);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(289, 40);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Utiliser cette fonctionalité pour Rechercher \r\nUn Client selon plusieurs Critéres"
				L" ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(726, 148);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(237, 40);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Supprimer un Client  definitivement\r\n du systéme GreenSoft";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(228, 150);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(197, 40);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Ajouter un Nouveau\r\nClient a la liste des adhérents\r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(52, 4);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 41);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Menu General";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(11, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 38);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &GClient::pictureBox1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(723, 260);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(175, 35);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Modifier Client";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(228, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(203, 35);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Rechercher Client";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(724, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 35);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Supprimer Client";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(228, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 35);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Ajouter Client";
			// 
			// edit
			// 
			this->edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->edit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"edit.BackgroundImage")));
			this->edit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->edit->FlatAppearance->BorderSize = 0;
			this->edit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->edit->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->edit->Location = System::Drawing::Point(579, 260);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(138, 105);
			this->edit->TabIndex = 22;
			this->edit->UseVisualStyleBackColor = false;
			this->edit->Click += gcnew System::EventHandler(this, &GClient::edit_Click);
			// 
			// delete_btn
			// 
			this->delete_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->delete_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"delete_btn.BackgroundImage")));
			this->delete_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delete_btn->FlatAppearance->BorderSize = 0;
			this->delete_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delete_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_btn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->delete_btn->Location = System::Drawing::Point(579, 106);
			this->delete_btn->Name = L"delete_btn";
			this->delete_btn->Size = System::Drawing::Size(138, 105);
			this->delete_btn->TabIndex = 21;
			this->delete_btn->UseVisualStyleBackColor = false;
			this->delete_btn->Click += gcnew System::EventHandler(this, &GClient::delete_btn_Click);
			// 
			// search_btn
			// 
			this->search_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->search_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_btn.BackgroundImage")));
			this->search_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->search_btn->FlatAppearance->BorderSize = 0;
			this->search_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_btn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->search_btn->Location = System::Drawing::Point(84, 260);
			this->search_btn->Name = L"search_btn";
			this->search_btn->Size = System::Drawing::Size(138, 105);
			this->search_btn->TabIndex = 20;
			this->search_btn->UseVisualStyleBackColor = false;
			this->search_btn->Click += gcnew System::EventHandler(this, &GClient::search_btn_Click);
			// 
			// AddUser_btn
			// 
			this->AddUser_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->AddUser_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddUser_btn.BackgroundImage")));
			this->AddUser_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddUser_btn->FlatAppearance->BorderSize = 0;
			this->AddUser_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->AddUser_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddUser_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddUser_btn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->AddUser_btn->Location = System::Drawing::Point(84, 106);
			this->AddUser_btn->Name = L"AddUser_btn";
			this->AddUser_btn->Size = System::Drawing::Size(138, 105);
			this->AddUser_btn->TabIndex = 19;
			this->AddUser_btn->UseVisualStyleBackColor = false;
			this->AddUser_btn->Click += gcnew System::EventHandler(this, &GClient::AddUser_btn_Click);
			// 
			// GClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->ClientSize = System::Drawing::Size(1070, 516);
			this->Controls->Add(this->menu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"GClient";
			this->Text = L"Gestion des Clients";
			this->Load += gcnew System::EventHandler(this, &GClient::GClient_Load);
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void AddUser_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 AddClient^ b = gcnew AddClient();
			 b->ShowDialog();
}
private: System::Void delete_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 RemoveClient^ b = gcnew RemoveClient();
			 b->ShowDialog();
}
private: System::Void edit_Click(System::Object^  sender, System::EventArgs^  e) {
			 UpdateClient^ b = gcnew UpdateClient();
			 b->ShowDialog();
}
private: System::Void search_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 SearchClient ^ b = gcnew SearchClient();
			 b->ShowDialog();
}
private: System::Void GClient_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
}
};
}
