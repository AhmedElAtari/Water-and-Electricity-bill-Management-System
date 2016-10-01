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
	/// Summary for BanUser
	/// </summary>
	public ref class BanUser : public System::Windows::Forms::Form
	{
	public:
		MySqlDataAdapter^ sda;
		DataSet^ ds;
		MySqlConnection^ con;
		MySqlCommandBuilder^ df;
		String^ constring;
		MySqlConnection^ conDatabase;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  Column1;

	public:
		MySqlCommand^ cmdDataBase;
		BanUser(void)
		{
			InitializeComponent();
			try{
				String^ constring = L"datasource=localhost;port=3306;username=root;password=";
				MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
				con = conDatabase;
			}
			catch (Exception^ex){
				MessageBox::Show(ex->Message);
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BanUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  Ajouter;
	private: System::Windows::Forms::Button^  Cancel;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->Location = System::Drawing::Point(69, 55);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dataGridView1->RowTemplate->Height = 30;
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->Size = System::Drawing::Size(703, 307);
			this->dataGridView1->TabIndex = 46;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Bloquer";
			this->Column1->Name = L"Column1";
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column1->Width = 63;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(1, 2);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(246, 41);
			this->label7->TabIndex = 45;
			this->label7->Text = L"Bloquer Utilisateur";
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
			this->Ajouter->Location = System::Drawing::Point(496, 371);
			this->Ajouter->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(139, 31);
			this->Ajouter->TabIndex = 47;
			this->Ajouter->Text = L"Bloquer";
			this->Ajouter->UseVisualStyleBackColor = false;
			this->Ajouter->Click += gcnew System::EventHandler(this, &BanUser::Ajouter_Click);
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
			this->Cancel->Location = System::Drawing::Point(650, 371);
			this->Cancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(139, 31);
			this->Cancel->TabIndex = 48;
			this->Cancel->Text = L"Quitter";
			this->Cancel->UseVisualStyleBackColor = false;
			this->Cancel->Click += gcnew System::EventHandler(this, &BanUser::Cancel_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(182)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(342, 371);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 31);
			this->button1->TabIndex = 49;
			this->button1->Text = L"Autoris�";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BanUser::button1_Click);
			// 
			// BanUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->ClientSize = System::Drawing::Size(801, 419);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->Cancel);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label7);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"BanUser";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Bloquer Utilisateur";
			this->Load += gcnew System::EventHandler(this, &BanUser::BanUser_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bloquerUser(int id){
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UpDate greensoft.utilisateur SET `Etat`=0 where IDUtilisateur=" + id + ";", con);
				 MySqlDataReader^ myReader;
				 con->Open();
				 myReader = cmdDataBase->ExecuteReader();
				 con->Close();
	}
			 Void AutoriseUser(int id){
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UpDate greensoft.utilisateur SET `Etat`=1  where IDUtilisateur=" + id + ";", con);
				 MySqlDataReader^ myReader;
				 con->Open();
				 myReader = cmdDataBase->ExecuteReader();
				 con->Close();
			 }
	private: System::Void BanUser_Load(System::Object^  sender, System::EventArgs^  e) {
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Select IDUtilisateur as \"Numero Utilisateur\" ,UserName as \" Nom d'utilisateur \",Password as \"Mot de Passe\",NomDroit as Droit,Etat from greensoft.utilisateur u,greensoft.droit d where u.IDDroit=d.IDDroit;", con);
				 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = cmdDataBase;
				 DataTable^ db = gcnew DataTable();
				 sda->Fill(db);
				 BindingSource^ bSource = gcnew BindingSource();
				 bSource->DataSource = db;
				 dataGridView1->DataSource = bSource;
				 sda->Update(db);
	

	}
	private: System::Void Cancel_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (MessageBox::Show("Est-ce que vous voulez vraiment Abandonner l'operation?", "Confirmation", MessageBoxButtons::YesNo,
					 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
					 this->Close();
				 }
	}
	private: System::Void Ajouter_Click(System::Object^  sender, System::EventArgs^  e) {
				 DataGridViewRow^ row = gcnew DataGridViewRow();
				 for (int i = 0; i < dataGridView1->Rows->Count; i++)
				 {
					 row = dataGridView1->Rows[i];
					 if (Convert::ToBoolean(row->Cells[0]->Value) == true){
						 int id = Convert::ToInt32(row->Cells[1]->Value);
						 bloquerUser(id);
						 row->Cells[5]->Value =0;
					 }
				 }
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 DataGridViewRow^ row = gcnew DataGridViewRow();
				 for (int i = 0; i < dataGridView1->Rows->Count; i++)
				 {
					 row = dataGridView1->Rows[i];
					 if (Convert::ToBoolean(row->Cells[0]->Value) == true){
						 int id = Convert::ToInt32(row->Cells[1]->Value);
						 AutoriseUser(id);
						 row->Cells[5]->Value = 1;
					 }
				 }
	}
};
}