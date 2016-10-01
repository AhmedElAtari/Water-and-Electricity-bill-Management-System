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
	/// Summary for SearchClient
	/// </summary>
	public ref class SearchClient : public System::Windows::Forms::Form
	{
	public:
		SearchClient(void)
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
		~SearchClient()
		{
			if (components)
			{
				delete components;
			}
		}
	public:
		MySqlDataAdapter^ sda;
		DataSet^ ds;
		MySqlConnection^ con;
		MySqlCommandBuilder^ df;
		String^ constring;
		MySqlConnection^ conDatabase;
		MySqlCommand^ cmdDataBase;
		String^ Query;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  Ajouter;
	private: System::Windows::Forms::Button^  Cancel;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::TextBox^  search_txt;






























	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->search_txt = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->Location = System::Drawing::Point(67, 211);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dataGridView1->RowTemplate->Height = 30;
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->Size = System::Drawing::Size(1008, 230);
			this->dataGridView1->TabIndex = 47;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SearchClient::dataGridView1_CellContentClick);
			this->dataGridView1->RowEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SearchClient::dataGridView1_RowEnter);
			this->dataGridView1->RowHeaderMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &SearchClient::dataGridView1_RowHeaderMouseDoubleClick);
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
			this->Ajouter->Location = System::Drawing::Point(458, 139);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(139, 31);
			this->Ajouter->TabIndex = 53;
			this->Ajouter->Text = L"Rechercher";
			this->Ajouter->UseVisualStyleBackColor = false;
			this->Ajouter->Click += gcnew System::EventHandler(this, &SearchClient::Ajouter_Click);
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
			this->Cancel->Location = System::Drawing::Point(936, 446);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(139, 31);
			this->Cancel->TabIndex = 54;
			this->Cancel->Text = L"Quitter";
			this->Cancel->UseVisualStyleBackColor = false;
			this->Cancel->Click += gcnew System::EventHandler(this, &SearchClient::Cancel_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->Ajouter);
			this->panel1->Controls->Add(this->search_txt);
			this->panel1->Location = System::Drawing::Point(37, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1038, 194);
			this->panel1->TabIndex = 56;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(638, 90);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(63, 21);
			this->radioButton3->TabIndex = 65;
			this->radioButton3->Text = L"Email";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(467, 90);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(151, 21);
			this->radioButton2->TabIndex = 64;
			this->radioButton2->Text = L"Numero Télephone";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(359, 90);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(58, 21);
			this->radioButton1->TabIndex = 63;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Nom";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// search_txt
			// 
			this->search_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->search_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->search_txt->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_txt->ForeColor = System::Drawing::Color::Gray;
			this->search_txt->Location = System::Drawing::Point(357, 44);
			this->search_txt->Multiline = true;
			this->search_txt->Name = L"search_txt";
			this->search_txt->Size = System::Drawing::Size(344, 28);
			this->search_txt->TabIndex = 62;
			this->search_txt->Text = L"Recherche Client";
			this->search_txt->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SearchClient::search_txt_MouseClick);
			// 
			// SearchClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->ClientSize = System::Drawing::Size(1101, 483);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Cancel);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"SearchClient";
			this->Text = L"Rechercher Client";
			this->Load += gcnew System::EventHandler(this, &SearchClient::SearchClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SearchClient_Load(System::Object^  sender, System::EventArgs^  e) {
				 try{
					 String^ constring = L"datasource=localhost;port=3306;username=root;password=";
					 MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
					 con = conDatabase;
					 cmdDataBase = gcnew MySqlCommand("SELECT `IDClient` as \"Numero Client\" , `CIN` , `NomClient` as \"Nom\", `PrenomClient` as \"Prenom \", `TelClient` as \"Numero Telephone \", `DateNaissance` as \"Date Naissance\", `AdresseClient` as \"Adresse Client\", `EmailClient` as \"Email Client\"  FROM greensoft.`client`;", con);
					 sda = gcnew MySqlDataAdapter();
					 ds = gcnew System::Data::DataSet();
					 sda->SelectCommand = cmdDataBase;
					 DataTable^ db = gcnew DataTable();
					 sda->Fill(ds, "greensoft");
					 dataGridView1->DataSource = ds->Tables[0];
					 sda->Update(db);
					 dataGridView1->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCells);

				 }
				 catch (Exception^ex){
					 MessageBox::Show(ex->Message);
				 }
				 
	}


private: System::Void Ajouter_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if (radioButton1->Checked){
				 Query = "SELECT `IDClient` as \"Numero Client\" , `CIN` , `NomClient` as \"Nom\", `PrenomClient` as \"Prenom \", `TelClient` as \"Numero Telephone \", `DateNaissance` as \"Date Naissance\", `AdresseClient` as \"Adresse Client\", `EmailClient` as \"Email Client\"  FROM greensoft.`client` WHERE NomClient Like '%" + search_txt->Text + "%';";
			 }
			 if (radioButton2->Checked){
				 Query = "SELECT `IDClient` as \"Numero Client\" , `CIN` , `NomClient` as \"Nom\", `PrenomClient` as \"Prenom \", `TelClient` as \"Numero Telephone \", `DateNaissance` as \"Date Naissance\", `AdresseClient` as \"Adresse Client\", `EmailClient` as \"Email Client\"  FROM greensoft.`client` WHERE TelClient Like '%" + search_txt->Text + "%';";
			 }
			 if (radioButton3->Checked){
				 Query = "SELECT `IDClient` as \"Numero Client\" , `CIN` , `NomClient` as \"Nom\", `PrenomClient` as \"Prenom \", `TelClient` as \"Numero Telephone \", `DateNaissance` as \"Date Naissance\", `AdresseClient` as \"Adresse Client\", `EmailClient` as \"Email Client\"  FROM greensoft.`client` WHERE EmailClient Like '%" + search_txt->Text + "%';";
			 }
			 if (search_txt->Text->Length > 0 ){
				 try{
					 String^ constring = L"datasource=localhost;port=3306;username=root;password=";
					 MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
					 con = conDatabase;
					 cmdDataBase = gcnew MySqlCommand(Query, con);
					 sda = gcnew MySqlDataAdapter();
					 ds = gcnew System::Data::DataSet();
					 sda->SelectCommand = cmdDataBase;
					 DataTable^ db = gcnew DataTable();
					 sda->Fill(ds, "greensoft");
					 dataGridView1->DataSource = ds->Tables[0];
					 sda->Update(db);
					 dataGridView1->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCells);

				 }
				 catch (Exception^ex){
					 MessageBox::Show(ex->Message);
				 }
			 }
				else{
					MessageBox::Show("Veuillez Saisir Une Chaine de Recherche", "Quitter", MessageBoxButtons::OK,
						MessageBoxIcon::Error);
			 }
}
private: System::Void search_txt_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 
}
private: System::Void search_txt_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 
}
private: System::Void search_txt_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 search_txt->Clear();
			 search_txt->ForeColor = Color::Black;
}
private: System::Void Cancel_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void dataGridView1_RowEnter(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 
}
private: System::Void dataGridView1_RowHeaderMouseDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
			 MessageBox::Show("k");
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
};
}
