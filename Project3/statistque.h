#pragma once
#include <string>
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
	/// Summary for statistque
	/// </summary>
	public ref class statistque : public System::Windows::Forms::Form
	{
	public:
		int ID;




	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  Moyenne_Eau;
	private: System::Windows::Forms::Label^  Max_Eau;
	private: System::Windows::Forms::Label^  Min_Eau;



	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  Moyenne_Elect;
	private: System::Windows::Forms::Label^  Max_Elect;



	private: System::Windows::Forms::Label^  Min_Elect;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;








	public:


			 String^ constring = L"datasource=localhost;port=3306;username=root;password=";
	public:	statistque(void)
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
		~statistque()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  Ajouter;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  client_txt;








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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(statistque::typeid));
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->client_txt = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Moyenne_Eau = (gcnew System::Windows::Forms::Label());
			this->Max_Eau = (gcnew System::Windows::Forms::Label());
			this->Min_Eau = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->Moyenne_Elect = (gcnew System::Windows::Forms::Label());
			this->Max_Elect = (gcnew System::Windows::Forms::Label());
			this->Min_Elect = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
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
			this->Ajouter->Location = System::Drawing::Point(617, 118);
			this->Ajouter->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(58, 28);
			this->Ajouter->TabIndex = 58;
			this->Ajouter->Text = L". . .";
			this->Ajouter->UseVisualStyleBackColor = false;
			this->Ajouter->Click += gcnew System::EventHandler(this, &statistque::Ajouter_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(327, 122);
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
			this->client_txt->Location = System::Drawing::Point(385, 118);
			this->client_txt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->client_txt->Multiline = true;
			this->client_txt->Name = L"client_txt";
			this->client_txt->Size = System::Drawing::Size(226, 28);
			this->client_txt->TabIndex = 56;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Moyenne_Eau);
			this->groupBox1->Controls->Add(this->Max_Eau);
			this->groupBox1->Controls->Add(this->Min_Eau);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(575, 531);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(527, 164);
			this->groupBox1->TabIndex = 71;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Consommation D\'Eau";
			// 
			// Moyenne_Eau
			// 
			this->Moyenne_Eau->AutoSize = true;
			this->Moyenne_Eau->BackColor = System::Drawing::Color::Transparent;
			this->Moyenne_Eau->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Moyenne_Eau->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Moyenne_Eau->ForeColor = System::Drawing::Color::White;
			this->Moyenne_Eau->Location = System::Drawing::Point(28, 40);
			this->Moyenne_Eau->Name = L"Moyenne_Eau";
			this->Moyenne_Eau->Size = System::Drawing::Size(219, 25);
			this->Moyenne_Eau->TabIndex = 69;
			this->Moyenne_Eau->Text = L"Consommation Moyenne  :  ";
			// 
			// Max_Eau
			// 
			this->Max_Eau->AutoSize = true;
			this->Max_Eau->BackColor = System::Drawing::Color::Transparent;
			this->Max_Eau->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Max_Eau->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Max_Eau->ForeColor = System::Drawing::Color::White;
			this->Max_Eau->Location = System::Drawing::Point(28, 82);
			this->Max_Eau->Name = L"Max_Eau";
			this->Max_Eau->Size = System::Drawing::Size(212, 25);
			this->Max_Eau->TabIndex = 68;
			this->Max_Eau->Text = L"Consommation Maximale :  ";
			// 
			// Min_Eau
			// 
			this->Min_Eau->AutoSize = true;
			this->Min_Eau->BackColor = System::Drawing::Color::Transparent;
			this->Min_Eau->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Min_Eau->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Min_Eau->ForeColor = System::Drawing::Color::White;
			this->Min_Eau->Location = System::Drawing::Point(28, 122);
			this->Min_Eau->Name = L"Min_Eau";
			this->Min_Eau->Size = System::Drawing::Size(214, 25);
			this->Min_Eau->TabIndex = 67;
			this->Min_Eau->Text = L"Consommation Minimale  :  ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->Moyenne_Elect);
			this->groupBox2->Controls->Add(this->Max_Elect);
			this->groupBox2->Controls->Add(this->Min_Elect);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(12, 531);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(481, 164);
			this->groupBox2->TabIndex = 72;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Consommation D\'Electricité";
			// 
			// Moyenne_Elect
			// 
			this->Moyenne_Elect->AutoSize = true;
			this->Moyenne_Elect->BackColor = System::Drawing::Color::Transparent;
			this->Moyenne_Elect->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Moyenne_Elect->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Moyenne_Elect->ForeColor = System::Drawing::Color::White;
			this->Moyenne_Elect->Location = System::Drawing::Point(28, 40);
			this->Moyenne_Elect->Name = L"Moyenne_Elect";
			this->Moyenne_Elect->Size = System::Drawing::Size(219, 25);
			this->Moyenne_Elect->TabIndex = 66;
			this->Moyenne_Elect->Text = L"Consommation Moyenne  :  ";
			// 
			// Max_Elect
			// 
			this->Max_Elect->AutoSize = true;
			this->Max_Elect->BackColor = System::Drawing::Color::Transparent;
			this->Max_Elect->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Max_Elect->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Max_Elect->ForeColor = System::Drawing::Color::White;
			this->Max_Elect->Location = System::Drawing::Point(28, 82);
			this->Max_Elect->Name = L"Max_Elect";
			this->Max_Elect->Size = System::Drawing::Size(212, 25);
			this->Max_Elect->TabIndex = 65;
			this->Max_Elect->Text = L"Consommation Maximale :  ";
			// 
			// Min_Elect
			// 
			this->Min_Elect->AutoSize = true;
			this->Min_Elect->BackColor = System::Drawing::Color::Transparent;
			this->Min_Elect->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Min_Elect->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Min_Elect->ForeColor = System::Drawing::Color::White;
			this->Min_Elect->Location = System::Drawing::Point(28, 122);
			this->Min_Elect->Name = L"Min_Elect";
			this->Min_Elect->Size = System::Drawing::Size(214, 25);
			this->Min_Elect->TabIndex = 63;
			this->Min_Elect->Text = L"Consommation Minimale  :  ";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->chart1);
			this->groupBox3->Controls->Add(this->chart2);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox3->Location = System::Drawing::Point(12, 171);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1095, 354);
			this->groupBox3->TabIndex = 73;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Suivi de Consommation";
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->BackColor = System::Drawing::Color::Transparent;
			legend1->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend1->ForeColor = System::Drawing::Color::White;
			legend1->IsTextAutoFit = false;
			legend1->Name = L"Legend1";
			legend1->Position->Auto = false;
			legend1->Position->Height = 16.71827F;
			legend1->Position->Width = 44.22018F;
			legend1->Position->X = 52.77982F;
			legend1->Position->Y = 3.658304F;
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(544, 0);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			series1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series1->Legend = L"Legend1";
			series1->LegendText = L"Consommation D\'Eau";
			series1->MarkerBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series1->Name = L"Eau";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(569, 354);
			this->chart1->TabIndex = 64;
			this->chart1->Text = L"chart3";
			title1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			title1->Name = L"Title1";
			title1->ShadowColor = System::Drawing::Color::Black;
			title1->Text = L"La Consommation d\'electrécité par mois";
			title1->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			this->chart1->Titles->Add(title1);
			this->chart1->Visible = false;
			// 
			// chart2
			// 
			this->chart2->BackColor = System::Drawing::Color::Transparent;
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->BackColor = System::Drawing::Color::Transparent;
			legend2->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend2->ForeColor = System::Drawing::Color::White;
			legend2->IsTextAutoFit = false;
			legend2->Name = L"Legend1";
			legend2->Position->Auto = false;
			legend2->Position->Height = 16.71827F;
			legend2->Position->Width = 44.22018F;
			legend2->Position->X = 52.77982F;
			legend2->Position->Y = 3.658304F;
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(-18, 0);
			this->chart2->Name = L"chart2";
			series2->BorderWidth = 5;
			series2->ChartArea = L"ChartArea1";
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			series2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series2->Legend = L"Legend1";
			series2->LegendText = L"Consommation D\'Electrécité\\n";
			series2->MarkerBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series2->Name = L"Eau";
			series2->YValuesPerPoint = 2;
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(569, 354);
			this->chart2->TabIndex = 63;
			this->chart2->Text = L"chart2";
			title2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			title2->Name = L"Title1";
			title2->Text = L"La Consommation d\'electrécité par mois";
			this->chart2->Titles->Add(title2);
			this->chart2->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(64, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 41);
			this->label5->TabIndex = 75;
			this->label5->Text = L"Menu General";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(23, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 38);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 74;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &statistque::pictureBox1_Click);
			// 
			// statistque
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->ClientSize = System::Drawing::Size(1114, 709);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->client_txt);
			this->Controls->Add(this->groupBox3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"statistque";
			this->Text = L"..:[     Statistque       ]:..";
			this->Load += gcnew System::EventHandler(this, &statistque::statistque_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void consEau(int ID){
			
			String^ Query2 = "SELECT `ConEau` FROM greensoft.`factureeau` fe,greensoft.`facture` f,greensoft.`client` c WHERE f.IDFacture=fe.IDFacture and f.IDClient=c.IDClient and c.IDClient=" + ID + ";";
			MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand(Query2, conDatabase2);
			MySqlDataReader^ myReader2;
			try
			{
				conDatabase2->Open();
				myReader2 = cmdDataBase2->ExecuteReader();
				double max = 0, min = 0, somme = 0;int  comp = 0;
				while (myReader2->Read()){
					if (comp == 0) min = myReader2->GetInt16(0);

					if (myReader2->GetInt16(0)>max)
						max=myReader2->GetInt16(0);

					if (myReader2->GetInt16(0)<min)
						min = myReader2->GetInt16(0);
					comp++;
					somme += myReader2->GetInt16(0);

				}
				Moyenne_Eau->Text = "Consommation Moyenne :  " + (somme / comp).ToString();
				Max_Eau->Text = "Consommation Maximale :  " + max.ToString();
				Min_Eau->Text = "Consommation Minimale :  " + min.ToString();

			}
			catch (Exception^ex)
			{
				MessageBox::Show(ex->Message);
			}
		}


		void consElect(int ID){

			String^ Query2 = "SELECT `ConElect` FROM greensoft.`factureelect` fe,greensoft.`facture` f,greensoft.`client` c WHERE f.IDFacture=fe.IDFactureElect and f.IDClient=c.IDClient and c.IDClient=" + ID + ";";
			MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand(Query2, conDatabase2);
			MySqlDataReader^ myReader2;
			try
			{
				conDatabase2->Open();
				myReader2 = cmdDataBase2->ExecuteReader();
				double max = 0, min = 0, somme = 0; int  comp = 0;
				while (myReader2->Read()){
					if (comp == 0) min = myReader2->GetInt16(0);

					if (myReader2->GetInt16(0)>max)
						max = myReader2->GetInt16(0);

					if (myReader2->GetInt16(0)<min)
						min = myReader2->GetInt16(0);
					comp++;
					somme += myReader2->GetInt16(0);

				}
				Moyenne_Elect->Text = "Consommation Moyenne :  " + (somme / comp).ToString();
				Max_Elect->Text = "Consommation Maximale :  " + max.ToString();
				Min_Elect->Text = "Consommation Minimale :  " + min.ToString();

			}
			catch (Exception^ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

		String^ month(int im){
			switch (im)
			{

			case 1:return "Janvier"; break;
			case 2:return "Fevrier"; break;
			case 3:return "Mars"; break;
			case 4:return "Avril"; break;
			case 5:return "Mai"; break;
			case 6:return "Juin"; break;
			case 7:return "Juiller"; break;
			case 8:return "Aout"; break;
			case 9:return "Septembre"; break;
			case 10:return "Octobre"; break;
			case 11:return "Novembre"; break;
			case 12:return "Decembre"; break;
			default:
				return " ";
				break;
			}
		}
		Void StatEau(int ID){
			
			chart1->Series["Eau"]->Points->Clear();
			String^ Query2 = "SELECT `ConEau`,`MoisFacture` FROM greensoft.`factureeau` fe,greensoft.`facture` f,greensoft.`client` c WHERE f.IDFacture=fe.IDFacture and f.IDClient=c.IDClient and AnneeFacture=2014 and c.IDClient="+ID+";";
			MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand(Query2, conDatabase2);
			MySqlDataReader^ myReader2;
			try
			{
				conDatabase2->Open();
				myReader2 = cmdDataBase2->ExecuteReader();
				while (myReader2->Read()){
					
					chart1->Series["Eau"]->Points->AddXY(myReader2->GetInt16(1), myReader2->GetInt16(0));
					
				}
				chart1->Visible = true;
			}
			catch (Exception^ex)
			{
				MessageBox::Show(ex->Message);
			}
		}



		Void StatElect(int ID){
			chart2->Series["Eau"]->Points->Clear();
			String^ Query2 = "SELECT `ConElect`,`MoisFacture` FROM greensoft.`factureelect` fe,greensoft.`facture` f,greensoft.`client` c WHERE f.IDFacture=fe.IDFactureElect and f.IDClient=c.IDClient and AnneeFacture=2014 and c.IDClient=" + ID + ";";
			MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand(Query2, conDatabase2);
			MySqlDataReader^ myReader2;
			try
			{
				conDatabase2->Open();
				myReader2 = cmdDataBase2->ExecuteReader();
				
				
				while (myReader2->Read()){
					
					
					chart2->Series["Eau"]->Points->AddXY(myReader2->GetInt16(1),myReader2->GetInt16(0));
					
				}

				chart2->Visible = true;
			}
			catch (Exception^ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	private: System::Void statistque_Load(System::Object^  sender, System::EventArgs^  e) {
				 //StatEau();
	}
	private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void chart1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Ajouter_Click(System::Object^  sender, System::EventArgs^  e) {
			 choix^ x = gcnew choix();
			 x->ShowDialog();
			 if (!x->Visible)
			 {
				 client_txt->Text = x->NomClient;
				 ID = x->IDClient;
				 consEau(ID);
				 consElect(ID);
				 StatElect(ID);
				 StatEau(ID);
				 x->Close();
				 this->Show();
			 }
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 chart2->Series["Eau"]->Points->Clear();
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
};
}
