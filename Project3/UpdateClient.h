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
	/// Summary for UpdateUser
	/// </summary>
	public ref class UpdateClient : public System::Windows::Forms::Form
	{
	public:
		MySqlDataAdapter^ sda;
		DataSet^ ds;
		MySqlConnection^ con;
		MySqlCommandBuilder^ df;
		String^ constring;
		MySqlConnection^ conDatabase;
		MySqlCommand^ cmdDataBase;
		MySqlDataReader^ myReader;
		UpdateClient(void)
		{
			InitializeComponent();
			try{
				String^ constring = L"datasource=localhost;port=3306;username=root;password=";
				MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
				con = conDatabase;
				cmdDataBase = gcnew MySqlCommand("SELECT `IDClient` as \"Numero Client\" , `CIN` , `NomClient` as \"Nom Client\", `PrenomClient` as \"Prenom Client\", `TelClient` as \"Téléphone Client\", `DateNaissance` as \"Date Naissance\", `AdresseClient` as \"Adresse Client\", `EmailClient` as \"Email Client\"  FROM greensoft.`client` WHERE 1", con);
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

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateClient()
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
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->Cancel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->Location = System::Drawing::Point(57, 53);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dataGridView1->RowTemplate->Height = 30;
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->Size = System::Drawing::Size(956, 348);
			this->dataGridView1->TabIndex = 46;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UpdateClient::dataGridView1_CellContentClick);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(3, 2);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(201, 41);
			this->label7->TabIndex = 45;
			this->label7->Text = L"Modifier Client";
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
			this->Ajouter->Location = System::Drawing::Point(721, 426);
			this->Ajouter->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(139, 31);
			this->Ajouter->TabIndex = 49;
			this->Ajouter->Text = L"Modifier";
			this->Ajouter->UseVisualStyleBackColor = false;
			this->Ajouter->Click += gcnew System::EventHandler(this, &UpdateClient::Ajouter_Click);
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
			this->Cancel->Location = System::Drawing::Point(874, 426);
			this->Cancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(139, 31);
			this->Cancel->TabIndex = 50;
			this->Cancel->Text = L"Quitter";
			this->Cancel->UseVisualStyleBackColor = false;
			this->Cancel->Click += gcnew System::EventHandler(this, &UpdateClient::Cancel_Click);
			// 
			// UpdateClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->ClientSize = System::Drawing::Size(1069, 476);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->Cancel);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label7);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"UpdateClient";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Modifier Utilisateur";
			this->Load += gcnew System::EventHandler(this, &UpdateClient::UpdateUser_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UpdateUser_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Cancel_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (MessageBox::Show("Est-ce que vous voulez vraiment Abandonner l'operation?", "Quitter", MessageBoxButtons::YesNo,
					 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
					 this->Close();
				 }
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void Ajouter_Click(System::Object^  sender, System::EventArgs^  e) {
				 df = gcnew MySqlCommandBuilder(sda);
				 sda->Update(ds, "greensoft");
	}
	};
}