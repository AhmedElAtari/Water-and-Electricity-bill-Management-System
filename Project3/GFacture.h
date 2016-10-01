#pragma once
#include "AddFacture.h"
#include "UpdateFacture.h"
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
	public ref class GFacture : public System::Windows::Forms::Form
	{
	public:
		GFacture(void)
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
		~GFacture()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  menu;
	protected:
	private: System::Windows::Forms::Label^  label9;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label4;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  edit;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GFacture::typeid));
			this->menu = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->AddUser_btn = (gcnew System::Windows::Forms::Button());
			this->menu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menu
			// 
			this->menu->Controls->Add(this->label9);
			this->menu->Controls->Add(this->label6);
			this->menu->Controls->Add(this->label5);
			this->menu->Controls->Add(this->pictureBox1);
			this->menu->Controls->Add(this->label4);
			this->menu->Controls->Add(this->label1);
			this->menu->Controls->Add(this->edit);
			this->menu->Controls->Add(this->AddUser_btn);
			this->menu->Location = System::Drawing::Point(31, 32);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(999, 352);
			this->menu->TabIndex = 7;
			this->menu->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GFacture::menu_Paint);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(670, 180);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(247, 40);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Modifier toutes les Informations d\'un\r\nutilisateurs ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 9));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(236, 180);
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &GFacture::pictureBox1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(668, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(190, 35);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Modifier Facture";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(236, 145);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 35);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Ajouter Facture";
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
			this->edit->Location = System::Drawing::Point(524, 138);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(138, 105);
			this->edit->TabIndex = 22;
			this->edit->UseVisualStyleBackColor = false;
			this->edit->Click += gcnew System::EventHandler(this, &GFacture::edit_Click);
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
			this->AddUser_btn->Location = System::Drawing::Point(92, 138);
			this->AddUser_btn->Name = L"AddUser_btn";
			this->AddUser_btn->Size = System::Drawing::Size(138, 105);
			this->AddUser_btn->TabIndex = 19;
			this->AddUser_btn->UseVisualStyleBackColor = false;
			this->AddUser_btn->Click += gcnew System::EventHandler(this, &GFacture::AddUser_btn_Click);
			// 
			// GFacture
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->ClientSize = System::Drawing::Size(1070, 412);
			this->Controls->Add(this->menu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"GFacture";
			this->Text = L"Gestion des Factures";
			this->Load += gcnew System::EventHandler(this, &GFacture::GClient_Load);
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void AddUser_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 AddFacture^ b = gcnew AddFacture();
				 b->ShowDialog();
	}
	private: System::Void delete_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				/* RemoveClient^ b = gcnew RemoveClient();
				 b->ShowDialog();*/
	}
	private: System::Void edit_Click(System::Object^  sender, System::EventArgs^  e) {
				 UpdateFacture^ b = gcnew UpdateFacture();
				 b->ShowDialog();
	}
	private: System::Void search_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				/* SearchClient ^ b = gcnew SearchClient();
				 b->ShowDialog();*/
	}
	private: System::Void GClient_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void menu_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
}
};
}
