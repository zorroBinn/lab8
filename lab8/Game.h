#pragma once

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
	private: System::Windows::Forms::GroupBox^ groupBox1;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->menu->SuspendLayout();
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
			this->menu->Location = System::Drawing::Point(193, 557);
			this->menu->Name = L"menu";
			this->menu->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menu->Size = System::Drawing::Size(650, 80);
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
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox1->Location = System::Drawing::Point(751, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(255, 99);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Infobox";
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1007, 646);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menu;
			this->MaximizeBox = false;
			this->Name = L"Game";
			this->Text = L"������� ����";
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
};
}
