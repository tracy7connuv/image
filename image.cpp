#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

int main() {
    cv::Mat image = cv::imread("image.jpg", cv::IMREAD_COLOR);
    if(!image.data) {
        std::cout << "Could not open image" << std::endl;
        return -1;
    }
    cv::namedWindow("Window", cv::WINDOW_AUTOSIZE);
    cv::imshow("Window", image);
    cv::waitKey(0);
    return 0;
}
