#include <opencv2/opencv.hpp>

cv::Mat originalImage;
cv::Mat adjustedImage;
int brightnessValue = 0;   // 初始亮度值
int contrastValue = 0;     // 初始对比度值

void updateImage() {
    // 计算亮度和对比度的调整参数
    double alpha = (contrastValue + 100.0) / 100.0;
    int beta = brightnessValue;

    // 调整图像的亮度和对比度
    adjustedImage = originalImage.clone();
    adjustedImage.convertTo(adjustedImage, -1, alpha, beta);

    // 显示调整后的图像
    cv::imshow("Adjusted Image", adjustedImage);
}

void onBrightnessTrackbar(int value, void* userdata) {
    brightnessValue = value - 100;  // 调整亮度范围为-100到100
    updateImage();
}

void onContrastTrackbar(int value, void* userdata) {
    contrastValue = value - 100;    // 调整对比度范围为-100到100
    updateImage();
}

int main() {
    // 加载图像
    originalImage = cv::imread("testing4.jpg");
    if (originalImage.empty()) {
        std::cerr << "Error: Could not load image." << std::endl;
        return -1;
    }

    adjustedImage = originalImage.clone();

    // 创建窗口
    cv::namedWindow("Adjusted Image");

    // 创建滑动条
    cv::createTrackbar("Brightness", "Adjusted Image", &brightnessValue, 200, onBrightnessTrackbar);
    cv::createTrackbar("Contrast", "Adjusted Image", &contrastValue, 200, onContrastTrackbar);

    // 初始化滑块位置
    cv::setTrackbarPos("Brightness", "Adjusted Image", 100);
    cv::setTrackbarPos("Contrast", "Adjusted Image", 100);

    // 初始化图像显示
    updateImage();

   
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}
