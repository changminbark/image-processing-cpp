#include <stdio.h>
#include <opencv2/opencv.hpp> // Had to add /usr/local/include/opencv4 to c_cpp_properties.json OR C_Cpp.default.includePath (https://code.visualstudio.com/docs/cpp/customize-cpp-settings)

#include "cli.h"

int main() 
{
    // CLI instructions
    cli::printColorfulIntro();
    std::cout << "Type in the name of the image with the extension that you want to process in the assets/ directory: ";
    std::string image_name;
    std::cin >> image_name;
    std::cout << "Type in one of the following transformation options <blur, warp, invert, bnw>: ";
    std::string transformation_str;
    std::cin >> transformation_str;
    std::optional<ImageTransformation> transformation_name {cli::getTransformationFromString(transformation_str)};

    if (!transformation_name)
    {
        std::cerr << "ERROR: You entered an invalid transformation." << std::endl;
        return 1;
    }
    
    // Load image
    cv::Mat image = cv::imread("assets/" + image_name);

    // Apply filter
    cv::Mat filter;
    switch (*transformation_name) {
        case ImageTransformation::blur:
            cv::GaussianBlur(image, filter, cv::Size(45, 45), 0);
            break;
        case ImageTransformation::warp:
            // TODO: implement warp here
            break;
        case ImageTransformation::invert:
            // TODO: implement invert here
            break;
        case ImageTransformation::bnw:
            // TODO: implement bnw here
            break;
        default:
            std::cerr << "ERROR: Unknown transformation." << std::endl;
            return 1;
    }
    
    // Save transformed image
    cv::imwrite("transformed/" + image_name, filter);

    // Display images
    cv::namedWindow("Display Original Image", cv::WINDOW_NORMAL | cv::WINDOW_KEEPRATIO);
    cv::namedWindow("Display Transformed Image", cv::WINDOW_NORMAL | cv::WINDOW_KEEPRATIO);
    cv::resizeWindow("Display Original Image", 600, 600);
    cv::resizeWindow("Display Transformed Image", 600, 600);
    cv::imshow("Display Original Image", image);
    cv::imshow("Display Transformed Image", filter);

    cv::waitKey(0);

    return 0;
}