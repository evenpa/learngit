#include <opencv2/opencv.hpp>

int main() {
    // ����ͼ��
    cv::Mat originalImage = cv::imread("testing3.jpg");
    if (originalImage.empty()) {
        std::cerr << "Error: Could not load image." << std::endl;
        return -1;
    }

    // (1) ���ͼ���Ե
    cv::Mat edges;
    cv::Canny(originalImage, edges, 50, 150);

    // (2) �������Ͳ���
    cv::Mat dilatedImage;
    cv::dilate(edges, dilatedImage, cv::Mat(), cv::Point(-1, -1), 2);

    // (3) ������ʴ����
    cv::Mat erodedImage;
    cv::erode(dilatedImage, erodedImage, cv::Mat(), cv::Point(-1, -1), 2);

    // (4) �ı�ͼ���С������Ϊ50%
    cv::Mat resizedImage;
    cv::resize(originalImage, resizedImage, cv::Size(), 0.5, 0.5);

    // (5) ��ʾԭʼͼ��ʹ�����ͼ��
    cv::imshow("Original Image", originalImage);
    cv::imshow("Edges", edges);
    cv::imshow("Dilated Image", dilatedImage);
    cv::imshow("Eroded Image", erodedImage);
    cv::imshow("Resized Image", resizedImage);

    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}
