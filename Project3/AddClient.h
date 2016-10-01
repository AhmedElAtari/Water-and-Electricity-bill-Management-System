#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for AddClient
	/// </summary>
	public ref class AddClient : public System::Windows::Forms::Form
	{
	public:
		AddClient(void)
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
		~AddClient()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  adresse;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  prn;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  nom;

	private: System::Windows::Forms::Button^  Ajouter;
	private: System::Windows::Forms::Button^  Cancel;
	private: System::Windows::Forms::MaskedTextBox^  cin_txt;

	private: System::Windows::Forms::DateTimePicker^  dateT;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  email;

	private: System::Windows::Forms::TextBox^  tel;


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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->adresse = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->prn = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nom = (gcnew System::Windows::Forms::TextBox());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->cin_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->dateT = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->tel = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(4, 3);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(211, 41);
			this->label7->TabIndex = 57;
			this->label7->Text = L"Nouveau Client";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(119, 292);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 20);
			this->label5->TabIndex = 56;
			this->label5->Text = L"Date Naissance :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(119, 349);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 20);
			this->label6->TabIndex = 55;
			this->label6->Text = L"Adresse :";
			// 
			// adresse
			// 
			this->adresse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->adresse->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->adresse->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adresse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->adresse->Location = System::Drawing::Point(119, 374);
			this->adresse->Multiline = true;
			this->adresse->Name = L"adresse";
			this->adresse->Size = System::Drawing::Size(237, 54);
			this->adresse->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(119, 176);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 20);
			this->label1->TabIndex = 54;
			this->label1->Text = L"Prénom :";
			// 
			// prn
			// 
			this->prn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->prn->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->prn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->prn->Location = System::Drawing::Point(119, 201);
			this->prn->Multiline = true;
			this->prn->Name = L"prn";
			this->prn->Size = System::Drawing::Size(237, 28);
			this->prn->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(119, 234);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 20);
			this->label3->TabIndex = 53;
			this->label3->Text = L"Tél  :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(119, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 20);
			this->label4->TabIndex = 52;
			this->label4->Text = L"CIN";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(119, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 20);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Nom : ";
			// 
			// nom
			// 
			this->nom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->nom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nom->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->nom->Location = System::Drawing::Point(119, 143);
			this->nom->Multiline = true;
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(237, 28);
			this->nom->TabIndex = 2;
			// 
			// Ajouter
			// 
			this->Ajouter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(182)));
			this->Ajouter->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Ajouter->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Ajouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Ajouter->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ajouter->ForeColor = System::Drawing::Color::White;
			this->Ajouter->Location = System::Drawing::Point(151, 550);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(139, 31);
			this->Ajouter->TabIndex = 49;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = false;
			this->Ajouter->Click += gcnew System::EventHandler(this, &AddClient::Ajouter_Click);
			// 
			// Cancel
			// 
			this->Cancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->Cancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Cancel->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancel->ForeColor = System::Drawing::Color::White;
			this->Cancel->Location = System::Drawing::Point(305, 550);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(139, 31);
			this->Cancel->TabIndex = 50;
			this->Cancel->Text = L"Quitter";
			this->Cancel->UseVisualStyleBackColor = false;
			this->Cancel->Click += gcnew System::EventHandler(this, &AddClient::Cancel_Click);
			// 
			// cin_txt
			// 
			this->cin_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->cin_txt->Location = System::Drawing::Point(119, 91);
			this->cin_txt->Mask = L"AA 000 000";
			this->cin_txt->Name = L"cin_txt";
			this->cin_txt->Size = System::Drawing::Size(237, 22);
			this->cin_txt->TabIndex = 1;
			// 
			// dateT
			// 
			this->dateT->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateT->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateT->Location = System::Drawing::Point(119, 317);
			this->dateT->MaxDate = System::DateTime(2014, 6, 8, 0, 0, 0, 0);
			this->dateT->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateT->Name = L"dateT";
			this->dateT->Size = System::Drawing::Size(237, 27);
			this->dateT->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(119, 433);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 20);
			this->label8->TabIndex = 61;
			this->label8->Text = L"Email :";
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->email->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->email->Location = System::Drawing::Point(119, 458);
			this->email->Multiline = true;
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(237, 28);
			this->email->TabIndex = 7;
			// 
			// tel
			// 
			this->tel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->tel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->tel->Location = System::Drawing::Point(119, 261);
			this->tel->Multiline = true;
			this->tel->Name = L"tel";
			this->tel->Size = System::Drawing::Size(237, 28);
			this->tel->TabIndex = 4;
			// 
			// AddClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->ClientSize = System::Drawing::Size(456, 593);
			this->Controls->Add(this->tel);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->email);
			this->Controls->Add(this->dateT);
			this->Controls->Add(this->cin_txt);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->adresse);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->prn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->Cancel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"AddClient";
			this->Text = L"Ajouter Client";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void maskedTextBoxAdv1_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
	}
private: System::Void Ajouter_Click(System::Object^  sender, System::EventArgs^  e) {
			 bool chpvide = (
				 cin_txt->Text->IsNullOrEmpty(cin_txt->Text) ||
				 nom->Text->IsNullOrEmpty(nom->Text) ||
				 prn->Text->IsNullOrEmpty(prn->Text) ||
				 tel->Text->IsNullOrEmpty(tel->Text) ||
				 adresse->Text->IsNullOrEmpty(adresse->Text) ||
				 email->Text->IsNullOrEmpty(email->Text)
				 );
			 if (!chpvide){
				

					 String^ cin = cin_txt->Text->ToString();
					 String^ nm = nom->Text->ToString();
					 String^ prenom = prn->Text->ToString();
					 String^ adr = adresse->Text->ToString();
					 String^ tele = tel->Text->ToString();
					 String^ em = email->Text->ToString();
					 String^ dat = dateT->Text;


					 String^ constring = L"datasource=localhost;port=3306;username=root;password=";
					 String^ Query2 = "insert into greensoft.Client(`CIN`, `NomClient`, `PrenomClient`, `TelClient`, `DateNaissance`, `AdresseClient`, `EmailClient`)" +
						 "VALUES ('" + cin + "','" + nm + "','" + prenom + "','" + tele + "','" + dat + "','" + adr + "','" + em + "');";
					 MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
					 MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand(Query2, conDatabase2);
					 MySqlDataReader^ myReader2;
					 try
					 {
						 conDatabase2->Open();
						 myReader2 = cmdDataBase2->ExecuteReader();
						 myReader2->Close();
						 if (MessageBox::Show("Client bien ajouté \n voulez vous ajouter un autre Client?", "Confirmation", MessageBoxButtons::YesNo,
							 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
							 cin_txt->Clear();
							 nom->Clear();
							 prn->Clear();
							 adresse->Clear();
							 tel->Clear();
							 email->Clear();
						 }
						 else this->Close();
					 }
					 catch (Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
						 Application::Exit();
					 }
				 
			
			 }
			 else
				 MessageBox::Show("Veuillez Saisir tous les champs !");
}
private: System::Void Cancel_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (MessageBox::Show("Est-ce que vous voulez vraiment Abandonner l'operation?", "Confirmation", MessageBoxButtons::YesNo,
				 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
				 this->Close();
			 }
}
};
}
