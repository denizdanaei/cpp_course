# C++ Course

A comprehensive collection of C++ programming exercises and projects covering fundamental to advanced concepts with professional development practices.

## 📋 Table of Contents

<!-- TOC -->
- [📋 Table of Contents](#-table-of-contents)
- [📚 Course Contents](#-course-contents)
  - [Fundamentals](#fundamentals)
  - [Object-Oriented Programming](#object-oriented-programming)
  - [Advanced Topics](#advanced-topics)
- [✨ Features](#-features)
  - [🎨 Code Formatting (Optional)](#-code-formatting-optional)
- [🚀 Getting Started](#-getting-started)
  - [Prerequisites](#prerequisites)
  - [Quick Setup](#quick-setup)
- [🛠️ Development Environment](#️-development-environment)
  - [Recommended IDE Setup](#recommended-ide-setup)
  - [Code Standards](#code-standards)
  - [Project Structure](#project-structure)
  - [Git Integration](#git-integration)
- [🤝 Contributing](#-contributing)

<!-- /TOC -->

## 📚 Course Contents

### Fundamentals 
- **[functions-fahrenheit/](functions-fahrenheit/)** - Temperature conversion functions (Celsius, Fahrenheit, Kelvin) with comprehensive unit testing
- **[q-and-a/](q-and-a/)** - Interactive Q&A system with user input validation
- **[time-conversion/](time-conversion/)** - Time format conversion utilities

### Object-Oriented Programming
- **[student-manager/](student-manager/)** - Student management system with smart pointers
- **[school/](school/)** - School management system using inheritance and polymorphism
- **[music-player/](music-player/)** - Media player with inheritance and polymorphism
- **[matrix/](matrix/)** - Matrix operations with 2D vectors and mathematical operations

### Advanced Topics
- **[vector/](vector/)** - Vector operations using STL containers and algorithms

## ✨ Features

### 🎨 Code Formatting (Optional)
- **Automatic code formatting** with clang-format - Optional
- **Google-based coding standards** with custom modifications
- **VS Code integration** for format-on-save functionality
- **Consistent code style** across all projects

## 🚀 Getting Started

### Prerequisites
- **C++ compiler** (GCC, Clang, or MSVC)
- **CMake 3.15 or higher**
- **Make or Ninja build system**
- **clang-format** (for code formatting)
- **Google Test** (for unit tests)
- **Git**
- Basic understanding of programming concepts

### Quick Setup
```bash
# Install prerequisites (Ubuntu/Debian)
sudo apt-get update
sudo apt-get install build-essential cmake clang-format libgtest-dev git
```
**Building and Running**

Each project can be built using the CMake extension in VSCode or follow the steps below

```bash
# Navigate to a project directory
cd functions-fahrenheit/

# Create a build directory
mkdir build && cd build

# Configure the project with CMake
cmake ..

# Build the project
cmake --build .

# Run the executable
./program
```

**Alternative using direct compilation:**
```bash
# For projects without CMakeLists.txt
g++ -std=c++17 -Wall -Wextra -o program *.cpp
./program
```

## 🛠️ Development Environment

### Recommended IDE Setup
We recommend **Visual Studio Code** with C++ and CMake extensions for the best learning experience.

📋 **For detailed VS Code setup instructions, see [VScode-setup.md](VScode-setup.md)**

### Code Standards
- **Modern C++17** practices throughout all projects
- **Google-based formatting** with clang-format automation
- **Comprehensive commenting** for complex algorithms
- **Unit testing** for critical functionality
- **Memory safety** with RAII principles
- **Const-correctness** and efficient reference usage

### Project Structure
```
project-name/
├── CMakeLists.txt     # CMake build configuration
├── README.md          # Project-specific documentation
├── *.hpp              # Header files
├── *.cpp              # Source files  
├── main.cpp           # Program entry point
├── test_*.cpp         # Unit test files (where applicable)
└── build/             # Build artifacts (git-ignored)
```

### Git Integration
- **Comprehensive .gitignore** excluding build artifacts and IDE files
- **Clean repository** with only source code and documentation
- **Professional commit practices** for educational tracking

## 🤝 Contributing

This is a learning repository. Feel free to:
- Suggest improvements to existing code
- Add documentation or comments
- Report issues or bugs
- Share alternative implementations

---

**Note**: Each directory contains its own specific implementation focusing on different C++ concepts. Explore each project to understand the progression from basic syntax to advanced features.
