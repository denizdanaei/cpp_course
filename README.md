# C++ Course

A comprehensive collection of C++ programming exercises and projects covering fundamental to advanced concepts.

## 📚 Course Contents

### Fundamentals
- **[functions-fahrenheit/](functions-fahrenheit/)** - Temperature conversion functions
- **[q-and-a/](q-and-a/)** - Interactive Q&A system with user input validation
- **[student/](student/)** - Student class implementation with grade management

### Object-Oriented Programming
- **[school/](school/)** - School management system with courses and students
- **[music-player/](music-player/)** - Media player with inheritance and polymorphism
- **[matrix/](matrix/)** - Matrix class with operator overloading

### Advanced Topics
- **[vector/](vector/)** - Custom vector implementation using templates

## 🚀 Getting Started

### Prerequisites
- C++ compiler (GCC, Clang, or MSVC)
- CMake 3.15 or higher
- Make or Ninja build system
- Basic understanding of programming concepts

### Building and Running

Each project can be built using CMake:

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

**Build all projects from root directory:**
```bash
# If you have a root CMakeLists.txt that includes all subdirectories
mkdir build && cd build
cmake ..
cmake --build .

# Run specific programs
./functions-fahrenheit/fahrenheit-converter
./q-and-a/qa-system
./music-player/media-player
```

## 📖 Project Descriptions

### Functions & Basic I/O
- **Fahrenheit Converter**: Functions for temperature conversion
- **Q&A System**: User input handling and validation

### Classes & Objects
- **Student Management**: Class design with encapsulation
- **School System**: Multiple class interaction and composition

### Inheritance & Polymorphism
- **Music Player**: Abstract base classes and virtual functions
- **Media Player**: Polymorphic behavior with different song types

### Operator Overloading
- **Matrix Class**: Mathematical operations on custom objects

### Templates
- **Vector Class**: Generic container implementation

## 🛠️ Development

### Code Standards
- Follow modern C++ practices (C++17+)
- Use meaningful variable and function names
- Include proper error handling
- Add comments for complex logic

### File Structure
```
project-name/
├── CMakeLists.txt # CMake configuration
├── *.hpp          # Header files
├── *.cpp          # Source files
└── main.cpp       # Program entry point
```

## 📝 Learning Objectives

- **Basic Syntax**: Variables, functions, control structures
- **Object-Oriented Programming**: Classes, inheritance, polymorphism
- **Memory Management**: Pointers, references, RAII
- **STL**: Standard library containers and algorithms
- **Templates**: Generic programming concepts
- **Build Systems**: CMake project configuration
- **Best Practices**: Modern C++ idioms and patterns

## 🤝 Contributing

This is a learning repository. Feel free to:
- Suggest improvements to existing code
- Add documentation or comments
- Report issues or bugs
- Share alternative implementations

## 📄 License

This project is for educational purposes.

---

**Note**: Each directory contains its own specific implementation focusing on different C++ concepts. Explore each project to understand the progression from basic syntax to advanced features.

## 📝 Appendix: VS Code Development Setup

### Recommended Development Environment

For the best learning experience, we recommend using **Visual Studio Code** with C++ and CMake extensions.

### VS Code Extensions (Required)
Install these extensions for optimal C++ development:
- **C/C++** (Microsoft) - IntelliSense, debugging, and code browsing
- **CMake Tools** (Microsoft) - CMake project integration
- **CMake** (twxs) - CMake language support and syntax highlighting
- **Code Runner** (Jun Han) - Quick compile and run functionality

### Initial Setup

1. **Open the project:**
   ```bash
   code /path/to/CppCourse
   ```

2. **Configure CMake Tools:**
   - Press `Ctrl+Shift+P` (or `Cmd+Shift+P` on macOS)
   - Type "CMake: Select a Kit" and choose your compiler (GCC, Clang, etc.)
   - Run "CMake: Configure" to set up the project

### Building and Running in VS Code

#### Method 1: Using CMake Tools (Recommended)

1. **Select a project folder** in the VS Code Explorer
2. **Configure the project:**
   - Open Command Palette (`Ctrl+Shift+P`)
   - Run: `CMake: Configure`
   - Select your preferred compiler kit
3. **Build the project:**
   - Run: `CMake: Build` or press `F7`
   - Or click the "Build" button in the status bar
4. **Run the program:**
   - Run: `CMake: Run Without Debugging` or press `Shift+F5`
   - Or click the "Run" button in the status bar

#### Method 2: Quick Run
- Open any `.cpp` file with a `main()` function
- Press `Ctrl+F5` to compile and run directly
- Or click the "Run Code" button (▶️) in the top-right corner

### Debugging in VS Code

1. **Set breakpoints** by clicking in the left margin next to line numbers
2. **Start debugging** by pressing `F5`
3. **Use the Debug Console** to inspect variables and evaluate expressions
4. **Step through code** using the debugging toolbar

### Useful VS Code Features for C++

#### IntelliSense and Navigation
- **Auto-completion**: Press `Ctrl+Space` for suggestions
- **Go to definition**: Press `F12` or `Ctrl+Click`
- **Find all references**: Press `Shift+F12`
- **Hover information**: Hover over variables for type info

#### Integrated Terminal
- **Open terminal**: Press `Ctrl+`` (backtick)
- **Multiple terminals**: Click the + button in terminal panel
- **Run commands**: Execute build commands directly within VS Code

#### Code Formatting
- **Format document**: Press `Shift+Alt+F`
- **Format selection**: Select code and press `Ctrl+K, Ctrl+F`

### Project-Specific Workflow

For each exercise in this course:

1. **Navigate to project folder** in VS Code Explorer
2. **Read the project's README.md** for specific requirements
3. **Configure CMake** if not already done
4. **Write/modify code** with IntelliSense assistance
5. **Build frequently** using `F7` to catch errors early
6. **Test your solution** using `Shift+F5`
7. **Debug if needed** using breakpoints and `F5`

### Troubleshooting

#### Common Issues:
- **CMake not found**: Install CMake and ensure it's in your PATH
- **Compiler not detected**: Install GCC/Clang and select the kit in CMake Tools
- **IntelliSense not working**: Check that the C/C++ extension is installed and active
- **Build failures**: Check the Output panel for detailed error messages

#### Getting Help:
- Use `Ctrl+Shift+P` → "C/C++: Log Diagnostics" for debugging IntelliSense issues
- Check the Output panel (View → Output) for build and CMake logs
- Refer to individual project README files for specific build instructions

This setup provides a professional C++ development environment that will serve you well throughout your programming journey!