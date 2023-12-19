#include <opencv2/opencv.hpp>

int main() {
    // ����ͼ��
    cv::Mat originalImage = cv::imread("testing2.jpg");
    if (originalImage.empty()) {
        std::cerr << "Error: Could not load image." << std::endl;
        return -1;
    }

    // ��ͼ��ת��Ϊ�Ҷ�ͼ
    cv::Mat grayImage;
    cv::cvtColor(originalImage, grayImage, cv::COLOR_BGR2GRAY);

    // ���Ҷ�ͼ���ֵ��
    cv::Mat binaryImage;
    cv::threshold(grayImage, binaryImage, 128, 255, cv::THRESH_BINARY);

    // ���Ҷ�ͼ����и�˹ģ������
    cv::Mat blurredImage;
    cv::GaussianBlur(grayImage, blurredImage, cv::Size(5, 5), 0);

    // ��ʾԭʼͼ��ʹ�����ͼ��
    cv::imshow("Original Image", originalImage);
    cv::imshow("Gray Image", grayImage);
    cv::imshow("Binary Image", binaryImage);
    cv::imshow("Blurred Image", blurredImage);

    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}
