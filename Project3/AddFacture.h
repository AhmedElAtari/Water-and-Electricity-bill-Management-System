#pragma once
#include "choix.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class AddFacture : public System::Windows::Forms::Form
	{
	public:
		int VarChoix; 
		String^ Query; String^ Query2;
		int ID;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=";
		int LastID;
		int trancheID;
		double prix;
		double Consoma;
		AddFacture(void){
			InitializeComponent();
		}

	protected:
		~AddFacture(){
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^  chos_pn;
	private: System::Windows::Forms::Button^  Ajouter_btn;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  elect_btn;
	private: System::Windows::Forms::Button^  eau_btn;
	private: System::Windows::Forms::Button^  Cancel_btn;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  tarif_txt;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  con_txt;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  client_txt;
	private: System::Windows::Forms::DateTimePicker^  date_client;
	private: System::Windows::Forms::TextBox^  prix_txt;
	private: System::Windows::Forms::TextBox^  tranche_txt;
	private: System::Windows::Forms::Button^  Ajouter;			 
	private: System::ComponentModel::Container ^components;

		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddFacture::typeid));
			this->chos_pn = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->elect_btn = (gcnew System::Windows::Forms::Button());
			this->eau_btn = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Ajouter_btn = (gcnew System::Windows::Forms::Button());
			this->Cancel_btn = (gcnew System::Windows::Forms::Button());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->date_client = (gcnew System::Windows::Forms::DateTimePicker());
			this->prix_txt = (gcnew System::Windows::Forms::TextBox());
			this->tranche_txt = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tarif_txt = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->con_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->client_txt = (gcnew System::Windows::Forms::TextBox());
			this->chos_pn->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chos_pn
			// 
			this->chos_pn->Controls->Add(this->label2);
			this->chos_pn->Controls->Add(this->label3);
			this->chos_pn->Controls->Add(this->elect_btn);
			this->chos_pn->Controls->Add(this->eau_btn);
			this->chos_pn->Location = System::Drawing::Point(109, 207);
			this->chos_pn->Name = L"chos_pn";
			this->chos_pn->Size = System::Drawing::Size(443, 162);
			this->chos_pn->TabIndex = 53;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(222, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(203, 35);
			this->label2->TabIndex = 54;
			this->label2->Text = L"Facture Electricité";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(9, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 35);
			this->label3->TabIndex = 53;
			this->label3->Text = L"Facture Eau";
			// 
			// elect_btn
			// 
			this->elect_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->elect_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"elect_btn.BackgroundImage")));
			this->elect_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->elect_btn->FlatAppearance->BorderSize = 0;
			this->elect_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->elect_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->elect_btn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->elect_btn->Location = System::Drawing::Point(254, 12);
			this->elect_btn->Name = L"elect_btn";
			this->elect_btn->Size = System::Drawing::Size(138, 105);
			this->elect_btn->TabIndex = 52;
			this->elect_btn->UseVisualStyleBackColor = false;
			this->elect_btn->Click += gcnew System::EventHandler(this, &AddFacture::elect_btn_Click);
			// 
			// eau_btn
			// 
			this->eau_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->eau_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"eau_btn.BackgroundImage")));
			this->eau_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->eau_btn->FlatAppearance->BorderSize = 0;
			this->eau_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->eau_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->eau_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eau_btn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->eau_btn->Location = System::Drawing::Point(11, 12);
			this->eau_btn->Name = L"eau_btn";
			this->eau_btn->Size = System::Drawing::Size(138, 105);
			this->eau_btn->TabIndex = 51;
			this->eau_btn->UseVisualStyleBackColor = false;
			this->eau_btn->Click += gcnew System::EventHandler(this, &AddFacture::eau_btn_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(5, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(225, 41);
			this->label7->TabIndex = 43;
			this->label7->Text = L"Nouvelle Facture";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Ajouter_btn);
			this->panel1->Controls->Add(this->Cancel_btn);
			this->panel1->Controls->Add(this->Ajouter);
			this->panel1->Controls->Add(this->date_client);
			this->panel1->Controls->Add(this->prix_txt);
			this->panel1->Controls->Add(this->tranche_txt);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->tarif_txt);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->con_txt);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->client_txt);
			this->panel1->Location = System::Drawing::Point(33, 68);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(584, 496);
			this->panel1->TabIndex = 54;
			this->panel1->Visible = false;
			// 
			// Ajouter_btn
			// 
			this->Ajouter_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(182)));
			this->Ajouter_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Ajouter_btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Ajouter_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Ajouter_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ajouter_btn->ForeColor = System::Drawing::Color::White;
			this->Ajouter_btn->Location = System::Drawing::Point(288, 447);
			this->Ajouter_btn->Name = L"Ajouter_btn";
			this->Ajouter_btn->Size = System::Drawing::Size(139, 31);
			this->Ajouter_btn->TabIndex = 56;
			this->Ajouter_btn->Text = L"Ajouter";
			this->Ajouter_btn->UseVisualStyleBackColor = false;
			this->Ajouter_btn->Click += gcnew System::EventHandler(this, &AddFacture::Ajouter_btn_Click);
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
			this->Cancel_btn->Location = System::Drawing::Point(442, 447);
			this->Cancel_btn->Name = L"Cancel_btn";
			this->Cancel_btn->Size = System::Drawing::Size(139, 31);
			this->Cancel_btn->TabIndex = 57;
			this->Cancel_btn->Text = L"Cancel";
			this->Cancel_btn->UseVisualStyleBackColor = false;
			this->Cancel_btn->Click += gcnew System::EventHandler(this, &AddFacture::Cancel_btn_Click);
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
			this->Ajouter->Location = System::Drawing::Point(373, 64);
			this->Ajouter->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(58, 28);
			this->Ajouter->TabIndex = 55;
			this->Ajouter->Text = L". . .";
			this->Ajouter->UseVisualStyleBackColor = false;
			this->Ajouter->Click += gcnew System::EventHandler(this, &AddFacture::Ajouter_Click);
			// 
			// date_client
			// 
			this->date_client->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 10));
			this->date_client->Location = System::Drawing::Point(141, 128);
			this->date_client->Name = L"date_client";
			this->date_client->Size = System::Drawing::Size(290, 30);
			this->date_client->TabIndex = 50;
			// 
			// prix_txt
			// 
			this->prix_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->prix_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->prix_txt->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prix_txt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->prix_txt->Location = System::Drawing::Point(141, 386);
			this->prix_txt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->prix_txt->Multiline = true;
			this->prix_txt->Name = L"prix_txt";
			this->prix_txt->ReadOnly = true;
			this->prix_txt->Size = System::Drawing::Size(290, 28);
			this->prix_txt->TabIndex = 49;
			// 
			// tranche_txt
			// 
			this->tranche_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->tranche_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tranche_txt->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tranche_txt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->tranche_txt->Location = System::Drawing::Point(141, 258);
			this->tranche_txt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tranche_txt->Multiline = true;
			this->tranche_txt->Name = L"tranche_txt";
			this->tranche_txt->ReadOnly = true;
			this->tranche_txt->Size = System::Drawing::Size(290, 28);
			this->tranche_txt->TabIndex = 48;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(141, 358);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 20);
			this->label8->TabIndex = 47;
			this->label8->Text = L"Prix Ht  :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(141, 294);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 20);
			this->label9->TabIndex = 46;
			this->label9->Text = L"Tarif  :";
			// 
			// tarif_txt
			// 
			this->tarif_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->tarif_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tarif_txt->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tarif_txt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->tarif_txt->Location = System::Drawing::Point(141, 322);
			this->tarif_txt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tarif_txt->Multiline = true;
			this->tarif_txt->Name = L"tarif_txt";
			this->tarif_txt->ReadOnly = true;
			this->tarif_txt->Size = System::Drawing::Size(290, 28);
			this->tarif_txt->TabIndex = 44;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(141, 230);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 20);
			this->label5->TabIndex = 43;
			this->label5->Text = L"Tranche  :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(141, 166);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(186, 20);
			this->label6->TabIndex = 42;
			this->label6->Text = L"Consommation Eau (m³)  :";
			// 
			// con_txt
			// 
			this->con_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->con_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->con_txt->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->con_txt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->con_txt->Location = System::Drawing::Point(141, 194);
			this->con_txt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->con_txt->Multiline = true;
			this->con_txt->Name = L"con_txt";
			this->con_txt->Size = System::Drawing::Size(290, 28);
			this->con_txt->TabIndex = 40;
			this->con_txt->Leave += gcnew System::EventHandler(this, &AddFacture::textBox1_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(141, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 20);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Date  :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(141, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 20);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Client:";
			// 
			// client_txt
			// 
			this->client_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->client_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->client_txt->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->client_txt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->client_txt->Location = System::Drawing::Point(141, 64);
			this->client_txt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->client_txt->Multiline = true;
			this->client_txt->Name = L"client_txt";
			this->client_txt->Size = System::Drawing::Size(226, 28);
			this->client_txt->TabIndex = 36;
			// 
			// AddFacture
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->ClientSize = System::Drawing::Size(648, 576);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->chos_pn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"AddFacture";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ajouter Facture";
			this->chos_pn->ResumeLayout(false);
			this->chos_pn->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		

		int  getlast(){
			String^ Query = "select max(IDFacture) from greensoft.Facture;";
			MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand(Query, conDatabase2);
			MySqlDataReader^ myReader2;
			try
			{
				
				conDatabase2->Open();
				myReader2 = cmdDataBase2->ExecuteReader();
				while (myReader2->Read()){
					LastID=myReader2->GetInt16(0);
				}
			}
			catch (Exception^ex)
			{
				MessageBox::Show(ex->Message);
				
			}
			return LastID;
		}



private: System::Void elect_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 chos_pn->Visible = false;
			 panel1->Visible = true;
			 label6->Text = "Consommation Electricité(Kwh) :";
			 Query = "Select * from greensoft.trancheelec;";
			 VarChoix = 2;
}
	private: System::Void eau_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 chos_pn->Visible = false;
				 panel1->Visible = true;
				 label6->Text = "Consommation Eau(m³) :";
				 Query = "Select * from greensoft.trancheeau;";
				 VarChoix = 1;
				 
	}
