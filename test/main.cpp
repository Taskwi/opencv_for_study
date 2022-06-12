#include "opencv2/opencv.hpp"
#include "iostream"

using namespace cv;

int main(int argc, char const *argv[])
{
  cv::Mat img = cv::imread("./test/1.png");
  int temp;
  if (img.empty())
    std::cout << "image is empty or the path is invalid!" << std::endl;
  else
  {
    std::cout << "successfully!";
    cv::imshow("Origin", img);
    cv::waitKey(0);
    cv::destroyAllWindows();
  }
  return 0;
}
