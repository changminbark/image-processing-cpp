#include "cli.h"

std::optional<ImageTransformation> cli::getTransformationFromString(std::string_view sv)
{
    if (sv == "blur") return ImageTransformation::blur;
    if (sv == "warp") return ImageTransformation::warp;
    if (sv == "invert") return ImageTransformation::invert;
    if (sv == "bnw") return ImageTransformation::bnw;

    return std::nullopt;
}

void cli::printColorfulIntro() 
{
    std::cout << Colors::CYAN << R"(
    ╔══════════════════════════════════════════════════════════════╗
    ║)" << Colors::BOLD << Colors::YELLOW << "                    IMAGE PROCESSOR v1.0                      " << Colors::RESET << Colors::CYAN << R"(║
    ║                                                              ║
    ║)" << Colors::BLUE << R"(    ___                            ____                       )" << Colors::CYAN << R"(║
    ║)" << Colors::BLUE << R"(   |_ _|_ __ ___   __ _  __ _  ___|  _ \ _ __ ___   ___       )" << Colors::CYAN << R"(║
    ║)" << Colors::BLUE << R"(    | || '_ ` _ \ / _` |/ _` |/ _ \ |_) | '__/ _ \ / __|      )" << Colors::CYAN << R"(║
    ║)" << Colors::BLUE << R"(    | || | | | | | (_| | (_| |  __/  __/| | | (_) | (__       )" << Colors::CYAN << R"(║
    ║)" << Colors::BLUE << R"(   |___|_| |_| |_|\__,_|\__, |\___|_|   |_|  \___/ \___|      )" << Colors::CYAN << R"(║
    ║)" << Colors::BLUE << R"(                        |___/                                 )" << Colors::CYAN << R"(║
    ║                                                              ║
    ║)" << Colors::GREEN << "  Transform your images with powerful filters and effects     " << Colors::CYAN << R"(║
    ╚══════════════════════════════════════════════════════════════╝
    )" << Colors::RESET << std::endl;
}