private: System::Void Ajouter_Click(System::Object^  sender, System::EventArgs^  e) {
			 choix^ x = gcnew choix();
			 x->ShowDialog();
			 if ( ! x->Visible)
			 {
				 client_txt->Text = x->NomClient;
				 ID = x->IDClient;
				 x->Close();
				 this->Show();
			 }
			 
				   
}
	private: System::Void textBox1_Leave(System::Object^  sender, System::EventArgs^  e) {

				  Consoma = Convert::ToDouble(con_txt->Text);
				 String^ constring = L"datasource=localhost;port=3306;username=root;password=";
				 MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(Query, conDatabase);
				 MySqlDataReader^ myReader;
				 try
				 {
				 
					 conDatabase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 
					 while (myReader->Read()){

						 if (Consoma >= myReader->GetDouble(3) && Consoma <= myReader->GetDouble(2))
						 {
							 trancheID = myReader->GetInt32(0);
							 tranche_txt->Text = myReader->GetString(1);
							 tarif_txt->Text = Convert::ToString(myReader->GetDouble(4));
							 prix = myReader->GetDouble(4)*Consoma;
							 prix_txt->Text = prix.ToString();

						 }
						 
					 }
				 }
				 catch (Exception^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
	}

			 Void Add(){
				 String^ Query3;
				 if (VarChoix == 1){
					 Query3 = "INSERT INTO greensoft.factureeau(`IDFacture`, `ConEau`, `IDTrancheEau`, `PrixFacture`) VALUES(" + getlast() + "," + Consoma + "," + trancheID + ",'" + prix + "')";
				 }
				 else{
					 Query3 = "INSERT INTO greensoft.`factureelect`(`IDFactureElect`, `ConElect`, `IDTrancheElect`, `PrixFacture`) VALUES("+getlast() + "," + Consoma + "," + trancheID + ",'" + prix + "')";
				 
				 }

				 MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand(Query3, conDatabase2);
				 MySqlDataReader^ myReader2;
				 try
				 {
					 conDatabase2->Open();
					 myReader2 = cmdDataBase2->ExecuteReader();
					 myReader2->Close();

				 }
				 catch (Exception^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
			 }
	private: System::Void Ajouter_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 bool chpvide = (
					 client_txt->Text->IsNullOrEmpty(client_txt->Text) ||
					 date_client->Text->IsNullOrEmpty(date_client->Text) ||
					 con_txt->Text->IsNullOrEmpty(con_txt->Text) ||
					 tranche_txt->Text->IsNullOrEmpty(tranche_txt->Text) ||
					 tarif_txt->Text->IsNullOrEmpty(tarif_txt->Text) ||
					 prix_txt->Text->IsNullOrEmpty(prix_txt->Text)
					 );
				 if (!chpvide){
					 String^ Query = "INSERT INTO greensoft.`facture`(`MoisFacture`, `AnneeFacture`, `IDClient`) VALUES (" + date_client->Value.Month + "," + date_client->Value.Year + "," + ID + ")";
					 MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
					 MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand(Query, conDatabase2);
					 MySqlDataReader^ myReader2;
					 try
					 {
						 conDatabase2->Open();
						 myReader2 = cmdDataBase2->ExecuteReader();
						 myReader2->Close();

					 }
					 catch (Exception^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }

					 Add();
					 if (MessageBox::Show("Facture Bien Ajouté voulez vous ajouter une autre ?", "Confirmation", MessageBoxButtons::YesNo,
						 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
						 client_txt->Clear();
						 con_txt->Clear();
						 prix_txt->Clear();
						 tranche_txt->Clear();
						 tarif_txt->Clear();
						 client_txt->Focus();
					 }
					 else{
						 this->Close();
					 }
				 }
				 else MessageBox::Show("Veuiller Saisir Toutes Les Champs ", "Champ Obligatoire", MessageBoxButtons::OK,
					 MessageBoxIcon::Error);

	}

private: System::Void Cancel_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
};
}
