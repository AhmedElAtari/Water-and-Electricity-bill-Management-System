#pragma once
#include "General.h"

#include <windows.h>
namespace Project3 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class Login : public System::Windows::Forms::Form{
	private: System::Windows::Forms::Panel^  log_pn;
	private: System::Windows::Forms::Button^  Login_btn;
	private: System::Windows::Forms::Label^  password_lbl;
	private: System::Windows::Forms::Button^  Cancel_btn;
	private: System::Windows::Forms::Label^  username_lbl;
	private: System::Windows::Forms::TextBox^  password_txt;
	private: System::Windows::Forms::TextBox^  username_txt;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  lost_pn;
	private: System::Windows::Forms::Button^  rest;
	private: System::Windows::Forms::Button^  Cancel2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  code;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  username2;
	private: System::ComponentModel::IContainer^  components;
	private: String^ constring = L"datasource=localhost;port=3306;username=root;password=";
	public:
		int profil;

		//Constructeur
		Login(void){
			InitializeComponent();
		}
	protected:
		//destructeur
		~Login(){
			if (components){
				delete components;
			}
		}

#pragma region Windows Form Designer generated code
		//initialisation des Composants
		void InitializeComponent(void){
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->log_pn = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Login_btn = (gcnew System::Windows::Forms::Button());
			this->password_lbl = (gcnew System::Windows::Forms::Label());
			this->Cancel_btn = (gcnew System::Windows::Forms::Button());
			this->username_lbl = (gcnew System::Windows::Forms::Label());
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->username_txt = (gcnew System::Windows::Forms::TextBox());
			this->lost_pn = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->username2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->rest = (gcnew System::Windows::Forms::Button());
			this->Cancel2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->code = (gcnew System::Windows::Forms::TextBox());
			this->log_pn->SuspendLayout();
			this->lost_pn->SuspendLayout();
			this->SuspendLayout();
			// 
			// log_pn
			// 
			this->log_pn->BackColor = System::Drawing::Color::Transparent;
			this->log_pn->Controls->Add(this->label1);
			this->log_pn->Controls->Add(this->Login_btn);
			this->log_pn->Controls->Add(this->password_lbl);
			this->log_pn->Controls->Add(this->Cancel_btn);
			this->log_pn->Controls->Add(this->username_lbl);
			this->log_pn->Controls->Add(this->password_txt);
			this->log_pn->Controls->Add(this->username_txt);
			this->log_pn->Location = System::Drawing::Point(1, 156);
			this->log_pn->Name = L"log_pn";
			this->log_pn->Size = System::Drawing::Size(335, 280);
			this->log_pn->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(23, 147);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 19);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Mot de Passe Oublié \?";
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// Login_btn
			// 
			this->Login_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(182)));
			this->Login_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Login_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Login_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Login_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Login_btn->ForeColor = System::Drawing::Color::White;
			this->Login_btn->Location = System::Drawing::Point(24, 235);
			this->Login_btn->Name = L"Login_btn";
			this->Login_btn->Size = System::Drawing::Size(139, 31);
			this->Login_btn->TabIndex = 17;
			this->Login_btn->Text = L"LogIn";
			this->Login_btn->UseVisualStyleBackColor = false;
			this->Login_btn->Click += gcnew System::EventHandler(this, &Login::Login_btn_Click);
			// 
			// password_lbl
			// 
			this->password_lbl->AutoSize = true;
			this->password_lbl->BackColor = System::Drawing::Color::Transparent;
			this->password_lbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_lbl->ForeColor = System::Drawing::Color::White;
			this->password_lbl->Location = System::Drawing::Point(18, 85);
			this->password_lbl->Name = L"password_lbl";
			this->password_lbl->Size = System::Drawing::Size(107, 20);
			this->password_lbl->TabIndex = 20;
			this->password_lbl->Text = L"Mot de Passe :";
			// 
			// Cancel_btn
			// 
			this->Cancel_btn->BackColor = System::Drawing::Color::Silver;
			this->Cancel_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Cancel_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Cancel_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->Cancel_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cancel_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancel_btn->ForeColor = System::Drawing::Color::White;
			this->Cancel_btn->Location = System::Drawing::Point(178, 235);
			this->Cancel_btn->Name = L"Cancel_btn";
			this->Cancel_btn->Size = System::Drawing::Size(139, 31);
			this->Cancel_btn->TabIndex = 18;
			this->Cancel_btn->Text = L"Cancel";
			this->Cancel_btn->UseVisualStyleBackColor = false;
			this->Cancel_btn->Click += gcnew System::EventHandler(this, &Login::Cancel_btn_Click);
			// 
			// username_lbl
			// 
			this->username_lbl->AutoSize = true;
			this->username_lbl->BackColor = System::Drawing::Color::Transparent;
			this->username_lbl->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->username_lbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_lbl->ForeColor = System::Drawing::Color::Transparent;
			this->username_lbl->Location = System::Drawing::Point(18, 15);
			this->username_lbl->Name = L"username_lbl";
			this->username_lbl->Size = System::Drawing::Size(138, 20);
			this->username_lbl->TabIndex = 19;
			this->username_lbl->Text = L"Nom D\'utilisateur :";
			// 
			// password_txt
			// 
			this->password_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->password_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_txt->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_txt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->password_txt->Location = System::Drawing::Point(22, 108);
			this->password_txt->Multiline = true;
			this->password_txt->Name = L"password_txt";
			this->password_txt->PasswordChar = '*';
			this->password_txt->Size = System::Drawing::Size(240, 28);
			this->password_txt->TabIndex = 16;
			this->password_txt->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::password_txt_MouseClick);
			// 
			// username_txt
			// 
			this->username_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->username_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username_txt->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_txt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->username_txt->Location = System::Drawing::Point(24, 38);
			this->username_txt->Margin = System::Windows::Forms::Padding(5);
			this->username_txt->Multiline = true;
			this->username_txt->Name = L"username_txt";
			this->username_txt->Size = System::Drawing::Size(240, 28);
			this->username_txt->TabIndex = 15;
			this->username_txt->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::username_txt_MouseClick);
			this->username_txt->Leave += gcnew System::EventHandler(this, &Login::username_txt_Leave);
			// 
			// lost_pn
			// 
			this->lost_pn->BackColor = System::Drawing::Color::Transparent;
			this->lost_pn->Controls->Add(this->label4);
			this->lost_pn->Controls->Add(this->username2);
			this->lost_pn->Controls->Add(this->button3);
			this->lost_pn->Controls->Add(this->rest);
			this->lost_pn->Controls->Add(this->Cancel2);
			this->lost_pn->Controls->Add(this->label2);
			this->lost_pn->Controls->Add(this->label3);
			this->lost_pn->Controls->Add(this->code);
			this->lost_pn->Location = System::Drawing::Point(1, 60);
			this->lost_pn->Name = L"lost_pn";
			this->lost_pn->Size = System::Drawing::Size(332, 362);
			this->lost_pn->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(11, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 20);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Nom d\'utilisateur :";
			// 
			// username2
			// 
			this->username2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->username2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->username2->Location = System::Drawing::Point(15, 195);
			this->username2->Multiline = true;
			this->username2->Name = L"username2";
			this->username2->Size = System::Drawing::Size(240, 28);
			this->username2->TabIndex = 28;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(182)));
			this->button3->Location = System::Drawing::Point(0, 19);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 34);
			this->button3->TabIndex = 27;
			this->button3->Text = L"    Retour";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Login::button3_Click);
			// 
			// rest
			// 
			this->rest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(182)));
			this->rest->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->rest->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->rest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rest->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rest->ForeColor = System::Drawing::Color::White;
			this->rest->Location = System::Drawing::Point(17, 328);
			this->rest->Name = L"rest";
			this->rest->Size = System::Drawing::Size(139, 31);
			this->rest->TabIndex = 25;
			this->rest->Text = L"Réinitialiser";
			this->rest->UseVisualStyleBackColor = false;
			this->rest->Click += gcnew System::EventHandler(this, &Login::rest_Click);
			// 
			// Cancel2
			// 
			this->Cancel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->Cancel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Cancel2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Cancel2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cancel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancel2->ForeColor = System::Drawing::Color::White;
			this->Cancel2->Location = System::Drawing::Point(171, 328);
			this->Cancel2->Name = L"Cancel2";
			this->Cancel2->Size = System::Drawing::Size(139, 31);
			this->Cancel2->TabIndex = 26;
			this->Cancel2->Text = L"Cancel";
			this->Cancel2->UseVisualStyleBackColor = false;
			this->Cancel2->Click += gcnew System::EventHandler(this, &Login::Cancel2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(13, 226);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 20);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Code D\'accés :";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(13, 100);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label3->Size = System::Drawing::Size(318, 62);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Pour Pouvoir Réinitialiser votre mot de passe. Veilliez Contacter L\'administrateu"
				L"r pour avoir le code d\'accès.\r\n";
			// 
			// code
			// 
			this->code->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->code->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->code->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->code->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->code->Location = System::Drawing::Point(17, 249);
			this->code->Multiline = true;
			this->code->Name = L"code";
			this->code->PasswordChar = '*';
			this->code->Size = System::Drawing::Size(240, 28);
			this->code->TabIndex = 22;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(417, 551);
			this->ControlBox = false;
			this->Controls->Add(this->log_pn);
			this->Controls->Add(this->lost_pn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->log_pn->ResumeLayout(false);
			this->log_pn->PerformLayout();
			this->lost_pn->ResumeLayout(false);
			this->lost_pn->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		void Cleaner(){
			password_txt->Clear();
			username_txt->Clear();
			username2->Clear();
			code->Clear();
		}
		String^ Encrypt(String^ original){
			char key = 'x';
			String^ En;
			for (int i = 0; i < 5; ++i){
				En += original[i] ^ (int(key) + i) % 20;  // here we will do our XOR operation..
			}
			return En;
		}
		void redirection(){
			this->Hide();
			General^ m = gcnew General();
			m->Username->Text = this->username_txt->Text;
			if (profil == 1)
				m->label1->Text = "Administrateur";
			if (profil == 2)
				m->label1->Text = "Agencier";
			m->ShowDialog();
		}
		void etat(){
			int etat;
			String^ Query2 = "Select Etat from greensoft.utilisateur where UserName = '" + username_txt->Text + "';";
			MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand(Query2, conDatabase2);
			MySqlDataReader^ myReader2;
			try
			{
				conDatabase2->Open();
				myReader2 = cmdDataBase2->ExecuteReader();
				myReader2->Read();
				etat = myReader2->GetInt16(0);
			}
			catch (Exception^ex)
			{
				MessageBox::Show(ex->Message);
				Application::Exit();
			}
			if (etat == 1){
				redirection();
			}
			else{
				MessageBox::Show("Votre compte est temporairement verrouillé.Essayez-vous de contacter Le superviseur ", "Désolé",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
				Application::Exit();
			}
		}
		void rester(){
			if (username2->Text->Length > 0 && code->Text->Length > 0){
			String^ password; 
			String^ Query = "Select * from greensoft.utilisateur where UserName='" + username2->Text + "';";
			MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand(Query, conDatabase);
			MySqlDataReader^ myReader;
			int count = 0;
			try
			{
				conDatabase->Open();
				myReader = cmdDataBase->ExecuteReader();
				while (myReader->Read())
				{
					password = myReader->GetString(1);

					count++;
				}
			}
			catch (Exception^ex)
			{
				MessageBox::Show(ex->Message);
				Application::Exit();
			}
			if (count == 1 && code->Text=="123456")
			{
				Cleaner();
				if (MessageBox::Show("Votre Mot de Passe est : " + password, "Information",
					MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK){
					lost_pn->Visible = false;
					log_pn->Visible = true;
				}

			}
			else{
				MessageBox::Show("Les Informations Saisies Sont Incorrects !!  ", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			}
			else{
			MessageBox::Show("Les deux Champs Sont Obligatoires ", "Champs Obligatoires", MessageBoxButtons::OK,MessageBoxIcon::Information);

				}
			}
		
	
	private: System::Void username_txt_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 username_txt->ForeColor = Color::FromArgb(52, 52, 52);
				 username_txt->Text = "";
	}
	private: System::Void password_txt_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 password_txt->ForeColor = Color::FromArgb(52, 52, 52);
				 password_txt->Text = "";
				 password_txt->PasswordChar = '*';
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Cleaner();
				 log_pn->Visible = false;
				 lost_pn->Visible = true;
	}
	private: System::Void Cancel_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (MessageBox::Show("Est-ce que vous voulez vraiment Quitter ?", "Quitter", MessageBoxButtons::YesNo,
					 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
					 Application::Exit();
				 }
	}
	private: System::Void Login_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (username_txt->Text->Length == 0){
					 username_txt->ForeColor = Color::FromArgb(247, 60, 105);
					 username_txt->Text = "Champ Obligatoire";
				 }
				 else if (password_txt->Text->Length == 0){
					 password_txt->PasswordChar = false;
					 password_txt->ForeColor = Color::FromArgb(247, 60, 105);
					 password_txt->Text = "Champ Obligatoire";
				 }
				 else
				 {
					 String^ Query = "Select * from greensoft.utilisateur where UserName='" + username_txt->Text + "' and Password='" + password_txt->Text + "';";
					 MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
					 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(Query, conDatabase);
					 MySqlDataReader^ myReader;
					 int count = 0;
					 try
					 {
						 conDatabase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 while (myReader->Read())
						 {
							 profil = myReader->GetInt16(3);
							 
							 count++;
						 }
					 }
					 catch (Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
						 Application::Exit();
					 }
					 if (count == 1)
					 {

						 etat();

					 }
					 else if (count > 1)
					 {
						 if (MessageBox::Show("Non utilisateur est dubliqué ", "Probléme de Connection",
							 MessageBoxButtons::RetryCancel, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Retry)
							 Cleaner();

						 else
							 Application::Exit();
					 }
					 else
					 {
						 if (MessageBox::Show("Mot de passe ou Non utilisateur est incorrect ", "Probléme de Connection", MessageBoxButtons::RetryCancel,
							 MessageBoxIcon::Error) == System::Windows::Forms::DialogResult::Retry)
							 Cleaner();
						 else Application::Exit();
					 }

				 }



	}
	private: System::Void Login_Load(System::Object^  sender, System::EventArgs^  e) {
				 lost_pn->Visible = false;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 Cleaner();
				 log_pn->Visible = true;
				 lost_pn->Visible = false;
	}
	private: System::Void username_txt_Leave(System::Object^  sender, System::EventArgs^  e) {
			 if (username_txt->Text->Length == 0){
				 username_txt->ForeColor = Color::FromArgb(247, 60, 105);
				 username_txt->Text = "Champ Obligatoire";
			 }
	}
	private: System::Void rest_Click(System::Object^  sender, System::EventArgs^  e) {
				 rester();
	}
	private: System::Void Cancel2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (MessageBox::Show("Est-ce que vous voulez vraiment Quitter ?", "Quitter", MessageBoxButtons::YesNo,
					 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
					 Application::Exit();
				 }
	}
	

};
	}
