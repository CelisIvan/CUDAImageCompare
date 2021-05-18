// Iván Celis Maldonado

#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

#include "CompareCUDA.h"

using namespace std;
using namespace cv;

int main() {


	Mat inputImage = imread("Testimage.png");

	Mat inputImage2 = imread("Testimage2.png");

	Mat diffImage = inputImage.clone();

	cout << "Height: " << inputImage.rows << "\nWIDTH: " << inputImage.cols << "Chanels: " << inputImage.channels() << endl;
	
	Image_Comparisson_CUDA(inputImage.data, inputImage2.data, diffImage.data, inputImage.rows, inputImage.cols, inputImage.channels());


	imwrite("InvertedImage.png", diffImage);

	system("pause");
	return 0;
}