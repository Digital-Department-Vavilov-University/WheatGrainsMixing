#pragma once


namespace wheat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox8;


	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox11;




	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox14;

	private: System::Windows::Forms::TextBox^  textBox13;





	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox17;











	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(118, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(412, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Оптимизация состава пшеничных помольных смесей";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Партия зерна";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(141, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Цена, руб./т";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(263, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Клейковина";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(383, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Влажность";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(527, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"ИДК";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(43, 89);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"1 партия";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(43, 137);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"2 партия";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(43, 184);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 20);
			this->label9->TabIndex = 8;
			this->label9->Text = L"3 партия";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(43, 235);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 20);
			this->label10->TabIndex = 9;
			this->label10->Text = L"4 партия";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(145, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(83, 26);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(267, 86);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(77, 26);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(387, 86);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(80, 26);
			this->textBox3->TabIndex = 12;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(503, 86);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(94, 26);
			this->textBox4->TabIndex = 13;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(145, 134);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(83, 26);
			this->textBox5->TabIndex = 14;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(503, 134);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(94, 26);
			this->textBox8->TabIndex = 17;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(387, 134);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(80, 26);
			this->textBox7->TabIndex = 16;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(267, 134);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(77, 26);
			this->textBox6->TabIndex = 15;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(387, 181);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(80, 26);
			this->textBox11->TabIndex = 20;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(265, 181);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(80, 26);
			this->textBox10->TabIndex = 19;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(145, 181);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(77, 26);
			this->textBox9->TabIndex = 18;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(387, 229);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(80, 26);
			this->textBox15->TabIndex = 24;
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(265, 229);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(80, 26);
			this->textBox14->TabIndex = 23;
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(145, 229);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(77, 26);
			this->textBox13->TabIndex = 22;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(503, 229);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(94, 26);
			this->textBox16->TabIndex = 25;
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(503, 181);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(94, 26);
			this->textBox12->TabIndex = 21;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(503, 342);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(94, 26);
			this->textBox20->TabIndex = 29;
			this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(381, 342);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(86, 26);
			this->textBox19->TabIndex = 28;
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(265, 342);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(80, 26);
			this->textBox18->TabIndex = 27;
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(145, 342);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(77, 26);
			this->textBox17->TabIndex = 26;
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(22, 302);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(114, 20);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Партия зерна";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(516, 302);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(76, 20);
			this->label12->TabIndex = 34;
			this->label12->Text = L"4 партия";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(400, 303);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(76, 20);
			this->label13->TabIndex = 33;
			this->label13->Text = L"3 партия";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(277, 303);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(76, 20);
			this->label14->TabIndex = 32;
			this->label14->Text = L"2 партия";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(155, 303);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(76, 20);
			this->label15->TabIndex = 31;
			this->label15->Text = L"1 партия";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(210, 272);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(298, 20);
			this->label16->TabIndex = 35;
			this->label16->Text = L"Массовая доля зерна в 1 тонне смеси";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(141, 397);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(198, 20);
			this->label17->TabIndex = 36;
			this->label17->Text = L"Цена 1 тонны смеси, руб.";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(381, 391);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(86, 26);
			this->textBox21->TabIndex = 37;
			this->textBox21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(174, 454);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 33);
			this->button1->TabIndex = 38;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(360, 454);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 33);
			this->button2->TabIndex = 39;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(648, 499);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Wheat Grain Mixing";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 float a1=Convert::ToSingle(textBox1->Text);
			 float a2=Convert::ToSingle(textBox2->Text);
			 float a3=Convert::ToSingle(textBox3->Text);
			 float a4=Convert::ToSingle(textBox4->Text);
			 
			 float b1=Convert::ToSingle(textBox5->Text);
			 float b2=Convert::ToSingle(textBox6->Text);
			 float b3=Convert::ToSingle(textBox7->Text);
			 float b4=Convert::ToSingle(textBox8->Text);
			 
			 float c1=Convert::ToSingle(textBox9->Text);
			 float c2=Convert::ToSingle(textBox10->Text);
			 float c3=Convert::ToSingle(textBox11->Text);
			 float c4=Convert::ToSingle(textBox12->Text);
			 
			 float d1=Convert::ToSingle(textBox13->Text);
			 float d2=Convert::ToSingle(textBox14->Text);
			 float d3=Convert::ToSingle(textBox15->Text);
			 float d4=Convert::ToSingle(textBox16->Text);
			 
			 float f1=Convert::ToSingle(textBox17->Text);
			 float f2=Convert::ToSingle(textBox18->Text);
			 float f3=Convert::ToSingle(textBox19->Text);
			 float f4=Convert::ToSingle(textBox20->Text);
			 
float s1=(a2-27.75)*(a2-27.75)/(27.75*27.75)+(a3-11.72)*(a3-11.72)/(11.72*11.72)+(a4-80)*(a4-80)/(80*80);
float s2=(b2-24)*(b2-24)/(24*24)+(b3-13.5)*(b3-13.5)/(13.5*13.5)+(b4-49)*(b4-49)/(49*49);
float s3=(c2-23.8)*(c2-23.8)/(23.8*23.8)+(c3-13.5)*(c3-13.5)/(13.5*13.5)+(c4-76)*(c4-76)/(76*76);			 
float s4=(d2-21.99)*(d2-21.99)/(21.99*21.99)+(d3-16.83)*(c3-16.83)/(16.83*16.83)+(d4-68)*(c4-68)/(68*68);			 

float h=Math::Abs(a1*f1*(1+s1/9)+b1*f2*(1+s2/9)+c1*f3*(1+s3/9)+d1*f4*(1+s4/9)); textBox21->Text=h.ToString();
			 
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		 textBox1->Text="";
		 textBox2->Text="";
		 textBox3->Text="";
		 textBox4->Text="";
		 textBox5->Text="";
		 textBox6->Text="";
		 textBox7->Text="";
		 textBox8->Text="";
		 textBox9->Text="";
		 textBox10->Text="";
		 textBox11->Text="";
		 textBox12->Text="";
		 textBox13->Text="";
		 textBox14->Text="";
		 textBox15->Text="";
		 textBox16->Text="";
		 textBox17->Text="";
		 textBox18->Text="";
		 textBox19->Text="";
		 textBox20->Text="";
		 textBox21->Text="";
		 }
};
}

