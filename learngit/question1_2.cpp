#include <opencv2/opencv.hpp>

int main() {
    // (1) 加载并显示一张图像，输入“Esc”退出
    cv::Mat image = cv::imread("testing1.jpg");
    if (image.empty()) {
        std::cerr << "Error: Could not find image." << std::endl;
        return -1;
    }

    cv::imshow("Image", image);
    int key = cv::waitKey(0);
    if (key == 27) {  // ASCII code for 'Esc' key
        cv::destroyAllWindows();
    }

    // (2) 加载一个视频，输入“Esc”退出
    cv::VideoCapture video("miku.mp4");
    if (!video.isOpened()) {
        std::cerr << "Error: Could not open video file." << std::endl;
        return -1;
    }

    while (true) {
        cv::Mat frame;
        video >> frame;
        if (frame.empty()) {
            std::cerr << "Error: End of video." << std::endl;
            break;
        }

        cv::imshow("Video", frame);
        key = cv::waitKey(30);
        if (key == 27) {  // ASCII code for 'Esc' key
            break;
        }
    }

    video.release();
    cv::destroyAllWindows();

    // (3) 开启计算机摄像头，输入“Esc”退出
    cv::VideoCapture camera(0); 
    if (!camera.isOpened()) {
        std::cerr << "Error: Could not open camera." << std::endl;
        return -1;
    }

    while (true) {
        cv::Mat frame;
        camera >> frame;
        if (frame.empty()) {
            std::cerr << "Error: Could not capture frame." << std::endl;
            break;
        }

        cv::imshow("Camera", frame);
        key = cv::waitKey(30);
        if (key == 27) {  // ASCII code for 'Esc' key
            break;
        }
    }

    camera.release();
    cv::destroyAllWindows();

    return 0;
}
