#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<Windows.h>
#include<msclr/marshal_cppstd.h>
#include <tlhelp32.h>
#include <urlmon.h>
#include "credits.h"
namespace GARUDA {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;
    using namespace std;
    using namespace ComponentFactory::Krypton::Toolkit;

    /// <summary>
    /// Summary for GARUDA
    /// </summary>
    public ref class GARUDA : public ComponentFactory::Krypton::Toolkit::KryptonForm
    {
    public:
        GARUDA(void)
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
        ~GARUDA()
        {
            if (components)
            {
                delete components;
            }
        }
    private: ComponentFactory::Krypton::Toolkit::KryptonPalette^ kryptonPalette1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ kryptonTextBox1;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton1;
    private: System::Windows::Forms::Label^ label3;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ kryptonTextBox2;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton2;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Timer^ timer1;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton3;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton4;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton5;










    protected:

    protected:
    private: System::ComponentModel::IContainer^ components;

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>


#pragma region Windows Form Designer generated code
#pragma comment(lib, "urlmon.lib")
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
        void InitializeComponent(void)
        {
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GARUDA::typeid));
            this->kryptonPalette1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPalette(this->components));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->kryptonTextBox1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->kryptonButton1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->kryptonTextBox2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->kryptonButton2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->kryptonButton3 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->kryptonButton4 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->kryptonButton5 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // kryptonPalette1
            // 
            this->kryptonPalette1->ButtonSpecs->FormClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormClose.Image")));
            this->kryptonPalette1->ButtonSpecs->FormClose->ImageStates->ImagePressed = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormClose.ImageStates.ImagePressed")));
            this->kryptonPalette1->ButtonSpecs->FormClose->ImageStates->ImageTracking = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormClose.ImageStates.ImageTracking")));
            this->kryptonPalette1->ButtonSpecs->FormMax->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormMax.Image")));
            this->kryptonPalette1->ButtonSpecs->FormMax->ImageStates->ImagePressed = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormMax.ImageStates.ImagePressed")));
            this->kryptonPalette1->ButtonSpecs->FormMax->ImageStates->ImageTracking = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormMax.ImageStates.ImageTracking")));
            this->kryptonPalette1->ButtonSpecs->FormMin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormMin.Image")));
            this->kryptonPalette1->ButtonSpecs->FormMin->ImageStates->ImagePressed = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormMin.ImageStates.ImagePressed")));
            this->kryptonPalette1->ButtonSpecs->FormMin->ImageStates->ImageTracking = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormMin.ImageStates.ImageTracking")));
            this->kryptonPalette1->ButtonSpecs->FormRestore->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormRestore.Image")));
            this->kryptonPalette1->ButtonStyles->ButtonCommon->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonPalette1->ButtonStyles->ButtonCommon->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonPalette1->ButtonStyles->ButtonForm->StateNormal->Back->Color1 = System::Drawing::Color::White;
            this->kryptonPalette1->ButtonStyles->ButtonForm->StateNormal->Back->Color2 = System::Drawing::Color::White;
            this->kryptonPalette1->ButtonStyles->ButtonForm->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonPalette1->ButtonStyles->ButtonForm->StateNormal->Border->Width = 0;
            this->kryptonPalette1->ButtonStyles->ButtonForm->StatePressed->Back->Color1 = System::Drawing::Color::White;
            this->kryptonPalette1->ButtonStyles->ButtonForm->StatePressed->Back->Color2 = System::Drawing::Color::White;
            this->kryptonPalette1->ButtonStyles->ButtonForm->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonPalette1->ButtonStyles->ButtonForm->StatePressed->Border->Width = 0;
            this->kryptonPalette1->ButtonStyles->ButtonForm->StateTracking->Back->Color1 = System::Drawing::Color::White;
            this->kryptonPalette1->ButtonStyles->ButtonForm->StateTracking->Back->Color2 = System::Drawing::Color::White;
            this->kryptonPalette1->ButtonStyles->ButtonForm->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonPalette1->ButtonStyles->ButtonForm->StateTracking->Border->Width = 0;
            this->kryptonPalette1->ButtonStyles->ButtonFormClose->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonPalette1->ButtonStyles->ButtonFormClose->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonPalette1->ButtonStyles->ButtonFormClose->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonPalette1->ButtonStyles->ButtonFormClose->StatePressed->Border->Width = 0;
            this->kryptonPalette1->ButtonStyles->ButtonFormClose->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonPalette1->ButtonStyles->ButtonFormClose->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonPalette1->ButtonStyles->ButtonFormClose->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonPalette1->ButtonStyles->ButtonFormClose->StateTracking->Border->Width = 0;
            this->kryptonPalette1->FormStyles->FormMain->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonPalette1->FormStyles->FormMain->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->ColorAlign = ComponentFactory::Krypton::Toolkit::PaletteRectangleAlign::Local;
            this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::None;
            this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->Rounding = 16;
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->ButtonEdgeInset = 10;
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, -1, -1, -1);
            // 
            // label1
            // 
            this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Poppins", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label1->Location = System::Drawing::Point(8, 27);
            this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(179, 62);
            this->label1->TabIndex = 0;
            this->label1->Text = L"GARUDA";
            this->label1->Click += gcnew System::EventHandler(this, &GARUDA::label1_Click);
            // 
            // label2
            // 
            this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->label2->Location = System::Drawing::Point(14, 89);
            this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(460, 50);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Guarded Automated Recognizer with Unyielding Data Assurance.\r\nProject by 2024 Fin"
                L"al year. Dept of CSE, MGCE";
            // 
            // kryptonTextBox1
            // 
            this->kryptonTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->kryptonTextBox1->Cursor = System::Windows::Forms::Cursors::Default;
            this->kryptonTextBox1->Location = System::Drawing::Point(16, 199);
            this->kryptonTextBox1->Name = L"kryptonTextBox1";
            this->kryptonTextBox1->PasswordChar = '#';
            this->kryptonTextBox1->Size = System::Drawing::Size(524, 37);
            this->kryptonTextBox1->StateCommon->Back->Color1 = System::Drawing::Color::White;
            this->kryptonTextBox1->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->kryptonTextBox1->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->kryptonTextBox1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonTextBox1->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonTextBox1->StateCommon->Border->Rounding = 20;
            this->kryptonTextBox1->StateCommon->Border->Width = 1;
            this->kryptonTextBox1->StateCommon->Content->Color1 = System::Drawing::Color::Gray;
            this->kryptonTextBox1->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Poppins", 11.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonTextBox1->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->kryptonTextBox1->TabIndex = 2;
            // 
            // kryptonButton1
            // 
            this->kryptonButton1->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->kryptonButton1->Location = System::Drawing::Point(225, 278);
            this->kryptonButton1->Name = L"kryptonButton1";
            this->kryptonButton1->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonButton1->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonButton1->OverrideDefault->Back->ColorAngle = 45;
            this->kryptonButton1->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton1->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton1->OverrideDefault->Border->ColorAngle = 45;
            this->kryptonButton1->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton1->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton1->OverrideDefault->Border->Rounding = 20;
            this->kryptonButton1->OverrideDefault->Border->Width = 1;
            this->kryptonButton1->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
            this->kryptonButton1->Size = System::Drawing::Size(155, 43);
            this->kryptonButton1->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonButton1->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonButton1->StateCommon->Back->ColorAngle = 45;
            this->kryptonButton1->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton1->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton1->StateCommon->Border->ColorAngle = 45;
            this->kryptonButton1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton1->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton1->StateCommon->Border->Rounding = 20;
            this->kryptonButton1->StateCommon->Border->Width = 1;
            this->kryptonButton1->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton1->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton1->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->kryptonButton1->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(206)));
            this->kryptonButton1->StatePressed->Back->ColorAngle = 135;
            this->kryptonButton1->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->kryptonButton1->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(206)));
            this->kryptonButton1->StatePressed->Border->ColorAngle = 135;
            this->kryptonButton1->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton1->StatePressed->Border->Rounding = 20;
            this->kryptonButton1->StatePressed->Border->Width = 1;
            this->kryptonButton1->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton1->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton1->StateTracking->Back->ColorAngle = 45;
            this->kryptonButton1->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton1->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton1->StateTracking->Border->ColorAngle = 45;
            this->kryptonButton1->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton1->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton1->StateTracking->Border->Rounding = 20;
            this->kryptonButton1->StateTracking->Border->Width = 1;
            this->kryptonButton1->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton1->StateTracking->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton1->TabIndex = 3;
            this->kryptonButton1->Values->Text = L"Get Summary";
            this->kryptonButton1->Click += gcnew System::EventHandler(this, &GARUDA::kryptonButton1_Click);
            // 
            // label3
            // 
            this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label3->Location = System::Drawing::Point(14, 168);
            this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(93, 28);
            this->label3->TabIndex = 0;
            this->label3->Text = L"Password";
            // 
            // kryptonTextBox2
            // 
            this->kryptonTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->kryptonTextBox2->Cursor = System::Windows::Forms::Cursors::Default;
            this->kryptonTextBox2->InputControlStyle = ComponentFactory::Krypton::Toolkit::InputControlStyle::Custom1;
            this->kryptonTextBox2->Location = System::Drawing::Point(19, 369);
            this->kryptonTextBox2->Multiline = true;
            this->kryptonTextBox2->Name = L"kryptonTextBox2";
            this->kryptonTextBox2->Size = System::Drawing::Size(521, 196);
            this->kryptonTextBox2->StateCommon->Back->Color1 = System::Drawing::Color::White;
            this->kryptonTextBox2->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->kryptonTextBox2->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->kryptonTextBox2->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonTextBox2->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonTextBox2->StateCommon->Border->Rounding = 20;
            this->kryptonTextBox2->StateCommon->Border->Width = 1;
            this->kryptonTextBox2->StateCommon->Content->Color1 = System::Drawing::Color::Gray;
            this->kryptonTextBox2->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Poppins", 11.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonTextBox2->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->kryptonTextBox2->TabIndex = 4;
            // 
            // kryptonButton2
            // 
            this->kryptonButton2->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->kryptonButton2->Location = System::Drawing::Point(41, 278);
            this->kryptonButton2->Name = L"kryptonButton2";
            this->kryptonButton2->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton2->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton2->OverrideDefault->Back->ColorAngle = 45;
            this->kryptonButton2->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton2->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton2->OverrideDefault->Border->ColorAngle = 45;
            this->kryptonButton2->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton2->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton2->OverrideDefault->Border->Rounding = 20;
            this->kryptonButton2->OverrideDefault->Border->Width = 1;
            this->kryptonButton2->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
            this->kryptonButton2->Size = System::Drawing::Size(155, 43);
            this->kryptonButton2->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton2->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton2->StateCommon->Back->ColorAngle = 45;
            this->kryptonButton2->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton2->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton2->StateCommon->Border->ColorAngle = 45;
            this->kryptonButton2->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton2->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton2->StateCommon->Border->Rounding = 20;
            this->kryptonButton2->StateCommon->Border->Width = 1;
            this->kryptonButton2->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton2->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton2->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton2->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->kryptonButton2->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(206)));
            this->kryptonButton2->StatePressed->Back->ColorAngle = 135;
            this->kryptonButton2->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->kryptonButton2->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(206)));
            this->kryptonButton2->StatePressed->Border->ColorAngle = 135;
            this->kryptonButton2->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton2->StatePressed->Border->Rounding = 20;
            this->kryptonButton2->StatePressed->Border->Width = 1;
            this->kryptonButton2->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton2->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton2->StateTracking->Back->ColorAngle = 45;
            this->kryptonButton2->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton2->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton2->StateTracking->Border->ColorAngle = 45;
            this->kryptonButton2->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton2->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton2->StateTracking->Border->Rounding = 20;
            this->kryptonButton2->StateTracking->Border->Width = 1;
            this->kryptonButton2->TabIndex = 5;
            this->kryptonButton2->Values->Text = L"Select file";
            this->kryptonButton2->Click += gcnew System::EventHandler(this, &GARUDA::kryptonButton2_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(549, 12);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(312, 553);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 6;
            this->pictureBox1->TabStop = false;
            // 
            // label4
            // 
            this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->label4->Location = System::Drawing::Point(11, 335);
            this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(95, 28);
            this->label4->TabIndex = 7;
            this->label4->Text = L"Summary";
            // 
            // label5
            // 
            this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(14, 250);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(88, 25);
            this->label5->TabIndex = 8;
            this->label5->Text = L"Select File :";
            // 
            // timer1
            // 
            this->timer1->Enabled = true;
            this->timer1->Tick += gcnew System::EventHandler(this, &GARUDA::timer1_Tick);
            // 
            // kryptonButton3
            // 
            this->kryptonButton3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->kryptonButton3->Location = System::Drawing::Point(237, 327);
            this->kryptonButton3->Name = L"kryptonButton3";
            this->kryptonButton3->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton3->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton3->OverrideDefault->Back->ColorAngle = 45;
            this->kryptonButton3->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton3->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton3->OverrideDefault->Border->ColorAngle = 45;
            this->kryptonButton3->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton3->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton3->OverrideDefault->Border->Rounding = 20;
            this->kryptonButton3->OverrideDefault->Border->Width = 1;
            this->kryptonButton3->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
            this->kryptonButton3->Size = System::Drawing::Size(102, 43);
            this->kryptonButton3->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton3->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton3->StateCommon->Back->ColorAngle = 45;
            this->kryptonButton3->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton3->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton3->StateCommon->Border->ColorAngle = 45;
            this->kryptonButton3->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton3->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton3->StateCommon->Border->Rounding = 20;
            this->kryptonButton3->StateCommon->Border->Width = 1;
            this->kryptonButton3->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton3->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton3->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton3->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->kryptonButton3->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(206)));
            this->kryptonButton3->StatePressed->Back->ColorAngle = 135;
            this->kryptonButton3->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->kryptonButton3->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(206)));
            this->kryptonButton3->StatePressed->Border->ColorAngle = 135;
            this->kryptonButton3->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton3->StatePressed->Border->Rounding = 20;
            this->kryptonButton3->StatePressed->Border->Width = 1;
            this->kryptonButton3->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton3->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton3->StateTracking->Back->ColorAngle = 45;
            this->kryptonButton3->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton3->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton3->StateTracking->Border->ColorAngle = 45;
            this->kryptonButton3->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton3->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton3->StateTracking->Border->Rounding = 20;
            this->kryptonButton3->StateTracking->Border->Width = 1;
            this->kryptonButton3->TabIndex = 9;
            this->kryptonButton3->Values->Text = L"Explain";
            this->kryptonButton3->Click += gcnew System::EventHandler(this, &GARUDA::kryptonButton3_Click);
            // 
            // kryptonButton4
            // 
            this->kryptonButton4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->kryptonButton4->Location = System::Drawing::Point(345, 327);
            this->kryptonButton4->Name = L"kryptonButton4";
            this->kryptonButton4->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton4->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton4->OverrideDefault->Back->ColorAngle = 45;
            this->kryptonButton4->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton4->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton4->OverrideDefault->Border->ColorAngle = 45;
            this->kryptonButton4->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton4->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton4->OverrideDefault->Border->Rounding = 20;
            this->kryptonButton4->OverrideDefault->Border->Width = 1;
            this->kryptonButton4->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
            this->kryptonButton4->Size = System::Drawing::Size(116, 43);
            this->kryptonButton4->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton4->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton4->StateCommon->Back->ColorAngle = 45;
            this->kryptonButton4->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton4->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton4->StateCommon->Border->ColorAngle = 45;
            this->kryptonButton4->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton4->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton4->StateCommon->Border->Rounding = 20;
            this->kryptonButton4->StateCommon->Border->Width = 1;
            this->kryptonButton4->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton4->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton4->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton4->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->kryptonButton4->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(206)));
            this->kryptonButton4->StatePressed->Back->ColorAngle = 135;
            this->kryptonButton4->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->kryptonButton4->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(206)));
            this->kryptonButton4->StatePressed->Border->ColorAngle = 135;
            this->kryptonButton4->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton4->StatePressed->Border->Rounding = 20;
            this->kryptonButton4->StatePressed->Border->Width = 1;
            this->kryptonButton4->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton4->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton4->StateTracking->Back->ColorAngle = 45;
            this->kryptonButton4->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton4->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton4->StateTracking->Border->ColorAngle = 45;
            this->kryptonButton4->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton4->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton4->StateTracking->Border->Rounding = 20;
            this->kryptonButton4->StateTracking->Border->Width = 1;
            this->kryptonButton4->TabIndex = 9;
            this->kryptonButton4->Values->Text = L"Trans mal";
            this->kryptonButton4->Click += gcnew System::EventHandler(this, &GARUDA::kryptonButton4_Click);
            // 
            // kryptonButton5
            // 
            this->kryptonButton5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->kryptonButton5->Location = System::Drawing::Point(467, 327);
            this->kryptonButton5->Name = L"kryptonButton5";
            this->kryptonButton5->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton5->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton5->OverrideDefault->Back->ColorAngle = 45;
            this->kryptonButton5->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton5->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton5->OverrideDefault->Border->ColorAngle = 45;
            this->kryptonButton5->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton5->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton5->OverrideDefault->Border->Rounding = 20;
            this->kryptonButton5->OverrideDefault->Border->Width = 1;
            this->kryptonButton5->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
            this->kryptonButton5->Size = System::Drawing::Size(62, 43);
            this->kryptonButton5->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton5->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton5->StateCommon->Back->ColorAngle = 45;
            this->kryptonButton5->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton5->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton5->StateCommon->Border->ColorAngle = 45;
            this->kryptonButton5->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton5->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton5->StateCommon->Border->Rounding = 20;
            this->kryptonButton5->StateCommon->Border->Width = 1;
            this->kryptonButton5->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonButton5->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonButton5->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 12, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton5->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->kryptonButton5->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(206)));
            this->kryptonButton5->StatePressed->Back->ColorAngle = 135;
            this->kryptonButton5->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->kryptonButton5->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(206)));
            this->kryptonButton5->StatePressed->Border->ColorAngle = 135;
            this->kryptonButton5->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton5->StatePressed->Border->Rounding = 20;
            this->kryptonButton5->StatePressed->Border->Width = 1;
            this->kryptonButton5->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton5->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton5->StateTracking->Back->ColorAngle = 45;
            this->kryptonButton5->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton5->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton5->StateTracking->Border->ColorAngle = 45;
            this->kryptonButton5->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton5->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton5->StateTracking->Border->Rounding = 20;
            this->kryptonButton5->StateTracking->Border->Width = 1;
            this->kryptonButton5->TabIndex = 10;
            this->kryptonButton5->Values->Text = L"Rev";
            this->kryptonButton5->Click += gcnew System::EventHandler(this, &GARUDA::kryptonButton5_Click);
            // 
            // GARUDA
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 23);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->ClientSize = System::Drawing::Size(859, 561);
            this->Controls->Add(this->kryptonButton5);
            this->Controls->Add(this->kryptonButton4);
            this->Controls->Add(this->kryptonButton3);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->kryptonButton2);
            this->Controls->Add(this->kryptonTextBox2);
            this->Controls->Add(this->kryptonButton1);
            this->Controls->Add(this->kryptonTextBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->label5);
            this->Font = (gcnew System::Drawing::Font(L"Poppins", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->Margin = System::Windows::Forms::Padding(5);
            this->MinimumSize = System::Drawing::Size(860, 600);
            this->Name = L"GARUDA";
            this->Palette = this->kryptonPalette1;
            this->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
            this->ShowIcon = false;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"GARUDA - Dept of CSE, MGCE";
            this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &GARUDA::GARUDA_FormClosing);
            this->Load += gcnew System::EventHandler(this, &GARUDA::GARUDA_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        int ismal = 0;//0
    private: System::Void GARUDA_Load(System::Object^ sender, System::EventArgs^ e) {
        CheckAndDownloadFiles();
    }
     String^ selectedFilePath;
    private: System::Void RunPythonScript(String^ py)
    {
        String^ currentDirectory = Environment::CurrentDirectory;
        String^ nst = Path::Combine(currentDirectory, "py.txt");
        String^ pythonExePath = File::ReadAllText(nst);
        String^ scriptPath = py;
        STARTUPINFO si;
        PROCESS_INFORMATION pi;
        ZeroMemory(&si, sizeof(si));
        si.cb = sizeof(si);
        ZeroMemory(&pi, sizeof(pi));
        String^ commandLine = "\"" + pythonExePath + "\" \"" + scriptPath + "\"";
        pin_ptr<const wchar_t> wch = PtrToStringChars(commandLine);
        if (CreateProcess(NULL, const_cast<wchar_t*>(wch), NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))
        {
            CloseHandle(pi.hProcess);
            CloseHandle(pi.hThread);
        }
        else
        {
            MessageBox::Show("Failed to start the Python process.", "Error");
        }
    }
private: System::Void kryptonButton1_Click(System::Object^ sender, System::EventArgs^ e) {
    if (label5->Text == "Select File :") {
        MessageBox::Show("File must be selected before proceed", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        String^ key = kryptonTextBox1->Text;
        String^ currentDirectory = Environment::CurrentDirectory;
        String^ pyd = Path::Combine(currentDirectory, "temp.txt");
        String^ decrypt = Path::Combine(currentDirectory, "decr.sreeji");
        String^ Outpath = Path::Combine(currentDirectory, "decr.py");
        String^ fileContent = File::ReadAllText(decrypt);
        String^ proc = ProcessContent(fileContent);
        File::WriteAllText(Outpath, proc);
        File::AppendAllText(pyd, key);
        RunPythonScript("decr.py");
        String^ nst = Path::Combine(currentDirectory, "gg.txt");
        String^ filePath = Path::Combine(currentDirectory, "main.py");
    gg:
        if (IsProcessRunning(L"python.exe") == false) {
            if (File::Exists(Path::Combine(currentDirectory, "decr.py"))) {
                File::Delete(Path::Combine(currentDirectory, "decr.py"));
            }
            try {
                String^ processedContent = File::ReadAllText(nst);
                File::WriteAllText(filePath, processedContent);
                selectedFilePath = selectedFilePath->Replace("\\", "/");
                File::AppendAllText(filePath, "\nvideo_file_path = \"" + selectedFilePath + "\"\nabstract = generate_video_summary(video_file_path)\nfile = open(\"sum.txt\", \"w\")\nfile.write(abstract)\nfile.close()");
                if (File::Exists(filePath) && File::Exists(nst)) {
                    RunPythonScript("main.py");
                }
                else {
                    MessageBox::Show("Error");
                    flush();
                }
                if (File::Exists(nst)) {
                    File::Delete(nst);
                }
            }
            catch (Exception^ ex) {
                MessageBox::Show("Password Error!!! Wrong Password or Error occur while processing gg.txt file", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }
        }
        else {
            goto gg;
        }
    }
}
       String^ ProcessContent(String^ content) {
           std::string arr = msclr::interop::marshal_as<std::string>(content);
           for (int i = 0; i <= arr.length(); i++) {
               arr[i] -= 2;//-=2
           }
           content = msclr::interop::marshal_as<System::String^>(arr);
           return content;
       }
       bool IsProcessRunning(const wchar_t* processName)
       {
           PROCESSENTRY32 entry{};
           entry.dwSize = sizeof(PROCESSENTRY32);

           HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

           if (Process32First(snapshot, &entry))
           {
               do
               {
                   if (_wcsicmp(entry.szExeFile, processName) == 0)
                   {
                       CloseHandle(snapshot);
                       return true;  // Process is running
                   }
               } while (Process32Next(snapshot, &entry));
           }

           CloseHandle(snapshot);
           return false;  // Process is not running
       }
       void flush() {
           String^ currentDirectory = Environment::CurrentDirectory;
           String^ filePath = System::IO::Path::Combine(currentDirectory, "main.py");
           String^ OutPath = System::IO::Path::Combine(currentDirectory, "sum.txt");
           String^ tee = System::IO::Path::Combine(currentDirectory, "temp.txt");
           String^ gg = System::IO::Path::Combine(currentDirectory, "gg.txt");
           if (System::IO::File::Exists(filePath))
           {
               System::IO::File::Delete(filePath);
           }
           if (System::IO::File::Exists(OutPath))
           {
               System::IO::File::Delete(OutPath);
           }
           if (System::IO::File::Exists(tee)) {
               System::IO::File::Delete(tee);
           }
           if (System::IO::File::Exists(gg)) {
               System::IO::File::Delete(gg);
           }
           if (File::Exists("tmp.txt")) {
               File::Delete("tmp.txt");
           }
           if (File::Exists("chat.py")) {
               File::Delete("chat.py");
           }
           gg = System::IO::Path::Combine(currentDirectory, "decr.py");
           if (File::Exists(gg)) {
               File::Delete(gg);
           }
           if (File::Exists("trans.py")) {
               File::Delete("trans.py");
           }
           if (File::Exists("mallu.txt")) {
               File::Delete("mallu.txt");
           }
           if (File::Exists("speak malayalam.py")) {
               File::Delete("speak malayalam.py");
           }
           if (File::Exists("output.wav")) {
               File::Delete("output.wav");
           }
       }

private: System::Void kryptonButton2_Click(System::Object^ sender, System::EventArgs^ e) {
    OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
    openFileDialog1->Filter = "MP4 Files (*.mp4)|*.mp4|All Files (*.*)|*.*";
    openFileDialog1->FilterIndex = 1;
    openFileDialog1->RestoreDirectory = true;
    if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        selectedFilePath = openFileDialog1->FileName;
        label5->Text += selectedFilePath;
    }
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
    String^ currentDirectory = Environment::CurrentDirectory;
    String^ nst = Path::Combine(currentDirectory, "sum.txt");
    try {
        String^ fileContent = File::ReadAllText(nst);
        if (fileContent != kryptonTextBox2->Text) {
            kryptonTextBox2->Text = fileContent;
        }
        else {
            flush();
        }
    }
    catch (Exception^ ex) {
        //Console::WriteLine("Error reading file: " + ex->Message);//writes error, need to remove ater project debug
    }
}
private: System::Void GARUDA_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
    if (IsProcessRunning(L"python.exe"))
    {
        MessageBox::Show("Cannot close the form. python.exe is still running.", "Error");
        e->Cancel = true;  // Cancel the closing of the form
    }
    flush();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    credits^ credit = gcnew credits();
    credit->ShowDialog();
}
//March 7

private: System::Void CheckAndDownloadFiles() {
    String^ currentDirectory = Environment::CurrentDirectory;
    String^ ggFilePath = Path::Combine(currentDirectory, "gg.sreeji");
    String^ decrFilePath = Path::Combine(currentDirectory, "decr.sreeji");
    String^ v2file = Path::Combine(currentDirectory, "v2.sreeji");
    String^ explfile = Path::Combine(currentDirectory, "explain.sreeji");
    String^ mal1file = Path::Combine(currentDirectory, "mal1.sreeji");
    String^ malayalam = Path::Combine(currentDirectory, "mal.sreeji");
    String^ keralite = Path::Combine(currentDirectory, "keralite.sreeji");
    String^ malayali = Path::Combine(currentDirectory, "malayali.sreeji");

    // Check if gg.sreeji file exists
    if (!File::Exists(ggFilePath)) {
        // Download gg.sreeji from the internet
        DownloadFile("https://drive.google.com/uc?export=download&id=1D1iH2ECEbIyKi6Qs5ZdjhbrQtRdoCK7n", ggFilePath);
    }
    // Check if decr.sreeji file exists
    if (!File::Exists(decrFilePath)) {
        // Download decr.sreeji from the internet
        DownloadFile("https://drive.google.com/uc?export=download&id=1q7eBMkTNDUWM4Wo9p435OYlB_sbvLTWs", decrFilePath);
    }
    if (!File::Exists(v2file)) {
        DownloadFile("https://drive.google.com/uc?export=download&id=1yfNFOCsJWhLtfUIPbLvy5uABL5cMqUvK", v2file);
    }
    if (!File::Exists(explfile)) {
        DownloadFile("https://drive.google.com/uc?export=download&id=1Ld77jGgOgdoiOi_v9LJCs5QSt-xy7OuQ", explfile);
    }
    if (!File::Exists(mal1file)) {
        DownloadFile("https://drive.google.com/uc?export=download&id=1NZ63GcTkC9hhCUAQ-L-ncIQ0x81O6fKi", mal1file);
    }
    if (!File::Exists(malayalam)) {
        DownloadFile("https://drive.google.com/uc?export=download&id=1H0LdByGRo20ODPKlDFJm6CXd3I63cbuK", malayalam);
    }
    if (!File::Exists(keralite)) {
        DownloadFile("https://drive.google.com/uc?export=download&id=1xnRVwJktk8R9CyGI6HPUrBP0wHnh8n7i", keralite);
    }
    if (!File::Exists(malayali)) {
        DownloadFile("https://drive.google.com/uc?export=download&id=1Mvtv9xzX3vf0fwb1UyFOk0OvcKP_yFYb", malayali);
    }
}

private: System::Void DownloadFile(String^ url, String^ filePath) {
    // Convert System::String^ to std::wstring
    std::wstring urlW = (const wchar_t*)(System::Runtime::InteropServices::Marshal::StringToHGlobalUni(url)).ToPointer();
    std::wstring filePathW = (const wchar_t*)(System::Runtime::InteropServices::Marshal::StringToHGlobalUni(filePath)).ToPointer();

    // Download file from URL and save to filePath
    HRESULT hr = URLDownloadToFile(NULL, urlW.c_str(), filePathW.c_str(), 0, NULL);
    if (FAILED(hr)) {
        // Handle error (e.g., display error message)
        std::cerr << "Error downloading file: " << hr << std::endl;
    }
}
private: System::Void kryptonButton3_Click(System::Object^ sender, System::EventArgs^ e) {
    if (ismal == 0) {
        String^ key = kryptonTextBox1->Text;
        String^ currentDirectory = Environment::CurrentDirectory;
        String^ pyd = Path::Combine(currentDirectory, "temp.txt");
        String^ decrypt = Path::Combine(currentDirectory, "v2.sreeji");
        String^ Outpath = Path::Combine(currentDirectory, "v2.py");
        String^ fileContent = File::ReadAllText(decrypt);
        String^ proc = ProcessContent(fileContent);
        File::WriteAllText(Outpath, proc);
        File::AppendAllText(pyd, key);
        RunPythonScript("v2.py");
        String^ pyde = Path::Combine(currentDirectory, "tmp.txt");
        String^ added1 = "Summarize this, in a paragraph, also it could contain severe mistakes like blunder words, so don't consider every word, but stick to the concept. Don't add any links or anything that is not a simple explanation text. So, we need a meaningful output. The text is \"";
        added1 = "Summarize this, in a paragraph, also it could contain severe mistakes like blunder words, so don't consider every word, but stick to the concept. Don't add any links or anything that is not a simple explanation text. Don't explain too much, that is, we need a meaningful output. Make sure your output is completely meaningful. This is very important you should ensure that there is no special characters \'+\',\'-\',\'(\',\')\',\'!', etc are not generated by you. If you want to use \'+\', then use \'plus\' instead of symbol. The input text is :\"";
        File::WriteAllText(pyde, added1);
        File::AppendAllText(pyde, kryptonTextBox2->Text);
        File::AppendAllText(pyde, "\""); 
    r:
        if (IsProcessRunning(L"python.exe"))
            goto r;
        else {
            if (File::Exists("v2.py")) {
                File::Delete("v2.py");
            }
        }
        RunPythonScript("chat.py");
    }
    else {
        String^ currentDirectory = Environment::CurrentDirectory;
        String^ pyd = Path::Combine(currentDirectory, "temp.txt");
        String^ mall = Path::Combine(currentDirectory, "mallu.txt");
        File::WriteAllText(mall, kryptonTextBox2->Text);
        //RunPythonScript("speak malayalam.py");
        //
        String^ key = kryptonTextBox1->Text;
        String^ decrypt = Path::Combine(currentDirectory, "keralite.sreeji");
        String^ Outpath = Path::Combine(currentDirectory, "mallu.py");
        String^ fileContent = File::ReadAllText(decrypt);
        String^ proc = ProcessContent(fileContent);
        File::WriteAllText(Outpath, proc);
        File::AppendAllText(pyd, key);
        RunPythonScript("mallu.py");
        
    mallu:
        if (File::Exists("speak malayalam.py") == FALSE)
            goto mallu;
        else {
            if (File::Exists("mallu.py")) {
                File::Delete("mallu.py");
            }
        }
        RunPythonScript("speak malayalam.py");
    //
    }
}
private: System::Void kryptonButton4_Click(System::Object^ sender, System::EventArgs^ e) {
    if (ismal == 0) {
        String^ currentDirectory = Environment::CurrentDirectory;
        String^ nst = Path::Combine(currentDirectory, "sum1.txt");
        String^ sum = kryptonTextBox2->Text;
        File::WriteAllText(nst, "");
        File::AppendAllText(nst, sum);
        String^ key = kryptonTextBox1->Text;
        String^ pyd = Path::Combine(currentDirectory, "temp.txt");
        String^ decrypt = Path::Combine(currentDirectory, "mal1.sreeji");
        String^ Outpath = Path::Combine(currentDirectory, "mal1.py");
        String^ fileContent = File::ReadAllText(decrypt);
        String^ proc = ProcessContent(fileContent);
        File::WriteAllText(Outpath, proc);
        File::AppendAllText(pyd, key);
        RunPythonScript("mal1.py");
    malayalam:
        if (File::Exists("trans.py") == FALSE)
            goto malayalam;
        else {
            if (File::Exists("mal1.py")) {
                File::Delete("mal1.py");
            }
        }
        RunPythonScript("trans.py");
        ismal = 1;
    }
}
private: System::Void kryptonButton5_Click(System::Object^ sender, System::EventArgs^ e) {
    ismal = 0;
    String^ currentDirectory = Environment::CurrentDirectory;
    String^ in = Path::Combine(currentDirectory, "sum1.txt");
    String^ out = Path::Combine(currentDirectory, "sum.txt");
    File::WriteAllText(out, File::ReadAllText(in));
}
};
}
