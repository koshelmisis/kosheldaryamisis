
#include <opencv2/opencv.hpp>

using namespace cv;



int main() {

	int h =60;

	int w = 786;

	Mat img(Mat::zeros(h, w, CV_8U));

	Mat imgres(Size(w, 2 * h), CV_8U);

	for (int col = 0; col < w; ++col) {

		for (int row = 0; row < h; ++row) {

			img.at<uchar>(Point(col, row)) = col / 3;

		}

	}

	img.copyTo(imgres(Rect(0, 0, w, h)));

	img.convertTo(img, CV_64F, 1.0 / 256);

	cv::pow(img, 2.2, img);

	img.convertTo(img, CV_8U, 256);

	img.copyTo(imgres(Rect(0, h, w, h)));





	namedWindow("work1", 1);

	imshow("work1", imgres);

	waitKey(0);


		Mat img2(Mat::zeros(h, w, CV_8U));

		Mat imgres2(Size(w, 2 * h), CV_8U);

		for (int col = 0; col < w; ++col) {

			for (int row = 0; row < h; ++row) {

				img2.at<uchar>(Point(col, row)) = 5 + col / 300;

			}

		}

		img2.copyTo(imgres2(Rect(0, 0, w, h)));

		img2.convertTo(img2, CV_64F, 1.0 / 256);

		cv::pow(img2, 2.3, img2);

		img2.convertTo(img2, CV_8U, 256);

		img2.copyTo(imgres2(Rect(0, h, w, h)));


		imshow("work1", imgres2);

		waitKey(0);

}