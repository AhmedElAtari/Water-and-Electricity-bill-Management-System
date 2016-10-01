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
	/// Summary for choix
	/// </summary>
	public ref class choix : public System::Windows::Forms::Form
	{
	private:
		MySqlDataAdapter^ sda;
		DataSet^ ds;
		MySqlConnection^ con;
		MySqlCommandBuilder^ df;
		String^ constring;
		MySqlConnection^ conDatabase;
		MySqlCommand^ cmdDataBase;
		bool b=false;
	public:
		int IDClient;
		String^ NomClient;
	public:
		choix(void)
		{
			InitializeComponent();
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

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~choix()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1082, 453);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &choix::dataGridView1_CellContentClick);
			this->dataGridView1->RowHeaderMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &choix::dataGridView1_RowHeaderMouseDoubleClick);
			// 
			// choix
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->ClientSize = System::Drawing::Size(1082, 453);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"choix";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Load += gcnew System::EventHandler(this, &choix::choix_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void choix_Load(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void dataGridView1_RowHeaderMouseDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
				 this->Visible = false;
				 IDClient = Convert::ToInt16(dataGridView1->Rows[e->RowIndex]->Cells[0]->Value);
				 NomClient = dataGridView1->Rows[e->RowIndex]->Cells[3]->Value->ToString() + "  " + dataGridView1->Rows[e->RowIndex]->Cells[2]->Value->ToString();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
};
}
