#pragma once
#include "newhuman.h"
#include "Human.h"
#include "Clothes.h"
#include "MedicalCard.h"
#include "Realty.h"
#include "Work.h"

namespace lab8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Ñâîäêà äëÿ Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
		Human^ character;
		MedicalCard^ medcard;
		Clothes^ clothes;
		Realty^ realty;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ parametr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cloth;
	private: System::Windows::Forms::Button^ buttonload;
		   Work^ work;
	public:
		Game(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
			character = gcnew Human();
			medcard = gcnew MedicalCard();
			clothes = gcnew Clothes();
			realty = gcnew Realty();
			work = gcnew Work();
			if (File::Exists("temp.txt") == true) {
				try
				{
					StreamReader^ f = File::OpenText("temp.txt");
					character->SetName(f->ReadLine());
					character->SetSex(f->ReadLine());
					character->SetAge(Convert::ToInt32(f->ReadLine()));
					character->SetMoneyBalance(Convert::ToInt32(f->ReadLine()));
					medcard->SetWeight(Convert::ToInt32(f->ReadLine()));
					medcard->SetHeight(Convert::ToInt32(f->ReadLine()));
					work->SetNamework(f->ReadLine());
					work->SetPayment(Convert::ToInt32(f->ReadLine()));
					clothes->SetBody(f->ReadLine());
					clothes->SetPants(f->ReadLine());
					clothes->SetShoes(f->ReadLine());
					realty->SetHousing(f->ReadLine());
					realty->SetVehicle(f->ReadLine());
					character->SetLevel(Convert::ToInt32(f->ReadLine()));
					f->Close();
					this->infomoneybalance->Text = Convert::ToString(character->GetMoneybalance());
					this->infoname->Text = character->GetName();
					this->infohealthpercent->Text = Convert::ToString(medcard->GetHealthStatus());
					this->menu->Visible = true;
					this->Infobox->Visible = true;
					this->newhumanbutton->Visible = false;
					this->dataGridViewclothes->Rows->Add();
					this->dataGridViewclothes->Rows->Add();
					this->dataGridViewclothes->Rows->Add();
					this->dataGridViewclothes->Rows->Add();
					this->dataGridViewclothes->Rows[0]->Cells[0]->Value = L"Âåðõ";
					this->dataGridViewclothes->Rows[1]->Cells[0]->Value = L"Øòàíû";
					this->dataGridViewclothes->Rows[2]->Cells[0]->Value = L"Îáóâü";
					this->dataGridViewclothes->Rows[3]->Cells[0]->Value = L"Ñîñòîÿíèå îäåæäû";
					if (clothes->GetShoes() == "Òóôëè") {
						this->buysuitbutton->Visible = false;
					}
				}
				catch (Exception^)
				{
					MessageBox::Show("Îøèáêà îòêðûòèÿ ôàéëà!", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
					this->Close();
				}
			}
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menu;
	protected:

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ðàáîòàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èìóùåñòâîToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïåðñîíàæToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çäîðîâüåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îäåæäàToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ Infobox;
	private: System::Windows::Forms::Label^ infohealth;
	private: System::Windows::Forms::Label^ infobalance;
	private: System::Windows::Forms::Label^ infoname;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ newhumanbutton;
	private: System::Windows::Forms::GroupBox^ groupBoxhuman;
	private: System::Windows::Forms::Label^ humanbalance;
	private: System::Windows::Forms::Label^ labelhumanbalance;
	private: System::Windows::Forms::Label^ humanage;

	private: System::Windows::Forms::Label^ labelhumanage;
	private: System::Windows::Forms::Label^ humansex;
	private: System::Windows::Forms::Label^ labelhumansex;
	private: System::Windows::Forms::Label^ humanname;
	private: System::Windows::Forms::Label^ labelhumanname;
	private: System::Windows::Forms::Label^ labelmyhuman;
	private: System::Windows::Forms::GroupBox^ groupBoxwork;
	private: System::Windows::Forms::Label^ payment;




	private: System::Windows::Forms::Label^ labelpayment;
	private: System::Windows::Forms::Label^ namework;


	private: System::Windows::Forms::Label^ labelnamework;
	private: System::Windows::Forms::Label^ workname;


	private: System::Windows::Forms::Label^ labelworkhumanname;
	private: System::Windows::Forms::Label^ labelwork;
	private: System::Windows::Forms::Button^ workingbutton;
	private: System::Windows::Forms::Label^ infopercent;

	private: System::Windows::Forms::GroupBox^ groupBoxmd;

	private: System::Windows::Forms::Label^ labelmdpercent;
	private: System::Windows::Forms::Label^ health;
	private: System::Windows::Forms::Label^ labelhealth;
	private: System::Windows::Forms::Label^ imt;
	private: System::Windows::Forms::Label^ labelimt;
private: System::Windows::Forms::Button^ healthbutton;


	private: System::Windows::Forms::Label^ mdheight;
	private: System::Windows::Forms::Label^ labelmdheight;
	private: System::Windows::Forms::Label^ mdweight;
	private: System::Windows::Forms::Label^ labelmdweight;
	private: System::Windows::Forms::Label^ mdname;
	private: System::Windows::Forms::Label^ labelmdname;
	private: System::Windows::Forms::Label^ labelmedicalcard;
	private: System::Windows::Forms::GroupBox^ groupBoxrealty;

	private: System::Windows::Forms::Button^ buybutton;

	private: System::Windows::Forms::Label^ labelrealtybuy;










	private: System::Windows::Forms::Label^ realtycar;

	private: System::Windows::Forms::Label^ labelrealtycar;
	private: System::Windows::Forms::Label^ realtyhouse;


	private: System::Windows::Forms::Label^ labelrealtyhouse;

	private: System::Windows::Forms::Label^ labelrealty;
private: System::Windows::Forms::ComboBox^ comboBoxrealtycar;
private: System::Windows::Forms::CheckBox^ checkBoxcar;
private: System::Windows::Forms::CheckBox^ checkBoxhouse;
private: System::Windows::Forms::ComboBox^ comboBoxrealtyhouse;
private: System::Windows::Forms::Label^ infohealthpercent;
private: System::Windows::Forms::Label^ infomoneybalance;
private: System::Windows::Forms::GroupBox^ groupBoxclothes;
private: System::Windows::Forms::DataGridView^ dataGridViewclothes;


private: System::Windows::Forms::Button^ buttonsewup;
private: System::Windows::Forms::Label^ labelclothes;
private: System::Windows::Forms::Button^ buysuitbutton;







	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->ðàáîòàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èìóùåñòâîToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïåðñîíàæToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çäîðîâüåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îäåæäàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Infobox = (gcnew System::Windows::Forms::GroupBox());
			this->infomoneybalance = (gcnew System::Windows::Forms::Label());
			this->infohealthpercent = (gcnew System::Windows::Forms::Label());
			this->infopercent = (gcnew System::Windows::Forms::Label());
			this->infohealth = (gcnew System::Windows::Forms::Label());
			this->infobalance = (gcnew System::Windows::Forms::Label());
			this->infoname = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->newhumanbutton = (gcnew System::Windows::Forms::Button());
			this->groupBoxhuman = (gcnew System::Windows::Forms::GroupBox());
			this->humanbalance = (gcnew System::Windows::Forms::Label());
			this->labelhumanbalance = (gcnew System::Windows::Forms::Label());
			this->humanage = (gcnew System::Windows::Forms::Label());
			this->labelhumanage = (gcnew System::Windows::Forms::Label());
			this->humansex = (gcnew System::Windows::Forms::Label());
			this->labelhumansex = (gcnew System::Windows::Forms::Label());
			this->humanname = (gcnew System::Windows::Forms::Label());
			this->labelhumanname = (gcnew System::Windows::Forms::Label());
			this->labelmyhuman = (gcnew System::Windows::Forms::Label());
			this->groupBoxwork = (gcnew System::Windows::Forms::GroupBox());
			this->workingbutton = (gcnew System::Windows::Forms::Button());
			this->payment = (gcnew System::Windows::Forms::Label());
			this->labelpayment = (gcnew System::Windows::Forms::Label());
			this->namework = (gcnew System::Windows::Forms::Label());
			this->labelnamework = (gcnew System::Windows::Forms::Label());
			this->workname = (gcnew System::Windows::Forms::Label());
			this->labelworkhumanname = (gcnew System::Windows::Forms::Label());
			this->labelwork = (gcnew System::Windows::Forms::Label());
			this->groupBoxmd = (gcnew System::Windows::Forms::GroupBox());
			this->labelmdpercent = (gcnew System::Windows::Forms::Label());
			this->health = (gcnew System::Windows::Forms::Label());
			this->labelhealth = (gcnew System::Windows::Forms::Label());
			this->imt = (gcnew System::Windows::Forms::Label());
			this->labelimt = (gcnew System::Windows::Forms::Label());
			this->healthbutton = (gcnew System::Windows::Forms::Button());
			this->mdheight = (gcnew System::Windows::Forms::Label());
			this->labelmdheight = (gcnew System::Windows::Forms::Label());
			this->mdweight = (gcnew System::Windows::Forms::Label());
			this->labelmdweight = (gcnew System::Windows::Forms::Label());
			this->mdname = (gcnew System::Windows::Forms::Label());
			this->labelmdname = (gcnew System::Windows::Forms::Label());
			this->labelmedicalcard = (gcnew System::Windows::Forms::Label());
			this->groupBoxclothes = (gcnew System::Windows::Forms::GroupBox());
			this->buysuitbutton = (gcnew System::Windows::Forms::Button());
			this->dataGridViewclothes = (gcnew System::Windows::Forms::DataGridView());
			this->parametr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cloth = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonsewup = (gcnew System::Windows::Forms::Button());
			this->labelclothes = (gcnew System::Windows::Forms::Label());
			this->groupBoxrealty = (gcnew System::Windows::Forms::GroupBox());
			this->comboBoxrealtycar = (gcnew System::Windows::Forms::ComboBox());
			this->checkBoxcar = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxhouse = (gcnew System::Windows::Forms::CheckBox());
			this->comboBoxrealtyhouse = (gcnew System::Windows::Forms::ComboBox());
			this->buybutton = (gcnew System::Windows::Forms::Button());
			this->labelrealtybuy = (gcnew System::Windows::Forms::Label());
			this->realtycar = (gcnew System::Windows::Forms::Label());
			this->labelrealtycar = (gcnew System::Windows::Forms::Label());
			this->realtyhouse = (gcnew System::Windows::Forms::Label());
			this->labelrealtyhouse = (gcnew System::Windows::Forms::Label());
			this->labelrealty = (gcnew System::Windows::Forms::Label());
			this->buttonload = (gcnew System::Windows::Forms::Button());
			this->menu->SuspendLayout();
			this->Infobox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBoxhuman->SuspendLayout();
			this->groupBoxwork->SuspendLayout();
			this->groupBoxmd->SuspendLayout();
			this->groupBoxclothes->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewclothes))->BeginInit();
			this->groupBoxrealty->SuspendLayout();
			this->SuspendLayout();
			// 
			// menu
			// 
			this->menu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->menu->AutoSize = false;
			this->menu->BackColor = System::Drawing::Color::Goldenrod;
			this->menu->Dock = System::Windows::Forms::DockStyle::None;
			this->menu->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ðàáîòàToolStripMenuItem,
					this->èìóùåñòâîToolStripMenuItem, this->ïåðñîíàæToolStripMenuItem, this->çäîðîâüåToolStripMenuItem, this->îäåæäàToolStripMenuItem
			});
			this->menu->Location = System::Drawing::Point(54, 446);
			this->menu->Name = L"menu";
			this->menu->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menu->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menu->Size = System::Drawing::Size(630, 70);
			this->menu->TabIndex = 0;
			this->menu->Text = L"Ìåíþ";
			this->menu->Visible = false;
			// 
			// ðàáîòàToolStripMenuItem
			// 
			this->ðàáîòàToolStripMenuItem->AutoSize = false;
			this->ðàáîòàToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 14));
			this->ðàáîòàToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ðàáîòàToolStripMenuItem.Image")));
			this->ðàáîòàToolStripMenuItem->Name = L"ðàáîòàToolStripMenuItem";
			this->ðàáîòàToolStripMenuItem->Size = System::Drawing::Size(125, 76);
			this->ðàáîòàToolStripMenuItem->Text = L"Ðàáîòà";
			this->ðàáîòàToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->ðàáîòàToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->ðàáîòàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::ðàáîòàToolStripMenuItem_Click);
			// 
			// èìóùåñòâîToolStripMenuItem
			// 
			this->èìóùåñòâîToolStripMenuItem->AutoSize = false;
			this->èìóùåñòâîToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 14));
			this->èìóùåñòâîToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"èìóùåñòâîToolStripMenuItem.Image")));
			this->èìóùåñòâîToolStripMenuItem->Name = L"èìóùåñòâîToolStripMenuItem";
			this->èìóùåñòâîToolStripMenuItem->Size = System::Drawing::Size(125, 76);
			this->èìóùåñòâîToolStripMenuItem->Text = L"Èìóùåñòâî";
			this->èìóùåñòâîToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->èìóùåñòâîToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->èìóùåñòâîToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::èìóùåñòâîToolStripMenuItem_Click);
			// 
			// ïåðñîíàæToolStripMenuItem
			// 
			this->ïåðñîíàæToolStripMenuItem->AutoSize = false;
			this->ïåðñîíàæToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 14));
			this->ïåðñîíàæToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ïåðñîíàæToolStripMenuItem.Image")));
			this->ïåðñîíàæToolStripMenuItem->Name = L"ïåðñîíàæToolStripMenuItem";
			this->ïåðñîíàæToolStripMenuItem->Size = System::Drawing::Size(125, 76);
			this->ïåðñîíàæToolStripMenuItem->Text = L"Ïåðñîíàæ";
			this->ïåðñîíàæToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->ïåðñîíàæToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->ïåðñîíàæToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::ïåðñîíàæToolStripMenuItem_Click);
			// 
			// çäîðîâüåToolStripMenuItem
			// 
			this->çäîðîâüåToolStripMenuItem->AutoSize = false;
			this->çäîðîâüåToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 14));
			this->çäîðîâüåToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"çäîðîâüåToolStripMenuItem.Image")));
			this->çäîðîâüåToolStripMenuItem->Name = L"çäîðîâüåToolStripMenuItem";
			this->çäîðîâüåToolStripMenuItem->Size = System::Drawing::Size(125, 76);
			this->çäîðîâüåToolStripMenuItem->Text = L"Çäîðîâüå";
			this->çäîðîâüåToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->çäîðîâüåToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->çäîðîâüåToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::çäîðîâüåToolStripMenuItem_Click);
			// 
			// îäåæäàToolStripMenuItem
			// 
			this->îäåæäàToolStripMenuItem->AutoSize = false;
			this->îäåæäàToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 14));
			this->îäåæäàToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"îäåæäàToolStripMenuItem.Image")));
			this->îäåæäàToolStripMenuItem->Name = L"îäåæäàToolStripMenuItem";
			this->îäåæäàToolStripMenuItem->Size = System::Drawing::Size(125, 76);
			this->îäåæäàToolStripMenuItem->Text = L"Îäåæäà";
			this->îäåæäàToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->îäåæäàToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->îäåæäàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::îäåæäàToolStripMenuItem_Click);
			// 
			// Infobox
			// 
			this->Infobox->BackColor = System::Drawing::SystemColors::Info;
			this->Infobox->Controls->Add(this->infomoneybalance);
			this->Infobox->Controls->Add(this->infohealthpercent);
			this->Infobox->Controls->Add(this->infopercent);
			this->Infobox->Controls->Add(this->infohealth);
			this->Infobox->Controls->Add(this->infobalance);
			this->Infobox->Controls->Add(this->infoname);
			this->Infobox->Controls->Add(this->pictureBox1);
			this->Infobox->Location = System::Drawing::Point(560, 2);
			this->Infobox->Margin = System::Windows::Forms::Padding(2);
			this->Infobox->Name = L"Infobox";
			this->Infobox->Padding = System::Windows::Forms::Padding(2);
			this->Infobox->Size = System::Drawing::Size(194, 75);
			this->Infobox->TabIndex = 1;
			this->Infobox->TabStop = false;
			this->Infobox->Visible = false;
			// 
			// infomoneybalance
			// 
			this->infomoneybalance->AutoSize = true;
			this->infomoneybalance->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->infomoneybalance->Location = System::Drawing::Point(5, 34);
			this->infomoneybalance->Name = L"infomoneybalance";
			this->infomoneybalance->Size = System::Drawing::Size(56, 19);
			this->infomoneybalance->TabIndex = 20;
			this->infomoneybalance->Text = L"Áàëàíñ";
			// 
			// infohealthpercent
			// 
			this->infohealthpercent->AutoSize = true;
			this->infohealthpercent->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->infohealthpercent->Location = System::Drawing::Point(68, 56);
			this->infohealthpercent->Name = L"infohealthpercent";
			this->infohealthpercent->Size = System::Drawing::Size(32, 17);
			this->infohealthpercent->TabIndex = 19;
			this->infohealthpercent->Text = L"100";
			// 
			// infopercent
			// 
			this->infopercent->AutoSize = true;
			this->infopercent->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->infopercent->Location = System::Drawing::Point(101, 56);
			this->infopercent->Name = L"infopercent";
			this->infopercent->Size = System::Drawing::Size(23, 17);
			this->infopercent->TabIndex = 18;
			this->infopercent->Text = L"%";
			// 
			// infohealth
			// 
			this->infohealth->AutoSize = true;
			this->infohealth->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->infohealth->Location = System::Drawing::Point(-3, 56);
			this->infohealth->Name = L"infohealth";
			this->infohealth->Size = System::Drawing::Size(72, 17);
			this->infohealth->TabIndex = 2;
			this->infohealth->Text = L"Çäîðîâüå";
			// 
			// infobalance
			// 
			this->infobalance->AutoSize = true;
			this->infobalance->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->infobalance->Location = System::Drawing::Point(-3, 17);
			this->infobalance->Name = L"infobalance";
			this->infobalance->Size = System::Drawing::Size(56, 17);
			this->infobalance->TabIndex = 2;
			this->infobalance->Text = L"Áàëàíñ";
			// 
			// infoname
			// 
			this->infoname->AutoSize = true;
			this->infoname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->infoname->Location = System::Drawing::Point(-3, 0);
			this->infoname->Name = L"infoname";
			this->infoname->Size = System::Drawing::Size(38, 17);
			this->infoname->TabIndex = 1;
			this->infoname->Text = L"Èìÿ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(130, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(64, 75);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// newhumanbutton
			// 
			this->newhumanbutton->BackColor = System::Drawing::Color::Goldenrod;
			this->newhumanbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->newhumanbutton->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->newhumanbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->newhumanbutton->Location = System::Drawing::Point(314, 236);
			this->newhumanbutton->Name = L"newhumanbutton";
			this->newhumanbutton->Size = System::Drawing::Size(107, 52);
			this->newhumanbutton->TabIndex = 2;
			this->newhumanbutton->Text = L"Ñîçäàòü ïåðñîíàæà";
			this->newhumanbutton->UseVisualStyleBackColor = false;
			this->newhumanbutton->Click += gcnew System::EventHandler(this, &Game::newhumanbutton_Click);
			// 
			// groupBoxhuman
			// 
			this->groupBoxhuman->BackColor = System::Drawing::Color::NavajoWhite;
			this->groupBoxhuman->Controls->Add(this->humanbalance);
			this->groupBoxhuman->Controls->Add(this->labelhumanbalance);
			this->groupBoxhuman->Controls->Add(this->humanage);
			this->groupBoxhuman->Controls->Add(this->labelhumanage);
			this->groupBoxhuman->Controls->Add(this->humansex);
			this->groupBoxhuman->Controls->Add(this->labelhumansex);
			this->groupBoxhuman->Controls->Add(this->humanname);
			this->groupBoxhuman->Controls->Add(this->labelhumanname);
			this->groupBoxhuman->Controls->Add(this->labelmyhuman);
			this->groupBoxhuman->Location = System::Drawing::Point(241, 82);
			this->groupBoxhuman->Name = L"groupBoxhuman";
			this->groupBoxhuman->Size = System::Drawing::Size(259, 361);
			this->groupBoxhuman->TabIndex = 3;
			this->groupBoxhuman->TabStop = false;
			this->groupBoxhuman->Visible = false;
			// 
			// humanbalance
			// 
			this->humanbalance->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->humanbalance->AutoSize = true;
			this->humanbalance->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->humanbalance->Location = System::Drawing::Point(107, 172);
			this->humanbalance->Name = L"humanbalance";
			this->humanbalance->Size = System::Drawing::Size(74, 17);
			this->humanbalance->TabIndex = 10;
			this->humanbalance->Text = L"ÁÀËÀÍÑ";
			this->humanbalance->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelhumanbalance
			// 
			this->labelhumanbalance->AutoSize = true;
			this->labelhumanbalance->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelhumanbalance->Location = System::Drawing::Point(6, 172);
			this->labelhumanbalance->Name = L"labelhumanbalance";
			this->labelhumanbalance->Size = System::Drawing::Size(56, 17);
			this->labelhumanbalance->TabIndex = 9;
			this->labelhumanbalance->Text = L"Áàëàíñ";
			// 
			// humanage
			// 
			this->humanage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->humanage->AutoSize = true;
			this->humanage->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->humanage->Location = System::Drawing::Point(107, 135);
			this->humanage->Name = L"humanage";
			this->humanage->Size = System::Drawing::Size(39, 17);
			this->humanage->TabIndex = 8;
			this->humanage->Text = L"ÃÎÄ";
			this->humanage->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelhumanage
			// 
			this->labelhumanage->AutoSize = true;
			this->labelhumanage->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelhumanage->Location = System::Drawing::Point(6, 135);
			this->labelhumanage->Name = L"labelhumanage";
			this->labelhumanage->Size = System::Drawing::Size(63, 17);
			this->labelhumanage->TabIndex = 7;
			this->labelhumanage->Text = L"Âîçðàñò";
			// 
			// humansex
			// 
			this->humansex->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->humansex->AutoSize = true;
			this->humansex->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->humansex->Location = System::Drawing::Point(107, 99);
			this->humansex->Name = L"humansex";
			this->humansex->Size = System::Drawing::Size(42, 17);
			this->humansex->TabIndex = 6;
			this->humansex->Text = L"ÏÎË";
			this->humansex->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelhumansex
			// 
			this->labelhumansex->AutoSize = true;
			this->labelhumansex->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelhumansex->Location = System::Drawing::Point(6, 99);
			this->labelhumansex->Name = L"labelhumansex";
			this->labelhumansex->Size = System::Drawing::Size(36, 17);
			this->labelhumansex->TabIndex = 5;
			this->labelhumansex->Text = L"Ïîë";
			// 
			// humanname
			// 
			this->humanname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->humanname->AutoSize = true;
			this->humanname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->humanname->Location = System::Drawing::Point(107, 61);
			this->humanname->Name = L"humanname";
			this->humanname->Size = System::Drawing::Size(46, 17);
			this->humanname->TabIndex = 4;
			this->humanname->Text = L"ÈÌß";
			this->humanname->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelhumanname
			// 
			this->labelhumanname->AutoSize = true;
			this->labelhumanname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelhumanname->Location = System::Drawing::Point(6, 61);
			this->labelhumanname->Name = L"labelhumanname";
			this->labelhumanname->Size = System::Drawing::Size(38, 17);
			this->labelhumanname->TabIndex = 3;
			this->labelhumanname->Text = L"Èìÿ";
			// 
			// labelmyhuman
			// 
			this->labelmyhuman->AutoSize = true;
			this->labelmyhuman->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelmyhuman->Location = System::Drawing::Point(63, 16);
			this->labelmyhuman->Name = L"labelmyhuman";
			this->labelmyhuman->Size = System::Drawing::Size(137, 22);
			this->labelmyhuman->TabIndex = 2;
			this->labelmyhuman->Text = L"Ìîé ïåðñîíàæ";
			// 
			// groupBoxwork
			// 
			this->groupBoxwork->BackColor = System::Drawing::Color::NavajoWhite;
			this->groupBoxwork->Controls->Add(this->workingbutton);
			this->groupBoxwork->Controls->Add(this->payment);
			this->groupBoxwork->Controls->Add(this->labelpayment);
			this->groupBoxwork->Controls->Add(this->namework);
			this->groupBoxwork->Controls->Add(this->labelnamework);
			this->groupBoxwork->Controls->Add(this->workname);
			this->groupBoxwork->Controls->Add(this->labelworkhumanname);
			this->groupBoxwork->Controls->Add(this->labelwork);
			this->groupBoxwork->Location = System::Drawing::Point(241, 82);
			this->groupBoxwork->Name = L"groupBoxwork";
			this->groupBoxwork->Size = System::Drawing::Size(259, 361);
			this->groupBoxwork->TabIndex = 11;
			this->groupBoxwork->TabStop = false;
			this->groupBoxwork->Visible = false;
			// 
			// workingbutton
			// 
			this->workingbutton->BackColor = System::Drawing::Color::Goldenrod;
			this->workingbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->workingbutton->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->workingbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->workingbutton->Location = System::Drawing::Point(76, 275);
			this->workingbutton->Name = L"workingbutton";
			this->workingbutton->Size = System::Drawing::Size(107, 52);
			this->workingbutton->TabIndex = 12;
			this->workingbutton->Text = L"Ðàáîòàòü";
			this->workingbutton->UseVisualStyleBackColor = false;
			this->workingbutton->Click += gcnew System::EventHandler(this, &Game::workingbutton_Click);
			// 
			// payment
			// 
			this->payment->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->payment->AutoSize = true;
			this->payment->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->payment->Location = System::Drawing::Point(107, 135);
			this->payment->Name = L"payment";
			this->payment->Size = System::Drawing::Size(73, 17);
			this->payment->TabIndex = 8;
			this->payment->Text = L"ÎÏËÀÒÀ";
			this->payment->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelpayment
			// 
			this->labelpayment->AutoSize = true;
			this->labelpayment->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelpayment->Location = System::Drawing::Point(6, 135);
			this->labelpayment->Name = L"labelpayment";
			this->labelpayment->Size = System::Drawing::Size(59, 17);
			this->labelpayment->TabIndex = 7;
			this->labelpayment->Text = L"Îïëàòà";
			// 
			// namework
			// 
			this->namework->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->namework->AutoSize = true;
			this->namework->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->namework->Location = System::Drawing::Point(107, 99);
			this->namework->Name = L"namework";
			this->namework->Size = System::Drawing::Size(68, 17);
			this->namework->TabIndex = 6;
			this->namework->Text = L"ÐÀÁÎÒÀ";
			this->namework->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelnamework
			// 
			this->labelnamework->AutoSize = true;
			this->labelnamework->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelnamework->Location = System::Drawing::Point(6, 99);
			this->labelnamework->Name = L"labelnamework";
			this->labelnamework->Size = System::Drawing::Size(55, 17);
			this->labelnamework->TabIndex = 5;
			this->labelnamework->Text = L"Ðàáîòà";
			// 
			// workname
			// 
			this->workname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->workname->AutoSize = true;
			this->workname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->workname->Location = System::Drawing::Point(107, 61);
			this->workname->Name = L"workname";
			this->workname->Size = System::Drawing::Size(46, 17);
			this->workname->TabIndex = 4;
			this->workname->Text = L"ÈÌß";
			this->workname->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelworkhumanname
			// 
			this->labelworkhumanname->AutoSize = true;
			this->labelworkhumanname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelworkhumanname->Location = System::Drawing::Point(6, 61);
			this->labelworkhumanname->Name = L"labelworkhumanname";
			this->labelworkhumanname->Size = System::Drawing::Size(38, 17);
			this->labelworkhumanname->TabIndex = 3;
			this->labelworkhumanname->Text = L"Èìÿ";
			// 
			// labelwork
			// 
			this->labelwork->AutoSize = true;
			this->labelwork->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelwork->Location = System::Drawing::Point(46, 16);
			this->labelwork->Name = L"labelwork";
			this->labelwork->Size = System::Drawing::Size(170, 22);
			this->labelwork->TabIndex = 2;
			this->labelwork->Text = L"Ðàáî÷àÿ êàðòî÷êà";
			// 
			// groupBoxmd
			// 
			this->groupBoxmd->BackColor = System::Drawing::Color::NavajoWhite;
			this->groupBoxmd->Controls->Add(this->labelmdpercent);
			this->groupBoxmd->Controls->Add(this->health);
			this->groupBoxmd->Controls->Add(this->labelhealth);
			this->groupBoxmd->Controls->Add(this->imt);
			this->groupBoxmd->Controls->Add(this->labelimt);
			this->groupBoxmd->Controls->Add(this->healthbutton);
			this->groupBoxmd->Controls->Add(this->mdheight);
			this->groupBoxmd->Controls->Add(this->labelmdheight);
			this->groupBoxmd->Controls->Add(this->mdweight);
			this->groupBoxmd->Controls->Add(this->labelmdweight);
			this->groupBoxmd->Controls->Add(this->mdname);
			this->groupBoxmd->Controls->Add(this->labelmdname);
			this->groupBoxmd->Controls->Add(this->labelmedicalcard);
			this->groupBoxmd->Location = System::Drawing::Point(241, 82);
			this->groupBoxmd->Name = L"groupBoxmd";
			this->groupBoxmd->Size = System::Drawing::Size(259, 361);
			this->groupBoxmd->TabIndex = 12;
			this->groupBoxmd->TabStop = false;
			this->groupBoxmd->Visible = false;
			// 
			// labelmdpercent
			// 
			this->labelmdpercent->AutoSize = true;
			this->labelmdpercent->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelmdpercent->Location = System::Drawing::Point(136, 221);
			this->labelmdpercent->Name = L"labelmdpercent";
			this->labelmdpercent->Size = System::Drawing::Size(23, 17);
			this->labelmdpercent->TabIndex = 17;
			this->labelmdpercent->Text = L"%";
			// 
			// health
			// 
			this->health->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->health->AutoSize = true;
			this->health->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->health->Location = System::Drawing::Point(107, 221);
			this->health->Name = L"health";
			this->health->Size = System::Drawing::Size(32, 17);
			this->health->TabIndex = 16;
			this->health->Text = L"100";
			this->health->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelhealth
			// 
			this->labelhealth->AutoSize = true;
			this->labelhealth->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelhealth->Location = System::Drawing::Point(6, 221);
			this->labelhealth->Name = L"labelhealth";
			this->labelhealth->Size = System::Drawing::Size(72, 17);
			this->labelhealth->TabIndex = 15;
			this->labelhealth->Text = L"Çäîðîâüå";
			// 
			// imt
			// 
			this->imt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->imt->AutoSize = true;
			this->imt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->imt->Location = System::Drawing::Point(107, 177);
			this->imt->Name = L"imt";
			this->imt->Size = System::Drawing::Size(45, 17);
			this->imt->TabIndex = 14;
			this->imt->Text = L"ÈÌÒ";
			this->imt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelimt
			// 
			this->labelimt->AutoSize = true;
			this->labelimt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelimt->Location = System::Drawing::Point(6, 177);
			this->labelimt->Name = L"labelimt";
			this->labelimt->Size = System::Drawing::Size(45, 17);
			this->labelimt->TabIndex = 13;
			this->labelimt->Text = L"ÈÌÒ";
			// 
			// healthbutton
			// 
			this->healthbutton->BackColor = System::Drawing::Color::Goldenrod;
			this->healthbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->healthbutton->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->healthbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->healthbutton->Location = System::Drawing::Point(65, 275);
			this->healthbutton->Name = L"healthbutton";
			this->healthbutton->Size = System::Drawing::Size(124, 52);
			this->healthbutton->TabIndex = 12;
			this->healthbutton->Text = L"Ëå÷èòüñÿ(10$)";
			this->healthbutton->UseVisualStyleBackColor = false;
			this->healthbutton->Click += gcnew System::EventHandler(this, &Game::healthbutton_Click);
			// 
			// mdheight
			// 
			this->mdheight->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->mdheight->AutoSize = true;
			this->mdheight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mdheight->Location = System::Drawing::Point(107, 135);
			this->mdheight->Name = L"mdheight";
			this->mdheight->Size = System::Drawing::Size(50, 17);
			this->mdheight->TabIndex = 8;
			this->mdheight->Text = L"ÐÎÑÒ";
			this->mdheight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelmdheight
			// 
			this->labelmdheight->AutoSize = true;
			this->labelmdheight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelmdheight->Location = System::Drawing::Point(6, 135);
			this->labelmdheight->Name = L"labelmdheight";
			this->labelmdheight->Size = System::Drawing::Size(40, 17);
			this->labelmdheight->TabIndex = 7;
			this->labelmdheight->Text = L"Ðîñò";
			// 
			// mdweight
			// 
			this->mdweight->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->mdweight->AutoSize = true;
			this->mdweight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mdweight->Location = System::Drawing::Point(107, 99);
			this->mdweight->Name = L"mdweight";
			this->mdweight->Size = System::Drawing::Size(40, 17);
			this->mdweight->TabIndex = 6;
			this->mdweight->Text = L"ÂÅÑ";
			this->mdweight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelmdweight
			// 
			this->labelmdweight->AutoSize = true;
			this->labelmdweight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelmdweight->Location = System::Drawing::Point(6, 99);
			this->labelmdweight->Name = L"labelmdweight";
			this->labelmdweight->Size = System::Drawing::Size(34, 17);
			this->labelmdweight->TabIndex = 5;
			this->labelmdweight->Text = L"Âåñ";
			// 
			// mdname
			// 
			this->mdname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->mdname->AutoSize = true;
			this->mdname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mdname->Location = System::Drawing::Point(107, 61);
			this->mdname->Name = L"mdname";
			this->mdname->Size = System::Drawing::Size(46, 17);
			this->mdname->TabIndex = 4;
			this->mdname->Text = L"ÈÌß";
			this->mdname->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelmdname
			// 
			this->labelmdname->AutoSize = true;
			this->labelmdname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelmdname->Location = System::Drawing::Point(6, 61);
			this->labelmdname->Name = L"labelmdname";
			this->labelmdname->Size = System::Drawing::Size(38, 17);
			this->labelmdname->TabIndex = 3;
			this->labelmdname->Text = L"Èìÿ";
			// 
			// labelmedicalcard
			// 
			this->labelmedicalcard->AutoSize = true;
			this->labelmedicalcard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelmedicalcard->Location = System::Drawing::Point(33, 16);
			this->labelmedicalcard->Name = L"labelmedicalcard";
			this->labelmedicalcard->Size = System::Drawing::Size(186, 22);
			this->labelmedicalcard->TabIndex = 2;
			this->labelmedicalcard->Text = L"Ìåäèöèíñêàÿ êàðòà";
			// 
			// groupBoxclothes
			// 
			this->groupBoxclothes->BackColor = System::Drawing::Color::NavajoWhite;
			this->groupBoxclothes->Controls->Add(this->buysuitbutton);
			this->groupBoxclothes->Controls->Add(this->dataGridViewclothes);
			this->groupBoxclothes->Controls->Add(this->buttonsewup);
			this->groupBoxclothes->Controls->Add(this->labelclothes);
			this->groupBoxclothes->Location = System::Drawing::Point(241, 82);
			this->groupBoxclothes->Name = L"groupBoxclothes";
			this->groupBoxclothes->Size = System::Drawing::Size(259, 361);
			this->groupBoxclothes->TabIndex = 13;
			this->groupBoxclothes->TabStop = false;
			this->groupBoxclothes->Visible = false;
			// 
			// buysuitbutton
			// 
			this->buysuitbutton->BackColor = System::Drawing::Color::Goldenrod;
			this->buysuitbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buysuitbutton->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buysuitbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buysuitbutton->Location = System::Drawing::Point(55, 226);
			this->buysuitbutton->Name = L"buysuitbutton";
			this->buysuitbutton->Size = System::Drawing::Size(145, 43);
			this->buysuitbutton->TabIndex = 14;
			this->buysuitbutton->Text = L"Êóïèòü êîñòþì(1000$)";
			this->buysuitbutton->UseVisualStyleBackColor = false;
			this->buysuitbutton->Click += gcnew System::EventHandler(this, &Game::buysuitbutton_Click);
			// 
			// dataGridViewclothes
			// 
			this->dataGridViewclothes->AllowUserToAddRows = false;
			this->dataGridViewclothes->AllowUserToDeleteRows = false;
			this->dataGridViewclothes->AllowUserToResizeColumns = false;
			this->dataGridViewclothes->AllowUserToResizeRows = false;
			this->dataGridViewclothes->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewclothes->BackgroundColor = System::Drawing::Color::NavajoWhite;
			this->dataGridViewclothes->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Cornsilk;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewclothes->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewclothes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewclothes->ColumnHeadersVisible = false;
			this->dataGridViewclothes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->parametr,
					this->cloth
			});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewclothes->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridViewclothes->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->dataGridViewclothes->Location = System::Drawing::Point(6, 81);
			this->dataGridViewclothes->Name = L"dataGridViewclothes";
			this->dataGridViewclothes->ReadOnly = true;
			this->dataGridViewclothes->RowHeadersVisible = false;
			this->dataGridViewclothes->Size = System::Drawing::Size(247, 137);
			this->dataGridViewclothes->TabIndex = 13;
			// 
			// parametr
			// 
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			this->parametr->DefaultCellStyle = dataGridViewCellStyle2;
			this->parametr->Frozen = true;
			this->parametr->HeaderText = L"Ïàðàìåòð";
			this->parametr->MaxInputLength = 30;
			this->parametr->Name = L"parametr";
			this->parametr->ReadOnly = true;
			this->parametr->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->parametr->Width = 124;
			// 
			// cloth
			// 
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			this->cloth->DefaultCellStyle = dataGridViewCellStyle3;
			this->cloth->Frozen = true;
			this->cloth->HeaderText = L"Îäåæäà";
			this->cloth->MaxInputLength = 30;
			this->cloth->Name = L"cloth";
			this->cloth->ReadOnly = true;
			this->cloth->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->cloth->Width = 124;
			// 
			// buttonsewup
			// 
			this->buttonsewup->BackColor = System::Drawing::Color::Goldenrod;
			this->buttonsewup->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonsewup->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonsewup->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttonsewup->Location = System::Drawing::Point(65, 275);
			this->buttonsewup->Name = L"buttonsewup";
			this->buttonsewup->Size = System::Drawing::Size(124, 52);
			this->buttonsewup->TabIndex = 12;
			this->buttonsewup->Text = L"Ïî÷èíèòü îäåæäó(5$)";
			this->buttonsewup->UseVisualStyleBackColor = false;
			this->buttonsewup->Click += gcnew System::EventHandler(this, &Game::buttonsewup_Click);
			// 
			// labelclothes
			// 
			this->labelclothes->AutoSize = true;
			this->labelclothes->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelclothes->Location = System::Drawing::Point(95, 16);
			this->labelclothes->Name = L"labelclothes";
			this->labelclothes->Size = System::Drawing::Size(77, 22);
			this->labelclothes->TabIndex = 2;
			this->labelclothes->Text = L"Îäåæäà";
			// 
			// groupBoxrealty
			// 
			this->groupBoxrealty->BackColor = System::Drawing::Color::NavajoWhite;
			this->groupBoxrealty->Controls->Add(this->comboBoxrealtycar);
			this->groupBoxrealty->Controls->Add(this->checkBoxcar);
			this->groupBoxrealty->Controls->Add(this->checkBoxhouse);
			this->groupBoxrealty->Controls->Add(this->comboBoxrealtyhouse);
			this->groupBoxrealty->Controls->Add(this->buybutton);
			this->groupBoxrealty->Controls->Add(this->labelrealtybuy);
			this->groupBoxrealty->Controls->Add(this->realtycar);
			this->groupBoxrealty->Controls->Add(this->labelrealtycar);
			this->groupBoxrealty->Controls->Add(this->realtyhouse);
			this->groupBoxrealty->Controls->Add(this->labelrealtyhouse);
			this->groupBoxrealty->Controls->Add(this->labelrealty);
			this->groupBoxrealty->Location = System::Drawing::Point(241, 82);
			this->groupBoxrealty->Name = L"groupBoxrealty";
			this->groupBoxrealty->Size = System::Drawing::Size(259, 361);
			this->groupBoxrealty->TabIndex = 12;
			this->groupBoxrealty->TabStop = false;
			this->groupBoxrealty->Visible = false;
			// 
			// comboBoxrealtycar
			// 
			this->comboBoxrealtycar->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxrealtycar->FormattingEnabled = true;
			this->comboBoxrealtycar->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Ìîòîöèêë(200 000)", L"Àâòîìîáèëü(600 000)",
					L"Ëàìáà(9 000 000)"
			});
			this->comboBoxrealtycar->Location = System::Drawing::Point(18, 226);
			this->comboBoxrealtycar->Name = L"comboBoxrealtycar";
			this->comboBoxrealtycar->Size = System::Drawing::Size(222, 21);
			this->comboBoxrealtycar->TabIndex = 16;
			this->comboBoxrealtycar->Visible = false;
			// 
			// checkBoxcar
			// 
			this->checkBoxcar->AutoSize = true;
			this->checkBoxcar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBoxcar->Location = System::Drawing::Point(149, 172);
			this->checkBoxcar->Name = L"checkBoxcar";
			this->checkBoxcar->Size = System::Drawing::Size(91, 21);
			this->checkBoxcar->TabIndex = 15;
			this->checkBoxcar->Text = L"Òðàíñïîðò";
			this->checkBoxcar->UseVisualStyleBackColor = true;
			this->checkBoxcar->CheckedChanged += gcnew System::EventHandler(this, &Game::checkBoxcar_CheckedChanged);
			// 
			// checkBoxhouse
			// 
			this->checkBoxhouse->AutoSize = true;
			this->checkBoxhouse->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBoxhouse->Location = System::Drawing::Point(18, 172);
			this->checkBoxhouse->Name = L"checkBoxhouse";
			this->checkBoxhouse->Size = System::Drawing::Size(68, 21);
			this->checkBoxhouse->TabIndex = 14;
			this->checkBoxhouse->Text = L"Æèëü¸";
			this->checkBoxhouse->UseVisualStyleBackColor = true;
			this->checkBoxhouse->CheckedChanged += gcnew System::EventHandler(this, &Game::checkBoxhouse_CheckedChanged);
			// 
			// comboBoxrealtyhouse
			// 
			this->comboBoxrealtyhouse->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxrealtyhouse->FormattingEnabled = true;
			this->comboBoxrealtyhouse->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Êâàðòèðà(3 000 000)", L"Êîòòåäæ(7 000 000)",
					L"Âèëëà(20 000 000)"
			});
			this->comboBoxrealtyhouse->Location = System::Drawing::Point(18, 226);
			this->comboBoxrealtyhouse->Name = L"comboBoxrealtyhouse";
			this->comboBoxrealtyhouse->Size = System::Drawing::Size(222, 21);
			this->comboBoxrealtyhouse->TabIndex = 13;
			this->comboBoxrealtyhouse->Visible = false;
			// 
			// buybutton
			// 
			this->buybutton->BackColor = System::Drawing::Color::Goldenrod;
			this->buybutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buybutton->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buybutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buybutton->Location = System::Drawing::Point(66, 284);
			this->buybutton->Name = L"buybutton";
			this->buybutton->Size = System::Drawing::Size(124, 52);
			this->buybutton->TabIndex = 12;
			this->buybutton->Text = L"Êóïèòü";
			this->buybutton->UseVisualStyleBackColor = false;
			this->buybutton->Visible = false;
			this->buybutton->Click += gcnew System::EventHandler(this, &Game::buybutton_Click);
			// 
			// labelrealtybuy
			// 
			this->labelrealtybuy->AutoSize = true;
			this->labelrealtybuy->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelrealtybuy->Location = System::Drawing::Point(77, 142);
			this->labelrealtybuy->Name = L"labelrealtybuy";
			this->labelrealtybuy->Size = System::Drawing::Size(105, 17);
			this->labelrealtybuy->TabIndex = 7;
			this->labelrealtybuy->Text = L"Êóïèòü íîâîå";
			// 
			// realtycar
			// 
			this->realtycar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->realtycar->AutoSize = true;
			this->realtycar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->realtycar->Location = System::Drawing::Point(107, 99);
			this->realtycar->Name = L"realtycar";
			this->realtycar->Size = System::Drawing::Size(122, 17);
			this->realtycar->TabIndex = 6;
			this->realtycar->Text = L"ÀÂÒÎÌÎÁÈËÜ";
			this->realtycar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelrealtycar
			// 
			this->labelrealtycar->AutoSize = true;
			this->labelrealtycar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelrealtycar->Location = System::Drawing::Point(6, 99);
			this->labelrealtycar->Name = L"labelrealtycar";
			this->labelrealtycar->Size = System::Drawing::Size(81, 17);
			this->labelrealtycar->TabIndex = 5;
			this->labelrealtycar->Text = L"Òðàíñïîðò";
			// 
			// realtyhouse
			// 
			this->realtyhouse->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->realtyhouse->AutoSize = true;
			this->realtyhouse->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->realtyhouse->Location = System::Drawing::Point(107, 61);
			this->realtyhouse->Name = L"realtyhouse";
			this->realtyhouse->Size = System::Drawing::Size(65, 17);
			this->realtyhouse->TabIndex = 4;
			this->realtyhouse->Text = L"ÆÈËÜ¨";
			this->realtyhouse->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelrealtyhouse
			// 
			this->labelrealtyhouse->AutoSize = true;
			this->labelrealtyhouse->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelrealtyhouse->Location = System::Drawing::Point(6, 61);
			this->labelrealtyhouse->Name = L"labelrealtyhouse";
			this->labelrealtyhouse->Size = System::Drawing::Size(55, 17);
			this->labelrealtyhouse->TabIndex = 3;
			this->labelrealtyhouse->Text = L"Æèëü¸";
			// 
			// labelrealty
			// 
			this->labelrealty->AutoSize = true;
			this->labelrealty->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelrealty->Location = System::Drawing::Point(72, 16);
			this->labelrealty->Name = L"labelrealty";
			this->labelrealty->Size = System::Drawing::Size(108, 22);
			this->labelrealty->TabIndex = 2;
			this->labelrealty->Text = L"Èìóùåñòâî";
			// 
			// buttonload
			// 
			this->buttonload->BackColor = System::Drawing::Color::Goldenrod;
			this->buttonload->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonload->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonload->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttonload->Location = System::Drawing::Point(594, 83);
			this->buttonload->Name = L"buttonload";
			this->buttonload->Size = System::Drawing::Size(124, 52);
			this->buttonload->TabIndex = 14;
			this->buttonload->Text = L"Çàãðóçèòü ïåðñîíàæà";
			this->buttonload->UseVisualStyleBackColor = false;
			this->buttonload->Visible = false;
			this->buttonload->Click += gcnew System::EventHandler(this, &Game::buttonload_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(755, 525);
			this->Controls->Add(this->buttonload);
			this->Controls->Add(this->groupBoxclothes);
			this->Controls->Add(this->groupBoxmd);
			this->Controls->Add(this->groupBoxrealty);
			this->Controls->Add(this->groupBoxwork);
			this->Controls->Add(this->groupBoxhuman);
			this->Controls->Add(this->newhumanbutton);
			this->Controls->Add(this->Infobox);
			this->Controls->Add(this->menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menu;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"Game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ãëàâíîå ìåíþ";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Game::Game_FormClosing);
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->Infobox->ResumeLayout(false);
			this->Infobox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBoxhuman->ResumeLayout(false);
			this->groupBoxhuman->PerformLayout();
			this->groupBoxwork->ResumeLayout(false);
			this->groupBoxwork->PerformLayout();
			this->groupBoxmd->ResumeLayout(false);
			this->groupBoxmd->PerformLayout();
			this->groupBoxclothes->ResumeLayout(false);
			this->groupBoxclothes->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewclothes))->EndInit();
			this->groupBoxrealty->ResumeLayout(false);
			this->groupBoxrealty->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void newhumanbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->newhumanbutton->Visible = false;
	this->Infobox->Visible = true;
	this->buttonload->Visible = true;
	newhuman^ nh = gcnew newhuman();
	nh->Show();
}
private: System::Void ïåðñîíàæToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxwork->Visible = false;
	this->groupBoxclothes->Visible = false;
	this->groupBoxmd->Visible = false;
	this->groupBoxrealty->Visible = false;
	this->groupBoxhuman->Visible = true;
	this->humanname->Text = character->GetName();
	this->humansex->Text = character->GetSex();
	this->humanage->Text = Convert::ToString(character->GetAge());
	this->humanbalance->Text = Convert::ToString(character->GetMoneybalance());
}
private: System::Void çäîðîâüåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxhuman->Visible = false;
	this->groupBoxwork->Visible = false;
	this->groupBoxclothes->Visible = false;
	this->groupBoxrealty->Visible = false;
	this->groupBoxmd->Visible = true;
	this->mdname->Text = character->GetName();
	this->mdweight->Text = Convert::ToString(medcard->GetWeight());
	this->mdheight->Text = Convert::ToString(medcard->GetHeight());
	Double IMT = (medcard->GetWeight()+0.0) / (medcard->GetHeight() * medcard->GetHeight() / 10000);
	this->imt->Text = Convert::ToString(IMT);
}
private: System::Void èìóùåñòâîToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxhuman->Visible = false;
	this->groupBoxwork->Visible = false;
	this->groupBoxmd->Visible = false;
	this->groupBoxclothes->Visible = false;
	this->groupBoxrealty->Visible = true;
	this->realtyhouse->Text = realty->GetHousing();
	this->realtycar->Text = realty->GetVehicle();
}
private: System::Void ðàáîòàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxhuman->Visible = false;
	this->groupBoxclothes->Visible = false;
	this->groupBoxmd->Visible = false;
	this->groupBoxrealty->Visible = false;
	this->groupBoxwork->Visible = true;
	this->workname->Text = character->GetName();
	this->namework->Text = work->GetNamework();
	this->payment->Text = Convert::ToString(work->GetPayment());
}
private: System::Void îäåæäàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxhuman->Visible = false;
	this->groupBoxwork->Visible = false;
	this->groupBoxmd->Visible = false;
	this->groupBoxrealty->Visible = false;
	this->groupBoxclothes->Visible = true;
	this->dataGridViewclothes->Rows[0]->Cells[1]->Value = clothes->GetBody();
	this->dataGridViewclothes->Rows[1]->Cells[1]->Value = clothes->GetPants();
	this->dataGridViewclothes->Rows[2]->Cells[1]->Value = clothes->GetShoes();
	this->dataGridViewclothes->Rows[3]->Cells[1]->Value = clothes->GetClothesStatus();
}
private: System::Void checkBoxhouse_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBoxhouse->Checked == true) {
		this->comboBoxrealtyhouse->Visible = true;
		this->buybutton->Visible = true;
		this->checkBoxcar->Checked = false;
		this->comboBoxrealtycar->Visible = false;
	}
	else if (this->checkBoxhouse->Checked == false && this->checkBoxcar->Checked == true) {
		this->comboBoxrealtyhouse->Visible = false;
	}
	else {
		this->buybutton->Visible = false;
		this->comboBoxrealtycar->Visible = false;
	}
}
private: System::Void checkBoxcar_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBoxcar->Checked == true) {
		this->buybutton->Visible = true;
		this->checkBoxhouse->Checked = false;
		this->comboBoxrealtyhouse->Visible = false;
		this->comboBoxrealtycar->Visible = true;
	}
	else if (this->checkBoxcar->Checked == false && this->checkBoxhouse->Checked == true) {
		this->comboBoxrealtycar->Visible = false;
	}
	else {
		this->buybutton->Visible = false;
		this->comboBoxrealtycar->Visible = false;
	}
}
private: System::Void Game_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Âû óâðåíû, ÷òî õîòèòå âûéòè?", "Âíèìàíèå!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
	if (result == System::Windows::Forms::DialogResult::Yes) {
		if (character->GetAge() != 0) {
			StreamWriter^ f = gcnew StreamWriter("temp.txt", false);
			f->WriteLine(character->GetName());
			f->WriteLine(character->GetSex());
			f->WriteLine(character->GetAge());
			f->WriteLine(character->GetMoneybalance());
			f->WriteLine(medcard->GetWeight());
			f->WriteLine(medcard->GetHeight());
			f->WriteLine(work->GetNamework());
			f->WriteLine(work->GetPayment());
			f->WriteLine(clothes->GetBody());
			f->WriteLine(clothes->GetPants());
			f->WriteLine(clothes->GetShoes());
			f->WriteLine(realty->GetHousing());
			f->WriteLine(realty->GetVehicle());
			f->WriteLine(character->GetLevel());
			f->Close();
		}
		return;
	}
	else {
		e->Cancel = true;
	}
}
private: System::Void buysuitbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (character->GetMoneybalance() >= 1000) {
		clothes->BuySuit();
		clothes->SetClothesStatus(100);
		this->dataGridViewclothes->Rows[0]->Cells[1]->Value = clothes->GetBody();
		this->dataGridViewclothes->Rows[1]->Cells[1]->Value = clothes->GetPants();
		this->dataGridViewclothes->Rows[2]->Cells[1]->Value = clothes->GetShoes();
		this->dataGridViewclothes->Rows[3]->Cells[1]->Value = clothes->GetClothesStatus();
		this->buysuitbutton->Visible = false;
		character->ChangeMoney(-1000);
		this->infomoneybalance->Text = Convert::ToString(character->GetMoneybalance());
		this->humanbalance->Text = Convert::ToString(character->GetMoneybalance());
	}
	else {
		MessageBox::Show("Íåäîñòàòî÷êî äåíåã!", "Óïñ!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void buttonsewup_Click(System::Object^ sender, System::EventArgs^ e) {
	if (character->GetMoneybalance() >= 5) {
		if (clothes->GetClothesStatus() < 100) {
			clothes->SewUpClothes();
			this->dataGridViewclothes->Rows[3]->Cells[1]->Value = clothes->GetClothesStatus();
			character->ChangeMoney(-5);
			this->infomoneybalance->Text = Convert::ToString(character->GetMoneybalance());
			this->humanbalance->Text = Convert::ToString(character->GetMoneybalance());
		}
		else {
			MessageBox::Show("Îäåæäà êàê íîâåíüêàÿ!", "Çà÷åì?", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else {
		MessageBox::Show("Íåäîñòàòî÷êî äåíåã!", "Óïñ!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void workingbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (medcard->GetHealthStatus() > 0 && clothes->GetClothesStatus() > 0) {
		character->ChangeMoney(work->GetPayment());
		this->infomoneybalance->Text = Convert::ToString(character->GetMoneybalance());
		this->humanbalance->Text = Convert::ToString(character->GetMoneybalance());
		clothes->TearClothes();
		medcard->DownStatus();
		this->infohealthpercent->Text = Convert::ToString(medcard->GetHealthStatus());
		this->health->Text = Convert::ToString(medcard->GetHealthStatus());
		this->dataGridViewclothes->Rows[3]->Cells[1]->Value = clothes->GetClothesStatus();
		if (character->GetMoneybalance() > 100000000 && character->GetLevel() < 4) {
			if (work->GetNamework() != "Ìàãíàò") {
				MessageBox::Show("Ñ ïîâûøåíèåì!", "Óðà!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			work->SetNamework("Ìàãíàò");
			work->SetPayment(900000);
			character->LevelUp();
			this->namework->Text = work->GetNamework();
			this->payment->Text = Convert::ToString(work->GetPayment());
		}
		if (character->GetMoneybalance() > 10000000 && character->GetLevel() < 3) {
			if (work->GetNamework() != "Áèçíåñìåí") {
				MessageBox::Show("Ñ ïîâûøåíèåì!", "Óðà!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			work->SetNamework("Áèçíåñìåí");
			work->SetPayment(185000);
			character->LevelUp();
			this->namework->Text = work->GetNamework();
			this->payment->Text = Convert::ToString(work->GetPayment());
		}
		if (character->GetMoneybalance() > 1000000 && character->GetLevel() < 2) {
			if (work->GetNamework() != "Ãëàâà îòäåëà") {
				MessageBox::Show("Ñ ïîâûøåíèåì!", "Óðà!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			work->SetNamework("Ãëàâà îòäåëà");
			work->SetPayment(70000);
			character->LevelUp();
			this->namework->Text = work->GetNamework();
			this->payment->Text = Convert::ToString(work->GetPayment());
		}
		if (character->GetMoneybalance() > 100000 && character->GetLevel() < 1) {
			if (work->GetNamework() != "Êàññèð") {
				MessageBox::Show("Ñ ïîâûøåíèåì!", "Óðà!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			work->SetNamework("Êàññèð");
			work->SetPayment(13000);
			character->LevelUp();
			this->namework->Text = work->GetNamework();
			this->payment->Text = Convert::ToString(work->GetPayment());
		}
	}
	else {
		MessageBox::Show("Ñåé÷àñ âû íå ìîæåòå ðàáîòàòü!\nÏðîâåðüòå ñîñòîÿíèå çäîðîâüÿ\nèëè ñîñòîÿíèå îäåæäû.", "Óïñ!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void healthbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (character->GetMoneybalance() >= 10) {
		if (medcard->GetHealthStatus() < 100) {
			medcard->UpStatus();
			character->ChangeMoney(-10);
			this->infomoneybalance->Text = Convert::ToString(character->GetMoneybalance());
			this->humanbalance->Text = Convert::ToString(character->GetMoneybalance());
			this->infohealthpercent->Text = Convert::ToString(medcard->GetHealthStatus());
			this->health->Text = Convert::ToString(medcard->GetHealthStatus());
		}
		else {
			MessageBox::Show("Âû êàê îãóð÷èê!", "Çà÷åì ? ", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else {
		MessageBox::Show("Íåäîñòàòî÷êî äåíåã!", "Óïñ!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void buybutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBoxhouse->Checked == true) {
		if (this->comboBoxrealtyhouse->Text == "Êâàðòèðà(3 000 000)") {
			if (character->GetMoneybalance() >= 3000000) {
				realty->SetHousing(this->comboBoxrealtyhouse->Text);
				character->ChangeMoney(-3000000);
				this->realtyhouse->Text = realty->GetHousing();
				this->infomoneybalance->Text = Convert::ToString(character->GetMoneybalance());
				this->humanbalance->Text = Convert::ToString(character->GetMoneybalance());
			}
			else {
				MessageBox::Show("Íåäîñòàòî÷êî äåíåã!", "Óïñ!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		if (this->comboBoxrealtyhouse->Text == "Êîòòåäæ(7 000 000)") {
			if (character->GetMoneybalance() >= 7000000) {
				realty->SetHousing(this->comboBoxrealtyhouse->Text);
				character->ChangeMoney(-7000000);
				this->realtyhouse->Text = realty->GetHousing();
				this->infomoneybalance->Text = Convert::ToString(character->GetMoneybalance());
				this->humanbalance->Text = Convert::ToString(character->GetMoneybalance());
			}
			else {
				MessageBox::Show("Íåäîñòàòî÷êî äåíåã!", "Óïñ!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		if (this->comboBoxrealtyhouse->Text == "Âèëëà(20 000 000)") {
			if (character->GetMoneybalance() >= 20000000) {
				realty->SetHousing(this->comboBoxrealtyhouse->Text);
				character->ChangeMoney(-20000000);
				this->realtyhouse->Text = realty->GetHousing();
				this->infomoneybalance->Text = Convert::ToString(character->GetMoneybalance());
				this->humanbalance->Text = Convert::ToString(character->GetMoneybalance());
			}
			else {
				MessageBox::Show("Íåäîñòàòî÷êî äåíåã!", "Óïñ!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
	}
	else {
		if (this->comboBoxrealtycar->Text == "Ìîòîöèêë(200 000)") {
			if (character->GetMoneybalance() >= 200000) {
				realty->SetVehicle(this->comboBoxrealtycar->Text);
				character->ChangeMoney(-200000);
				this->realtycar->Text = realty->GetVehicle();
				this->infomoneybalance->Text = Convert::ToString(character->GetMoneybalance());
				this->humanbalance->Text = Convert::ToString(character->GetMoneybalance());
			}
			else {
				MessageBox::Show("Íåäîñòàòî÷êî äåíåã!", "Óïñ!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		if (this->comboBoxrealtycar->Text == "Àâòîìîáèëü(600 000)") {
			if (character->GetMoneybalance() >= 600000) {
				realty->SetVehicle(this->comboBoxrealtycar->Text);
				character->ChangeMoney(-600000);
				this->realtycar->Text = realty->GetVehicle();
				this->infomoneybalance->Text = Convert::ToString(character->GetMoneybalance());
				this->humanbalance->Text = Convert::ToString(character->GetMoneybalance());
			}
			else {
				MessageBox::Show("Íåäîñòàòî÷êî äåíåã!", "Óïñ!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		if (this->comboBoxrealtycar->Text == "Ëàìáà(9 000 000)") {
			if (character->GetMoneybalance() >= 9000000) {
				realty->SetVehicle(this->comboBoxrealtycar->Text);
				character->ChangeMoney(-9000000);
				this->realtycar->Text = realty->GetVehicle();
				this->infomoneybalance->Text = Convert::ToString(character->GetMoneybalance());
				this->humanbalance->Text = Convert::ToString(character->GetMoneybalance());
			}
			else {
				MessageBox::Show("Íåäîñòàòî÷êî äåíåã!", "Óïñ!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
	}
}
private: System::Void buttonload_Click(System::Object^ sender, System::EventArgs^ e) {
	this->buttonload->Visible = false;
	if (File::Exists("temp.txt") == true) {
		try
		{
			StreamReader^ f = File::OpenText("temp.txt");
			character->SetName(f->ReadLine());
			character->SetSex(f->ReadLine());
			character->SetAge(Convert::ToInt32(f->ReadLine()));
			character->SetMoneyBalance(Convert::ToInt32(f->ReadLine()));
			medcard->SetWeight(Convert::ToInt32(f->ReadLine()));
			medcard->SetHeight(Convert::ToInt32(f->ReadLine()));
			work->SetNamework(f->ReadLine());
			work->SetPayment(Convert::ToInt32(f->ReadLine()));
			clothes->SetBody(f->ReadLine());
			clothes->SetPants(f->ReadLine());
			clothes->SetShoes(f->ReadLine());
			realty->SetHousing(f->ReadLine());
			realty->SetVehicle(f->ReadLine());
			character->SetLevel(Convert::ToInt32(f->ReadLine()));
			f->Close();
			this->infomoneybalance->Text = Convert::ToString(character->GetMoneybalance());
			this->infoname->Text = character->GetName();
			this->infohealthpercent->Text = Convert::ToString(medcard->GetHealthStatus());
			this->menu->Visible = true;
			this->Infobox->Visible = true;
			this->newhumanbutton->Visible = false;
			this->dataGridViewclothes->Rows->Add();
			this->dataGridViewclothes->Rows->Add();
			this->dataGridViewclothes->Rows->Add();
			this->dataGridViewclothes->Rows->Add();
			this->dataGridViewclothes->Rows[0]->Cells[0]->Value = L"Âåðõ";
			this->dataGridViewclothes->Rows[1]->Cells[0]->Value = L"Øòàíû";
			this->dataGridViewclothes->Rows[2]->Cells[0]->Value = L"Îáóâü";
			this->dataGridViewclothes->Rows[3]->Cells[0]->Value = L"Ñîñòîÿíèå îäåæäû";
			if (clothes->GetShoes() == "Òóôëè") {
				this->buysuitbutton->Visible = false;
			}
		}
		catch (Exception^)
		{
			MessageBox::Show("Îøèáêà îòêðûòèÿ ôàéëà!", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
		}
	}
}
};
}
