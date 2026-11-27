#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat img = cv::imread("test.jpg");      // 注意：默认按 BGR 读入
    if (img.empty()) {                          // 永远判空
        std::cerr << "读取失败：检查路径（中文路径有坑，见附录B）\n";
        return 1;
    }
    std::cout << "cols=" << img.cols << " rows=" << img.rows
        << " channels=" << img.channels() << '\n';
    cv::imshow("demo", img);
    cv::imwrite("out.png", img);
    cv::waitKey(0);
    return 0;
}