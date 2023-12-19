#include <opencv2/opencv.hpp>

cv::Mat originalImage;
cv::Mat adjustedImage;
int brightnessValue = 0;   // ��ʼ����ֵ
int contrastValue = 0;     // ��ʼ�Աȶ�ֵ

void updateImage() {
    // �������ȺͶԱȶȵĵ�������
    double alpha = (contrastValue + 100.0) / 100.0;
    int beta = brightnessValue;

    // ����ͼ������ȺͶԱȶ�
    adjustedImage = originalImage.clone();
    adjustedImage.convertTo(adjustedImage, -1, alpha, beta);

    // ��ʾ�������ͼ��
    cv::imshow("Adjusted Image", adjustedImage);
}

void onBrightnessTrackbar(int value, void* userdata) {
    brightnessValue = value - 100;  // �������ȷ�ΧΪ-100��100
    updateImage();
}

void onContrastTrackbar(int value, void* userdata) {
    contrastValue = value - 100;    // �����Աȶȷ�ΧΪ-100��100
    updateImage();
}

int main() {
    // ����ͼ��
    originalImage = cv::imread("testing4.jpg");
    if (originalImage.empty()) {
        std::cerr << "Error: Could not load image." << std::endl;
        return -1;
    }

    adjustedImage = originalImage.clone();

    // ��������
    cv::namedWindow("Adjusted Image");

    // ����������
    cv::createTrackbar("Brightness", "Adjusted Image", &brightnessValue, 200, onBrightnessTrackbar);
    cv::createTrackbar("Contrast", "Adjusted Image", &contrastValue, 200, onContrastTrackbar);

    // ��ʼ������λ��
    cv::setTrackbarPos("Brightness", "Adjusted Image", 100);
    cv::setTrackbarPos("Contrast", "Adjusted Image", 100);

    // ��ʼ��ͼ����ʾ
    updateImage();

   
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}
