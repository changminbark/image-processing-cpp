#include <stdio.h>
#include <opencv2/opencv.hpp> // Had to add /usr/local/include/opencv4 to c_cpp_properties.json OR C_Cpp.default.includePath (https://code.visualstudio.com/docs/cpp/customize-cpp-settings)

int main(int argc, char** argv) 
{
    // Check for argument count
    if (argc != 2)
    {
        std::cout << "Usage: ./out/build/image-processing-cmake-preset/image-processing-cpp <Image_Name in assets folder>" << std::endl;
        return -1;
    }
    
    // Load image
    cv::String image_name = argv[1];
    cv::Mat image = cv::imread("assets/" + image_name);

    // Apply blur filter
    cv::Mat blurred;
    cv::GaussianBlur(image, blurred, cv::Size(45, 45), 0);

    // Save transformed image
    cv::imwrite("transformed/" + image_name, blurred);

    // Display images
    cv::namedWindow("Display Original Image", cv::WINDOW_NORMAL | cv::WINDOW_KEEPRATIO);
    cv::namedWindow("Display Transformed Image", cv::WINDOW_NORMAL | cv::WINDOW_KEEPRATIO);
    cv::resizeWindow("Display Original Image", 600, 600);
    cv::resizeWindow("Display Transformed Image", 600, 600);
    cv::imshow("Display Original Image", image);
    cv::imshow("Display Transformed Image", blurred);

    cv::waitKey(0);

    return 0;
}