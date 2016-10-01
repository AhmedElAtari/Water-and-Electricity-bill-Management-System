#pragma once
#include "UpdateUser.h"
#include "AddUser.h"
#include "RemoveUser.h"
#include "BanUser.h"
#include "Apropos.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	public ref class GUser : public System::Windows::Forms::Form
	{
	public:
		GUser(void)
		{
			InitializeComponent();
		}

	protected:
		~GUser()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:









	private: System::Windows::Forms::Panel^  menu;
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
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  BanUser_btn;


	private: System::Windows::Forms::Button^  AddUser_btn;
	private: System::Windows::Forms::ToolStripMenuItem^  fichierToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  nouveauUtilisateurToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bloquerUtilisateurToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  supprimerUtilisateurToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  modifierUtilisateurToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aProposToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;










	private: System::ComponentModel::IContainer^  components;


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GUser::typeid));
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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->BanUser_btn = (gcnew System::Windows::Forms::Button());
			this->AddUser_btn = (gcnew System::Windows::Forms::Button());
			this->fichierToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nouveauUtilisateurToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bloquerUtilisateurToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supprimerUtilisateurToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierUtilisateurToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aProposToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
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
			this->menu->Controls->Add(this->button4);
			this->menu->Controls->Add(this->button2);
			this->menu->Controls->Add(this->BanUser_btn);
			this->menu->Controls->Add(this->AddUser_btn);
			this->menu->Location = System::Drawing::Point(11, 45);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(999, 444);
			this->menu->TabIndex = 6;
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
			this->label8->Size = System::Drawing::Size(275, 40);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Utiliser cette fonctionnalité pour bloquer \r\nou  autoriser l\'accès d\'un utilisate"
				L"ur";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(726, 148);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(259, 40);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Supprimer un utilisateur définitivement\r\n du système";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(228, 150);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(265, 40);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Vous Pouvez Ajouter 3 type d\'utilisateur\r\navec chacun ces propres droits\r\n";
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &GUser::pictureBox1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(723, 260);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(221, 35);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Modifier Utilisateur";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(228, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(214, 35);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Bloquer Utilisateur";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(724, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(242, 35);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Supprimer Utilisateur";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(228, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 35);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Ajouter Utilisateur";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(579, 260);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(138, 105);
			this->button4->TabIndex = 22;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &GUser::button4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(579, 106);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 105);
			this->button2->TabIndex = 21;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &GUser::button2_Click);
			// 
			// BanUser_btn
			// 
			this->BanUser_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->BanUser_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BanUser_btn.BackgroundImage")));
			this->BanUser_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BanUser_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->BanUser_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BanUser_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BanUser_btn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BanUser_btn->Location = System::Drawing::Point(84, 260);
			this->BanUser_btn->Name = L"BanUser_btn";
			this->BanUser_btn->Size = System::Drawing::Size(138, 105);
			this->BanUser_btn->TabIndex = 20;
			this->BanUser_btn->UseVisualStyleBackColor = false;
			this->BanUser_btn->Click += gcnew System::EventHandler(this, &GUser::BanUser_btn_Click);
			// 
			// AddUser_btn
			// 
			this->AddUser_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->AddUser_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddUser_btn.BackgroundImage")));
			this->AddUser_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddUser_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
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
			this->AddUser_btn->Click += gcnew System::EventHandler(this, &GUser::AddUser_btn_Click);
			// 
			// fichierToolStripMenuItem1
			// 
			this->fichierToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->nouveauUtilisateurToolStripMenuItem,
					this->bloquerUtilisateurToolStripMenuItem, this->supprimerUtilisateurToolStripMenuItem, this->modifierUtilisateurToolStripMenuItem,
					this->quitterToolStripMenuItem
			});
			this->fichierToolStripMenuItem1->Name = L"fichierToolStripMenuItem1";
			this->fichierToolStripMenuItem1->Size = System::Drawing::Size(64, 24);
			this->fichierToolStripMenuItem1->Text = L"Fichier";
			// 
			// nouveauUtilisateurToolStripMenuItem
			// 
			this->nouveauUtilisateurToolStripMenuItem->Name = L"nouveauUtilisateurToolStripMenuItem";
			this->nouveauUtilisateurToolStripMenuItem->Size = System::Drawing::Size(218, 24);
			this->nouveauUtilisateurToolStripMenuItem->Text = L"Nouveau Utilisateur";
			// 
			// bloquerUtilisateurToolStripMenuItem
			// 
			this->bloquerUtilisateurToolStripMenuItem->Name = L"bloquerUtilisateurToolStripMenuItem";
			this->bloquerUtilisateurToolStripMenuItem->Size = System::Drawing::Size(218, 24);
			this->bloquerUtilisateurToolStripMenuItem->Text = L"Bloquer Utilisateur";
			// 
			// supprimerUtilisateurToolStripMenuItem
			// 
			this->supprimerUtilisateurToolStripMenuItem->Name = L"supprimerUtilisateurToolStripMenuItem";
			this->supprimerUtilisateurToolStripMenuItem->Size = System::Drawing::Size(218, 24);
			this->supprimerUtilisateurToolStripMenuItem->Text = L"Supprimer Utilisateur";
			// 
			// modifierUtilisateurToolStripMenuItem
			// 
			this->modifierUtilisateurToolStripMenuItem->Name = L"modifierUtilisateurToolStripMenuItem";
			this->modifierUtilisateurToolStripMenuItem->Size = System::Drawing::Size(218, 24);
			this->modifierUtilisateurToolStripMenuItem->Text = L"Modifier Utilisateur";
			// 
			// quitterToolStripMenuItem
			// 
			this->quitterToolStripMenuItem->Name = L"quitterToolStripMenuItem";
			this->quitterToolStripMenuItem->Size = System::Drawing::Size(218, 24);
			this->quitterToolStripMenuItem->Text = L"Quitter";
			// 
			// editionToolStripMenuItem
			// 
			this->editionToolStripMenuItem->Name = L"editionToolStripMenuItem";
			this->editionToolStripMenuItem->Size = System::Drawing::Size(68, 24);
			this->editionToolStripMenuItem->Text = L"Edition";
			// 
			// aProposToolStripMenuItem
			// 
			this->aProposToolStripMenuItem->Name = L"aProposToolStripMenuItem";
			this->aProposToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->aProposToolStripMenuItem->Text = L"A Propos";
			this->aProposToolStripMenuItem->Click += gcnew System::EventHandler(this, &GUser::aProposToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fichierToolStripMenuItem1,
					this->editionToolStripMenuItem, this->aProposToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1042, 28);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// GUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->ClientSize = System::Drawing::Size(1042, 522);
			this->Controls->Add(this->menu);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"GUser";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gestion Utilisateurs";
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void AddUser_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 AddUser^ a = gcnew AddUser();
			 a->ShowDialog();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 RemoveUser^ c = gcnew RemoveUser();
			 c->ShowDialog();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 UpdateUser^ b = gcnew UpdateUser();
			 b->ShowDialog();
}

private: System::Void BanUser_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 BanUser^ m = gcnew BanUser();
			 m->ShowDialog();
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 
			 
}
private: System::Void aProposToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Apropos^ m = gcnew Apropos();
			 m->ShowDialog();
}
};
}
