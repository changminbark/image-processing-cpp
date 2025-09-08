# Image Processing using OpenCV in C++

A command-line image processing application built with C++ and OpenCV that provides various transformation filters for image manipulation.

## Features

- **Gaussian Blur**: Apply blur effect with configurable intensity
- **Warp**: Geometric transformations (planned feature)
- **Invert**: Color inversion effects (planned feature) 
- **Black & White**: Convert images to grayscale (planned feature)
- Interactive CLI with colorful interface
- Side-by-side display of original and transformed images
- Automatic saving of processed images

## Requirements

- CMake 3.10.0 or higher
- OpenCV 4.x
- C++17 compatible compiler

## Installation

1. Install OpenCV:
   ```bash
   # Ubuntu/Debian
   sudo apt update
   sudo apt install libopencv-dev

   # macOS with Homebrew
   brew install opencv
   ```

2. Clone and build:
   ```bash
   git clone <repository-url>
   cd image-processing-cpp
   mkdir build && cd build
   cmake ..
   make # (or VSCode's CMake Build command palette)
   ```

## Usage

1. Place your images in the `assets/` directory
2. Run the application:
   ```bash
   ./image-processing-cpp
   ```
3. Follow the interactive prompts:
   - Enter the image filename (with extension)
   - Choose transformation: `blur`, `warp`, `invert`, or `bnw`

The processed image will be saved to the `transformed/` directory and displayed alongside the original.

## Project Structure

```
image-processing-cpp/
├── src/
│   ├── main.cpp          # Main application logic
│   └── cli.cpp           # Command-line interface implementation
├── include/
│   └── cli.h             # Header definitions
├── assets/               # Input images directory
├── transformed/          # Output images directory
└── CMakeLists.txt        # Build configuration
```

## Development Status

- ✅ Gaussian Blur transformation
- ⏳ Warp transformation (in development)
- ⏳ Color inversion (in development)
- ⏳ Black & white conversion (in development)

## Future Plans
- Integrate ML models (like object detection/recognition)
- Integrate CUDA acceleration to CV/ML models
- Integrate webcam feed

## Contributing

Contributions are welcome! Please feel free to submit pull requests or open issues for bugs and feature requests.
