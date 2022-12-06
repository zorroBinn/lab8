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
			this->infohealth = (gcnew System::Windows::Forms::Label());
			this->infobalance = (gcnew System::Windows::Forms::Label());
			this->infoname = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->newhumanbutton = (gcnew System::Windows::Forms::Button());
			this->menu->SuspendLayout();
			this->Infobox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			// 
			// Infobox
			// 
			this->Infobox->BackColor = System::Drawing::SystemColors::Info;
			this->Infobox->Controls->Add(this->infohealth);
			this->Infobox->Controls->Add(this->infobalance);
			this->Infobox->Controls->Add(this->infoname);
			this->Infobox->Controls->Add(this->pictureBox1);
			this->Infobox->Location = System::Drawing::Point(560, 2);
			this->Infobox->Margin = System::Windows::Forms::Padding(2);
			this->Infobox->Name = L"Infobox";
			this->Infobox->Padding = System::Windows::Forms::Padding(2);
			this->Infobox->Size = System::Drawing::Size(194, 67);
			this->Infobox->TabIndex = 1;
			this->Infobox->TabStop = false;
			// 
			// infohealth
			// 
			this->infohealth->AutoSize = true;
			this->infohealth->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->infohealth->Location = System::Drawing::Point(-3, 47);
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
			this->pictureBox1->Location = System::Drawing::Point(126, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(65, 64);
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
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(755, 525);
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
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void newhumanbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->newhumanbutton->Visible = false;
	newhuman^ nh = gcnew newhuman();
	nh->Show();
}
};
}
