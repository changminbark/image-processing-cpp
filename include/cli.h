#ifndef IMAGE_PROCESSING_H
#define IMAGE_PROCESSING_H

#include <iostream>
#include <optional> // for std::optional
#include <string>
#include <string_view>

enum class ImageTransformation
{
    blur,
    warp,
    invert,
    bnw,
};

// ANSI color codes
namespace Colors {
    const std::string RESET = "\033[0m";
    const std::string BOLD = "\033[1m";
    const std::string CYAN = "\033[36m";
    const std::string BLUE = "\033[34m";
    const std::string GREEN = "\033[32m";
    const std::string YELLOW = "\033[33m";
    const std::string MAGENTA = "\033[35m";
}

namespace cli 
{
    std::optional<ImageTransformation> getTransformationFromString(std::string_view sv);
    void printColorfulIntro();
};


#endif