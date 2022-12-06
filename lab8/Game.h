#pragma once

namespace lab8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ работаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ имуществоToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ персонажToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ здоровьеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ одеждаToolStripMenuItem;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->работаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->имуществоToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->персонажToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->здоровьеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->одеждаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Goldenrod;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->работаToolStripMenuItem,
					this->имуществоToolStripMenuItem, this->персонажToolStripMenuItem, this->здоровьеToolStripMenuItem, this->одеждаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 616);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1007, 30);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"Меню";
			// 
			// работаToolStripMenuItem
			// 
			this->работаToolStripMenuItem->Name = L"работаToolStripMenuItem";
			this->работаToolStripMenuItem->Size = System::Drawing::Size(71, 26);
			this->работаToolStripMenuItem->Text = L"Работа";
			// 
			// имуществоToolStripMenuItem
			// 
			this->имуществоToolStripMenuItem->Name = L"имуществоToolStripMenuItem";
			this->имуществоToolStripMenuItem->Size = System::Drawing::Size(102, 26);
			this->имуществоToolStripMenuItem->Text = L"Имущество";
			// 
			// персонажToolStripMenuItem
			// 
			this->персонажToolStripMenuItem->Name = L"персонажToolStripMenuItem";
			this->персонажToolStripMenuItem->Size = System::Drawing::Size(95, 26);
			this->персонажToolStripMenuItem->Text = L"Персонаж";
			// 
			// здоровьеToolStripMenuItem
			// 
			this->здоровьеToolStripMenuItem->Name = L"здоровьеToolStripMenuItem";
			this->здоровьеToolStripMenuItem->Size = System::Drawing::Size(90, 26);
			this->здоровьеToolStripMenuItem->Text = L"Здоровье";
			// 
			// одеждаToolStripMenuItem
			// 
			this->одеждаToolStripMenuItem->Name = L"одеждаToolStripMenuItem";
			this->одеждаToolStripMenuItem->Size = System::Drawing::Size(77, 26);
			this->одеждаToolStripMenuItem->Text = L"Одежда";
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1007, 646);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Game";
			this->Text = L"Главное меню";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
