#pragma once

namespace lab8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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
	private: System::Windows::Forms::ToolStripMenuItem^ ğàáîòàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èìóùåñòâîToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïåğñîíàæToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çäîğîâüåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îäåæäàToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->ğàáîòàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èìóùåñòâîToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïåğñîíàæToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çäîğîâüåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îäåæäàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->ğàáîòàToolStripMenuItem,
					this->èìóùåñòâîToolStripMenuItem, this->ïåğñîíàæToolStripMenuItem, this->çäîğîâüåToolStripMenuItem, this->îäåæäàToolStripMenuItem
			});
			this->menu->Location = System::Drawing::Point(193, 557);
			this->menu->Name = L"menu";
			this->menu->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menu->Size = System::Drawing::Size(650, 80);
			this->menu->TabIndex = 0;
			this->menu->Text = L"Ìåíş";
			// 
			// ğàáîòàToolStripMenuItem
			// 
			this->ğàáîòàToolStripMenuItem->AutoSize = false;
			this->ğàáîòàToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 14));
			this->ğàáîòàToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ğàáîòàToolStripMenuItem.Image")));
			this->ğàáîòàToolStripMenuItem->Name = L"ğàáîòàToolStripMenuItem";
			this->ğàáîòàToolStripMenuItem->Size = System::Drawing::Size(125, 76);
			this->ğàáîòàToolStripMenuItem->Text = L"Ğàáîòà";
			this->ğàáîòàToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->ğàáîòàToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
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
			// 
			// ïåğñîíàæToolStripMenuItem
			// 
			this->ïåğñîíàæToolStripMenuItem->AutoSize = false;
			this->ïåğñîíàæToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 14));
			this->ïåğñîíàæToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ïåğñîíàæToolStripMenuItem.Image")));
			this->ïåğñîíàæToolStripMenuItem->Name = L"ïåğñîíàæToolStripMenuItem";
			this->ïåğñîíàæToolStripMenuItem->Size = System::Drawing::Size(125, 76);
			this->ïåğñîíàæToolStripMenuItem->Text = L"Ïåğñîíàæ";
			this->ïåğñîíàæToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->ïåğñîíàæToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			// 
			// çäîğîâüåToolStripMenuItem
			// 
			this->çäîğîâüåToolStripMenuItem->AutoSize = false;
			this->çäîğîâüåToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 14));
			this->çäîğîâüåToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"çäîğîâüåToolStripMenuItem.Image")));
			this->çäîğîâüåToolStripMenuItem->Name = L"çäîğîâüåToolStripMenuItem";
			this->çäîğîâüåToolStripMenuItem->Size = System::Drawing::Size(125, 76);
			this->çäîğîâüåToolStripMenuItem->Text = L"Çäîğîâüå";
			this->çäîğîâüåToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->çäîğîâüåToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
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
			this->Text = L"Ãëàâíîå ìåíş";
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
};
}
