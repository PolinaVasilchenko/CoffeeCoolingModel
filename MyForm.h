#pragma once

namespace MCM1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tbTemp0;
	private: System::Windows::Forms::TextBox^  tbRoomTemp;
	private: System::Windows::Forms::TextBox^  tbTimePeriod;
	private: System::Windows::Forms::Label^  lHader;
	private: System::Windows::Forms::TextBox^  tbCoefCooling;
	protected:

	protected:




	private: System::Windows::Forms::TextBox^  tbNumPoints;
	private: System::Windows::Forms::CheckBox^  cbRK4;
	private: System::Windows::Forms::CheckBox^  cbEuler;
	private: System::Windows::Forms::CheckBox^  cbMEuler;
	private: System::Windows::Forms::CheckBox^  cbEulerKoushi;
	private: System::Windows::Forms::Label^  lTemp0;
	private: System::Windows::Forms::Label^  lRoomTemp;
	private: System::Windows::Forms::Label^  lCoefCooling;
	private: System::Windows::Forms::Label^  lTimePeriod;
	private: System::Windows::Forms::Label^  lNumPoints;















	private: System::Windows::Forms::Button^  bRun;







	protected:

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
			this->tbTemp0 = (gcnew System::Windows::Forms::TextBox());
			this->tbRoomTemp = (gcnew System::Windows::Forms::TextBox());
			this->tbTimePeriod = (gcnew System::Windows::Forms::TextBox());
			this->lHader = (gcnew System::Windows::Forms::Label());
			this->tbCoefCooling = (gcnew System::Windows::Forms::TextBox());
			this->tbNumPoints = (gcnew System::Windows::Forms::TextBox());
			this->cbRK4 = (gcnew System::Windows::Forms::CheckBox());
			this->cbEuler = (gcnew System::Windows::Forms::CheckBox());
			this->cbMEuler = (gcnew System::Windows::Forms::CheckBox());
			this->cbEulerKoushi = (gcnew System::Windows::Forms::CheckBox());
			this->lTemp0 = (gcnew System::Windows::Forms::Label());
			this->lRoomTemp = (gcnew System::Windows::Forms::Label());
			this->lCoefCooling = (gcnew System::Windows::Forms::Label());
			this->lTimePeriod = (gcnew System::Windows::Forms::Label());
			this->lNumPoints = (gcnew System::Windows::Forms::Label());
			this->bRun = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tbTemp0
			// 
			this->tbTemp0->Location = System::Drawing::Point(245, 139);
			this->tbTemp0->Name = L"tbTemp0";
			this->tbTemp0->Size = System::Drawing::Size(83, 26);
			this->tbTemp0->TabIndex = 0;
			// 
			// tbRoomTemp
			// 
			this->tbRoomTemp->Location = System::Drawing::Point(245, 183);
			this->tbRoomTemp->Name = L"tbRoomTemp";
			this->tbRoomTemp->Size = System::Drawing::Size(83, 26);
			this->tbRoomTemp->TabIndex = 1;
			// 
			// tbTimePeriod
			// 
			this->tbTimePeriod->Location = System::Drawing::Point(245, 276);
			this->tbTimePeriod->Name = L"tbTimePeriod";
			this->tbTimePeriod->Size = System::Drawing::Size(83, 26);
			this->tbTimePeriod->TabIndex = 2;
			// 
			// lHader
			// 
			this->lHader->AutoSize = true;
			this->lHader->Font = (gcnew System::Drawing::Font(L"Tahoma", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lHader->Location = System::Drawing::Point(149, 28);
			this->lHader->Name = L"lHader";
			this->lHader->Size = System::Drawing::Size(657, 39);
			this->lHader->TabIndex = 3;
			this->lHader->Text = L" ������������� �������� ��������� ����";
			// 
			// tbCoefCooling
			// 
			this->tbCoefCooling->Location = System::Drawing::Point(245, 230);
			this->tbCoefCooling->Name = L"tbCoefCooling";
			this->tbCoefCooling->Size = System::Drawing::Size(83, 26);
			this->tbCoefCooling->TabIndex = 4;
			// 
			// tbNumPoints
			// 
			this->tbNumPoints->Location = System::Drawing::Point(245, 319);
			this->tbNumPoints->Name = L"tbNumPoints";
			this->tbNumPoints->Size = System::Drawing::Size(83, 26);
			this->tbNumPoints->TabIndex = 5;
			// 
			// cbRK4
			// 
			this->cbRK4->AutoSize = true;
			this->cbRK4->Location = System::Drawing::Point(528, 139);
			this->cbRK4->Name = L"cbRK4";
			this->cbRK4->Size = System::Drawing::Size(230, 24);
			this->cbRK4->TabIndex = 6;
			this->cbRK4->Text = L"�����-����� 4-�� �������";
			this->cbRK4->UseVisualStyleBackColor = true;
			// 
			// cbEuler
			// 
			this->cbEuler->AutoSize = true;
			this->cbEuler->Location = System::Drawing::Point(528, 182);
			this->cbEuler->Name = L"cbEuler";
			this->cbEuler->Size = System::Drawing::Size(93, 24);
			this->cbEuler->TabIndex = 7;
			this->cbEuler->Text = L"������";
			this->cbEuler->UseVisualStyleBackColor = true;
			// 
			// cbMEuler
			// 
			this->cbMEuler->AutoSize = true;
			this->cbMEuler->Location = System::Drawing::Point(528, 226);
			this->cbMEuler->Name = L"cbMEuler";
			this->cbMEuler->Size = System::Drawing::Size(193, 24);
			this->cbMEuler->TabIndex = 8;
			this->cbMEuler->Text = L"���������� ������";
			this->cbMEuler->UseVisualStyleBackColor = true;
			// 
			// cbEulerKoushi
			// 
			this->cbEulerKoushi->AutoSize = true;
			this->cbEulerKoushi->Location = System::Drawing::Point(528, 272);
			this->cbEulerKoushi->Name = L"cbEulerKoushi";
			this->cbEulerKoushi->Size = System::Drawing::Size(139, 24);
			this->cbEulerKoushi->TabIndex = 9;
			this->cbEulerKoushi->Text = L"������-����";
			this->cbEulerKoushi->UseVisualStyleBackColor = true;
			// 
			// lTemp0
			// 
			this->lTemp0->AutoSize = true;
			this->lTemp0->Location = System::Drawing::Point(28, 139);
			this->lTemp0->Name = L"lTemp0";
			this->lTemp0->Size = System::Drawing::Size(197, 20);
			this->lTemp0->TabIndex = 10;
			this->lTemp0->Text = L"��������� �����������";
			// 
			// lRoomTemp
			// 
			this->lRoomTemp->AutoSize = true;
			this->lRoomTemp->Location = System::Drawing::Point(29, 183);
			this->lRoomTemp->Name = L"lRoomTemp";
			this->lRoomTemp->Size = System::Drawing::Size(196, 20);
			this->lRoomTemp->TabIndex = 11;
			this->lRoomTemp->Text = L"��������� �����������";
			this->lRoomTemp->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// lCoefCooling
			// 
			this->lCoefCooling->AutoSize = true;
			this->lCoefCooling->Location = System::Drawing::Point(18, 230);
			this->lCoefCooling->Name = L"lCoefCooling";
			this->lCoefCooling->Size = System::Drawing::Size(207, 20);
			this->lCoefCooling->TabIndex = 12;
			this->lCoefCooling->Text = L"����������� ���������";
			// 
			// lTimePeriod
			// 
			this->lTimePeriod->AutoSize = true;
			this->lTimePeriod->Location = System::Drawing::Point(71, 276);
			this->lTimePeriod->Name = L"lTimePeriod";
			this->lTimePeriod->Size = System::Drawing::Size(154, 20);
			this->lTimePeriod->TabIndex = 13;
			this->lTimePeriod->Text = L"��������� ������";
			// 
			// lNumPoints
			// 
			this->lNumPoints->AutoSize = true;
			this->lNumPoints->Location = System::Drawing::Point(77, 319);
			this->lNumPoints->Name = L"lNumPoints";
			this->lNumPoints->Size = System::Drawing::Size(148, 20);
			this->lNumPoints->TabIndex = 14;
			this->lNumPoints->Text = L"���������� �����";
			// 
			// bRun
			// 
			this->bRun->Location = System::Drawing::Point(389, 378);
			this->bRun->Name = L"bRun";
			this->bRun->Size = System::Drawing::Size(136, 65);
			this->bRun->TabIndex = 15;
			this->bRun->Text = L"����";
			this->bRun->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(922, 492);
			this->Controls->Add(this->bRun);
			this->Controls->Add(this->lNumPoints);
			this->Controls->Add(this->lTimePeriod);
			this->Controls->Add(this->lCoefCooling);
			this->Controls->Add(this->lRoomTemp);
			this->Controls->Add(this->lTemp0);
			this->Controls->Add(this->cbEulerKoushi);
			this->Controls->Add(this->cbMEuler);
			this->Controls->Add(this->cbEuler);
			this->Controls->Add(this->cbRK4);
			this->Controls->Add(this->tbNumPoints);
			this->Controls->Add(this->tbCoefCooling);
			this->Controls->Add(this->lHader);
			this->Controls->Add(this->tbTimePeriod);
			this->Controls->Add(this->tbRoomTemp);
			this->Controls->Add(this->tbTemp0);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
