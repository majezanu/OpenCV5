#pragma once
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <opencv/cv.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

namespace OpenCVTemplateUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cv;

	/// <summary>
	/// Resumen de LocalHist
	/// </summary>
	public ref class LocalHist : public System::Windows::Forms::Form
	{
	public:
		LocalHist(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LocalHist()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label8;
	protected:
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  applyThreshold;
	private: System::Windows::Forms::Button^  applyContrast;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label3;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->applyThreshold = (gcnew System::Windows::Forms::Button());
			this->applyContrast = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(739, 307);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 13);
			this->label8->TabIndex = 66;
			this->label8->Text = L"Local Histogram";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(185, 307);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 13);
			this->label7->TabIndex = 65;
			this->label7->Text = L"Histogram";
			this->label7->Click += gcnew System::EventHandler(this, &LocalHist::label7_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1075, 176);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(170, 44);
			this->button7->TabIndex = 49;
			this->button7->Text = L"Show Original";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &LocalHist::button7_Click);
			// 
			// applyThreshold
			// 
			this->applyThreshold->Location = System::Drawing::Point(1075, 439);
			this->applyThreshold->Name = L"applyThreshold";
			this->applyThreshold->Size = System::Drawing::Size(170, 44);
			this->applyThreshold->TabIndex = 48;
			this->applyThreshold->Text = L"Local Histogram";
			this->applyThreshold->UseVisualStyleBackColor = true;
			this->applyThreshold->Click += gcnew System::EventHandler(this, &LocalHist::applyThreshold_Click);
			// 
			// applyContrast
			// 
			this->applyContrast->Location = System::Drawing::Point(1075, 300);
			this->applyContrast->Name = L"applyContrast";
			this->applyContrast->Size = System::Drawing::Size(170, 44);
			this->applyContrast->TabIndex = 47;
			this->applyContrast->Text = L"Histogram";
			this->applyContrast->UseVisualStyleBackColor = true;
			this->applyContrast->Click += gcnew System::EventHandler(this, &LocalHist::applyContrast_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(542, 326);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(344, 300);
			this->pictureBox3->TabIndex = 46;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(382, 20);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(344, 300);
			this->pictureBox4->TabIndex = 45;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(172, 326);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(344, 300);
			this->pictureBox2->TabIndex = 44;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(334, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 67;
			this->label1->Text = L"Original";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1478, 526);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(10, 13);
			this->label6->TabIndex = 70;
			this->label6->Text = L".";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1118, 562);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 13);
			this->label2->TabIndex = 69;
			this->label2->Text = L"Vary Neighborhood Level";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(1010, 514);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(348, 45);
			this->trackBar1->TabIndex = 68;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &LocalHist::trackBar1_Scroll);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1364, 514);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 71;
			this->label3->Text = L"0";
			// 
			// LocalHist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1444, 646);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->applyThreshold);
			this->Controls->Add(this->applyContrast);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"LocalHist";
			this->Text = L"LocalHist";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat img;
	img = imread("images/Fig0326(a)(embedded_square_noisy_512).tif");
	if (img.data)
	{
		DrawCvImageColor(img, pictureBox4);
	}
}
private: System::Void DrawCvImageColor(Mat img, System::Windows::Forms::PictureBox^ localBox)
{
	cvtColor(img, img, CV_BGRA2RGBA);
	System::Drawing::Graphics^ graphics = localBox->CreateGraphics();
	System::IntPtr ptr(img.ptr());
	System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(img.cols,
		img.rows, img.step, System::Drawing::Imaging::PixelFormat::Format32bppArgb, ptr);
	System::Drawing::RectangleF rect(0, 0, localBox->Width, localBox->Height);
	graphics->DrawImage(b, rect);
}

private: System::Void applyContrast_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat img;
	img = imread("images/Fig0326(a)(embedded_square_noisy_512).tif");
	if (img.data)
	{
		DrawCvImageColor(HistogramEqu(img), pictureBox2);
	}
}
		 private: Mat HistogramEqu(Mat original_image)
		 {
			 Mat clone = original_image.clone();

			 /// Convert to grayscale
			 cvtColor(clone, clone, COLOR_BGR2GRAY);

			 /// Apply Histogram Equalization
			 equalizeHist(clone, clone);
			 cvtColor(clone, clone, COLOR_GRAY2BGR);
			 return clone;
		 }
		private: Mat cvEqualizeLocalHist(Mat  original_image, int nb)
		{
			Mat clone = original_image.clone();
			cvtColor(clone, clone, COLOR_BGR2GRAY);
			Mat destiny = Mat::zeros(clone.size(), clone.type());
			Mat border;
			copyMakeBorder(clone, border, nb, nb, nb, nb, BORDER_CONSTANT);

			Mat kernel = Mat::zeros(2 * nb + 1, 2 * nb + 1, clone.type());
			for (int i = nb; i < clone.rows + nb; i++) 
			{
				 for (int j = nb; j < clone.cols + nb; j++) 
				 {
					for (int k = nb * -1; k <= nb; k++) 
					{ 
						  for (int n = nb * -1; n <= nb; n++) 
						  {
							  kernel.at<uchar>(k + nb, n + nb) = border.at<uchar>(i + k, j + n);
						  }
					}
					equalizeHist(kernel, kernel);
					destiny.at<uchar>(i - nb, j - nb) = kernel.at<uchar>(nb, nb);

				 }
			}
			cvtColor(destiny, destiny, COLOR_GRAY2BGR);
			return destiny;



	    }

private: System::Void applyThreshold_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat img;
	img = imread("images/Fig0326(a)(embedded_square_noisy_512).tif");
	if (img.data)
	{
		DrawCvImageColor(cvEqualizeLocalHist(img, trackBar1->Value), pictureBox3);
	}
	applyThreshold->Enabled = false;
}
private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
	applyThreshold->Enabled = true;
	label3->Text = System::Convert::ToString(trackBar1->Value);
}
};
}
