#pragma once
#include "newhuman.h"

namespace lab8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ Infobox;
	private: System::Windows::Forms::Label^ infohealth;
	private: System::Windows::Forms::Label^ infobalance;
	private: System::Windows::Forms::Label^ infoname;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ newhumanbutton;
	private: System::Windows::Forms::GroupBox^ groupBoxhuman;
	private: System::Windows::Forms::Label^ humanbalance;
	private: System::Windows::Forms::Label^ labelhumanbalance;
	private: System::Windows::Forms::Label^ labelage;
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
	private: System::Windows::Forms::Button^ button1;
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







	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->labelage = (gcnew System::Windows::Forms::Label());
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->mdheight = (gcnew System::Windows::Forms::Label());
			this->labelmdheight = (gcnew System::Windows::Forms::Label());
			this->mdweight = (gcnew System::Windows::Forms::Label());
			this->labelmdweight = (gcnew System::Windows::Forms::Label());
			this->mdname = (gcnew System::Windows::Forms::Label());
			this->labelmdname = (gcnew System::Windows::Forms::Label());
			this->labelmedicalcard = (gcnew System::Windows::Forms::Label());
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
			this->menu->SuspendLayout();
			this->Infobox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBoxhuman->SuspendLayout();
			this->groupBoxwork->SuspendLayout();
			this->groupBoxmd->SuspendLayout();
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
				this->������ToolStripMenuItem,
					this->���������ToolStripMenuItem, this->��������ToolStripMenuItem, this->��������ToolStripMenuItem, this->������ToolStripMenuItem
			});
			this->menu->Location = System::Drawing::Point(54, 446);
			this->menu->Name = L"menu";
			this->menu->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menu->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menu->Size = System::Drawing::Size(630, 70);
			this->menu->TabIndex = 0;
			this->menu->Text = L"����";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->AutoSize = false;
			this->������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 14));
			this->������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"������ToolStripMenuItem.Image")));
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(125, 76);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->������ToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->AutoSize = false;
			this->���������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 14));
			this->���������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"���������ToolStripMenuItem.Image")));
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(125, 76);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->���������ToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::���������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->AutoSize = false;
			this->��������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 14));
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(125, 76);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->��������ToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::��������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->AutoSize = false;
			this->��������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 14));
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(125, 76);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->��������ToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::��������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->AutoSize = false;
			this->������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 14));
			this->������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"������ToolStripMenuItem.Image")));
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(125, 76);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->������ToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::������ToolStripMenuItem_Click);
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
			this->infomoneybalance->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->infomoneybalance->Location = System::Drawing::Point(5, 34);
			this->infomoneybalance->Name = L"infomoneybalance";
			this->infomoneybalance->Size = System::Drawing::Size(47, 15);
			this->infomoneybalance->TabIndex = 20;
			this->infomoneybalance->Text = L"������";
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
			this->infohealth->Text = L"��������";
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
			this->infobalance->Text = L"������";
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
			this->infoname->Text = L"���";
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
			this->newhumanbutton->Text = L"������� ���������";
			this->newhumanbutton->UseVisualStyleBackColor = false;
			this->newhumanbutton->Click += gcnew System::EventHandler(this, &Game::newhumanbutton_Click);
			// 
			// groupBoxhuman
			// 
			this->groupBoxhuman->BackColor = System::Drawing::Color::NavajoWhite;
			this->groupBoxhuman->Controls->Add(this->humanbalance);
			this->groupBoxhuman->Controls->Add(this->labelhumanbalance);
			this->groupBoxhuman->Controls->Add(this->labelage);
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
			this->humanbalance->Text = L"������";
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
			this->labelhumanbalance->Text = L"������";
			// 
			// labelage
			// 
			this->labelage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelage->AutoSize = true;
			this->labelage->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelage->Location = System::Drawing::Point(107, 135);
			this->labelage->Name = L"labelage";
			this->labelage->Size = System::Drawing::Size(39, 17);
			this->labelage->TabIndex = 8;
			this->labelage->Text = L"���";
			this->labelage->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->labelhumanage->Text = L"�������";
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
			this->humansex->Text = L"���";
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
			this->labelhumansex->Text = L"���";
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
			this->humanname->Text = L"���";
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
			this->labelhumanname->Text = L"���";
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
			this->labelmyhuman->Text = L"��� ��������";
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
			this->workingbutton->Text = L"��������";
			this->workingbutton->UseVisualStyleBackColor = false;
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
			this->payment->Text = L"������";
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
			this->labelpayment->Text = L"������";
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
			this->namework->Text = L"������";
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
			this->labelnamework->Text = L"������";
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
			this->workname->Text = L"���";
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
			this->labelworkhumanname->Text = L"���";
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
			this->labelwork->Text = L"������� ��������";
			// 
			// groupBoxmd
			// 
			this->groupBoxmd->BackColor = System::Drawing::Color::NavajoWhite;
			this->groupBoxmd->Controls->Add(this->labelmdpercent);
			this->groupBoxmd->Controls->Add(this->health);
			this->groupBoxmd->Controls->Add(this->labelhealth);
			this->groupBoxmd->Controls->Add(this->imt);
			this->groupBoxmd->Controls->Add(this->labelimt);
			this->groupBoxmd->Controls->Add(this->button1);
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
			this->labelhealth->Text = L"��������";
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
			this->imt->Text = L"���";
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
			this->labelimt->Text = L"���";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Goldenrod;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(65, 275);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 52);
			this->button1->TabIndex = 12;
			this->button1->Text = L"��������(10$)";
			this->button1->UseVisualStyleBackColor = false;
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
			this->mdheight->Text = L"����";
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
			this->labelmdheight->Text = L"����";
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
			this->mdweight->Text = L"���";
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
			this->labelmdweight->Text = L"���";
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
			this->mdname->Text = L"���";
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
			this->labelmdname->Text = L"���";
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
			this->labelmedicalcard->Text = L"����������� �����";
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
			this->comboBoxrealtycar->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"���������(25 000)", L"��������(200 000)",
					L"����������(600 000)", L"�����(9 000 000)"
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
			this->checkBoxcar->Text = L"���������";
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
			this->checkBoxhouse->Text = L"�����";
			this->checkBoxhouse->UseVisualStyleBackColor = true;
			this->checkBoxhouse->CheckedChanged += gcnew System::EventHandler(this, &Game::checkBoxhouse_CheckedChanged);
			// 
			// comboBoxrealtyhouse
			// 
			this->comboBoxrealtyhouse->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxrealtyhouse->FormattingEnabled = true;
			this->comboBoxrealtyhouse->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"��������(3 000 000)", L"�������(7 000 000)",
					L"�����(20 000 000)", L"������(100 000 000)"
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
			this->buybutton->Text = L"������";
			this->buybutton->UseVisualStyleBackColor = false;
			this->buybutton->Visible = false;
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
			this->labelrealtybuy->Text = L"������ �����";
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
			this->realtycar->Text = L"����������";
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
			this->labelrealtycar->Text = L"���������";
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
			this->realtyhouse->Text = L"���ܨ";
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
			this->labelrealtyhouse->Text = L"�����";
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
			this->labelrealty->Text = L"���������";
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(755, 525);
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
			this->Text = L"������� ����";
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
			this->groupBoxrealty->ResumeLayout(false);
			this->groupBoxrealty->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void newhumanbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->newhumanbutton->Visible = false;
	this->Infobox->Visible = true;
	newhuman^ nh = gcnew newhuman();
	nh->Show();
}
private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxhuman->Visible = true;
	this->groupBoxwork->Visible = false;
	this->groupBoxmd->Visible = false;
	this->groupBoxrealty->Visible = false;
}
private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxhuman->Visible = false;
	this->groupBoxwork->Visible = false;
	this->groupBoxmd->Visible = true;
	this->groupBoxrealty->Visible = false;
}
private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxhuman->Visible = false;
	this->groupBoxwork->Visible = false;
	this->groupBoxmd->Visible = false;
	this->groupBoxrealty->Visible = true;
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxhuman->Visible = false;
	this->groupBoxwork->Visible = true;
	this->groupBoxmd->Visible = false;
	this->groupBoxrealty->Visible = false;
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBoxhuman->Visible = false;
	this->groupBoxwork->Visible = false;
	this->groupBoxmd->Visible = false;
	this->groupBoxrealty->Visible = false;
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
};
}
