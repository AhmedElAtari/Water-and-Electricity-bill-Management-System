#pragma once
#include "choix.h"
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
	public ref class UpdateFacture : public System::Windows::Forms::Form
	{
	

	public:
		String^ constring = L"datasource=localhost;port=3306;username=root;password=";
		MySqlConnection^ conDatabase;
		MySqlCommand^ cmdDataBase;
		MySqlDataAdapter^ sda;
		DataSet^ ds;
		DataTable^ db;
		int ID;
		MySqlCommandBuilder^ df;
	
	
	
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  Ajouter;
	private: System::Windows::Forms::TextBox^  client_txt;
	public:		
		UpdateFacture(void)
		{
			InitializeComponent();
			try{
				


			}
			catch (Exception^ex){
				MessageBox::Show(ex->Message);
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateFacture()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;




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
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->client_txt = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
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
			this->dataGridView1->Location = System::Drawing::Point(61, 132);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dataGridView1->RowTemplate->Height = 30;
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->Size = System::Drawing::Size(877, 198);
			this->dataGridView1->TabIndex = 46;
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UpdateFacture::dataGridView1_CellValueChanged);
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
			this->Cancel->Location = System::Drawing::Point(952, 588);
			this->Cancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(139, 26);
			this->Cancel->TabIndex = 50;
			this->Cancel->Text = L"Quitter";
			this->Cancel->UseVisualStyleBackColor = false;
			this->Cancel->Click += gcnew System::EventHandler(this, &UpdateFacture::Cancel_Click);
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
			this->button1->Location = System::Drawing::Point(289, 55);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(58, 28);
			this->button1->TabIndex = 58;
			this->button1->Text = L". . .";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UpdateFacture::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(57, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 20);
			this->label4->TabIndex = 57;
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
			this->client_txt->Location = System::Drawing::Point(57, 55);
			this->client_txt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->client_txt->Multiline = true;
			this->client_txt->Name = L"client_txt";
			this->client_txt->ReadOnly = true;
			this->client_txt->Size = System::Drawing::Size(226, 28);
			this->client_txt->TabIndex = 56;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView2->Location = System::Drawing::Point(61, 376);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView2->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dataGridView2->RowTemplate->Height = 30;
			this->dataGridView2->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->Size = System::Drawing::Size(877, 198);
			this->dataGridView2->TabIndex = 59;
			this->dataGridView2->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UpdateFacture::dataGridView2_CellValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label1->Location = System::Drawing::Point(62, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 23);
			this->label1->TabIndex = 60;
			this->label1->Text = L"Facture d\'Eau:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label2->Location = System::Drawing::Point(57, 351);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 23);
			this->label2->TabIndex = 61;
			this->label2->Text = L"Facture d\'Electrecité:";
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
			this->Ajouter->Location = System::Drawing::Point(799, 588);
			this->Ajouter->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(139, 26);
			this->Ajouter->TabIndex = 49;
			this->Ajouter->Text = L"Modifier";
			this->Ajouter->UseVisualStyleBackColor = false;
			this->Ajouter->Click += gcnew System::EventHandler(this, &UpdateFacture::Ajouter_Click);
			// 
			// UpdateFacture
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->ClientSize = System::Drawing::Size(1112, 625);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->client_txt);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->Cancel);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"UpdateFacture";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Modifier Facture";
			this->Load += gcnew System::EventHandler(this, &UpdateFacture::UpdateFacture_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void ShowFactureEau(int ID){
			//dataGridView1->ClearSelection();
			String^ Q="SELECT  c.`NomClient` as \"Nom Client\",f.IDFacture as \" ID Facture\", `ConEau` as \"Qantite Consommme\",`NomTranche` as \"Tranche Eau \",`PrixFacture` as \"Prix Facture\",`MoisFacture` as \"Mois Facture\",`AnneeFacture`as \"Annee Facture\" FROM greensoft.`facture` f, greensoft.`factureeau` fe, greensoft.`trancheeau` te, greensoft.`Client` c WHERE "+
				"f.IDClient = c.IDClient and  f.IDFacture = fe.IDFacture and fe.IDTrancheEau = te.IDTrancheEau and c.IDClient = "+ID+"; ";




			conDatabase = gcnew MySqlConnection(constring);
			cmdDataBase = gcnew MySqlCommand(Q, conDatabase);
			sda = gcnew MySqlDataAdapter();
			ds = gcnew System::Data::DataSet();
			db = gcnew DataTable();
			sda->SelectCommand = cmdDataBase;
			sda->Fill(ds, "greensoft");
			dataGridView1->DataSource = ds->Tables[0];
			sda->Update(db);
			dataGridView1->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCells);
		}
		void ShowFactureElec(int ID){
			//dataGridView1->ClearSelection();
			String^ Q = "SELECT c.`NomClient` as \"Nom Client\",f.IDFacture as \" ID Facture\",`ConElect` as \"Qantite Consommme\",`NomTranche` as \"Tranche Eau \",`PrixFacture` as \"Prix Facture\",`MoisFacture` as \"Mois Facture\",`AnneeFacture`as \"Annee Facture\" FROM greensoft.`facture` f, greensoft.`factureelect` fe, greensoft.`trancheelec` te, greensoft.`Client` c WHERE " +
				"f.IDClient = c.IDClient and  f.IDFacture = fe.IDFactureElect and fe.IDTrancheElect = te.IDTrancheElect and c.IDClient = " + ID + "; ";

			conDatabase = gcnew MySqlConnection(constring);
			cmdDataBase = gcnew MySqlCommand(Q, conDatabase);
			sda = gcnew MySqlDataAdapter();
			ds = gcnew System::Data::DataSet();
			db = gcnew DataTable();
			sda->SelectCommand = cmdDataBase;
			sda->Fill(ds, "greensoft");
			dataGridView2->DataSource = ds->Tables[0];
			sda->Update(db);
			dataGridView2->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCells);
		}
		void UpdateFact(double a, int p, char g){
			if (g == 'a'){
				String^ Q = "SELECT `IDTrancheEau`, `PrixEau` FROM greensoft.`trancheeau` WHERE Q_Max>=" + a + " and Q_Min<=" + a;
				conDatabase = gcnew MySqlConnection(constring);
				cmdDataBase = gcnew MySqlCommand(Q, conDatabase);
				MySqlDataReader^ myReader;
				conDatabase->Open();
				myReader = cmdDataBase->ExecuteReader();
				myReader->Read();
				int idt = myReader->GetInt16(0);
				//String^ nomt = myReader->GetString(1);
				double prixt = myReader->GetDouble(1);
				//conDatabase->Close();
				myReader->Close();
				prixt = a * prixt;
				Q = "UPDATE greensoft.`factureeau` SET `ConEau`=" + a + ", `IDTrancheEau`=" + idt + ", `PrixFacture`='" + prixt + "' Where `IDFacture`=" + p;
				cmdDataBase = gcnew MySqlCommand(Q, conDatabase);
				myReader = cmdDataBase->ExecuteReader();
			}
			else{
				String^ Q = "SELECT `IDTrancheElect`, `PrixElec` FROM greensoft.`trancheelec` WHERE Q_Max>=" + a + " and Q_Min<=" + a;
				conDatabase = gcnew MySqlConnection(constring);
				cmdDataBase = gcnew MySqlCommand(Q, conDatabase);
				MySqlDataReader^ myReader;
				conDatabase->Open();
				myReader = cmdDataBase->ExecuteReader();
				myReader->Read();
				int idt = myReader->GetInt16(0);
				//String^ nomt = myReader->GetString(1);
				double prixt = myReader->GetDouble(1);
				//conDatabase->Close();
				myReader->Close();
				prixt = a * prixt;
				Q = "UPDATE greensoft.`factureelect` SET `ConElect`=" + a + ", `IDTrancheElect`=" + idt + ", `PrixFacture`='" + prixt + "' Where `IDFactureElect`=" + p;
				MessageBox::Show(Q);
				cmdDataBase = gcnew MySqlCommand(Q, conDatabase);
				myReader = cmdDataBase->ExecuteReader();
		}
		}
	private: System::Void Cancel_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (MessageBox::Show("Est-ce que vous voulez vraiment Abandonner l'operation?", "Quitter", MessageBoxButtons::YesNo,
					 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
					 this->Close();
				 }
	}

	private: System::Void Ajouter_Click(System::Object^  sender, System::EventArgs^  e) {
				 df = gcnew MySqlCommandBuilder(sda);
				 sda->Update(ds, "greensoft");
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 choix^ x = gcnew choix();
				 x->ShowDialog();
				 if (!x->Visible)
				 {
					 client_txt->Text = x->NomClient;
					 ID = x->IDClient;
					 ShowFactureEau(ID);
					 ShowFactureElec(ID);
					 x->Close();
					 this->Show();
				 }
	}
private: System::Void UpdateFacture_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dataGridView1_CellValueChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 char b = 'a';
			 int p = Convert::ToInt16(dataGridView1->Rows[e->RowIndex]->Cells[1]->Value);
			 double a= Convert::ToDouble(dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value);
			 UpdateFact(a, p,b);
}
private: System::Void dataGridView2_CellValueChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 char b = 'h';
			 int p = Convert::ToInt16(dataGridView2->Rows[e->RowIndex]->Cells[1]->Value);
			 double a = Convert::ToDouble(dataGridView2->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value);
			 UpdateFact(a, p, b);
			 dataGridView2->EndEdit();
			 dataGridView2->Refresh();
}
};
}