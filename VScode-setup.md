# VS Code Development Setup

## Recommended Development Environment

For the best learning experience, we recommend using **Visual Studio Code** with C++ and CMake extensions.

## VS Code Extensions (Required)
Install these extensions for optimal C++ development:
- **C/C++** (Microsoft) - IntelliSense, debugging, and code browsing
- **CMake Tools** (Microsoft) - CMake project integration  
- **CMake** (twxs) - CMake language support and syntax highlighting
- **Code Runner** (Jun Han) - Quick compile and run functionality
- **clang-format** (xaver) - Advanced code formatting integration

## Automated Code Formatting Setup

The project includes a `.clang-format` configuration that automatically formats your code:

1. **Format on Save** (Recommended):
   - Add to VS Code settings: `"editor.formatOnSave": true`
   - Code automatically formats when you press `Ctrl+S`

2. **Manual Formatting**:
   - **Format document**: `Shift+Alt+F`
   - **Format selection**: `Ctrl+K, Ctrl+F`

3. **Project Settings**:
   - Configuration in `.vscode/settings.json`
   - Google-based style with 4-space indentation
   - 100-character line limits
   - Consistent spacing and bracket placement

## Initial Setup

1. **Open the project:**
   ```bash
   code /path/to/CppCourse
   ```

2. **Configure CMake Tools:**
   - Press `Ctrl+Shift+P` (or `Cmd+Shift+P` on macOS)
   - Type "CMake: Select a Kit" and choose your compiler (GCC, Clang, etc.)
   - Run "CMake: Configure" to set up the project

## Building and Running in VS Code

### Method 1: Using CMake Tools (Recommended)

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

### Method 2: Quick Run
- Open any `.cpp` file with a `main()` function
- Press `Ctrl+F5` to compile and run directly
- Or click the "Run Code" button (▶️) in the top-right corner

## Debugging in VS Code

1. **Set breakpoints** by clicking in the left margin next to line numbers
2. **Start debugging** by pressing `F5`
3. **Use the Debug Console** to inspect variables and evaluate expressions
4. **Step through code** using the debugging toolbar

## Useful VS Code Features for C++

### IntelliSense and Navigation
- **Auto-completion**: Press `Ctrl+Space` for suggestions
- **Go to definition**: Press `F12` or `Ctrl+Click`
- **Find all references**: Press `Shift+F12`
- **Hover information**: Hover over variables for type info

### Integrated Terminal
- **Open terminal**: Press `Ctrl+`` (backtick)
- **Multiple terminals**: Click the + button in terminal panel
- **Run commands**: Execute build commands directly within VS Code

### Code Formatting (Automated)
- **Auto-format on save**: Code automatically formats when saving (`Ctrl+S`)
- **Manual formatting**: Use `Shift+Alt+F` for document or `Ctrl+K, Ctrl+F` for selection
- **Consistent standards**: Project-wide formatting ensures code consistency
- **Professional style**: Google-based standards with educational modifications

## Project-Specific Workflow

For each exercise in this course:

1. **Navigate to project folder** in VS Code Explorer
2. **Read the project's README.md** for specific requirements
3. **Configure CMake** if not already done
4. **Write/modify code** with IntelliSense assistance
5. **Build frequently** using `F7` to catch errors early
6. **Test your solution** using `Shift+F5`
7. **Debug if needed** using breakpoints and `F5`
8. **Run tests** (where available) using `Ctrl+Shift+P` → "CMake: Run Tests"

## Running Unit Tests

For projects with unit tests (like functions-fahrenheit):

1. **Build tests**: Use `CMake: Build` to compile test executables
2. **Run tests**: Use `CMake: Run Tests` or run `ctest` in terminal
3. **View results**: Check output for test results and coverage information
4. **Debug tests**: Set breakpoints in test files and debug with `F5`

## Troubleshooting

### Common Issues:
- **CMake not found**: Install CMake and ensure it's in your PATH
- **Compiler not detected**: Install GCC/Clang and select the kit in CMake Tools
- **IntelliSense not working**: Check that the C/C++ extension is installed and active
- **Build failures**: Check the Output panel for detailed error messages

### Getting Help:
- Use `Ctrl+Shift+P` → "C/C++: Log Diagnostics" for debugging IntelliSense issues
- Check the Output panel (View → Output) for build and CMake logs
- Refer to individual project README files for specific build instructions

## Quick Reference

### Essential VS Code Shortcuts
- `Ctrl+Shift+P` - Command Palette
- `F7` - Build project (CMake)
- `Shift+F5` - Run without debugging
- `F5` - Start debugging
- `Ctrl+S` - Save and auto-format
- `Shift+Alt+F` - Format document
- `F12` - Go to definition
- `Shift+F12` - Find all references

### Common Build Commands
```bash
# Build single project
mkdir build && cd build && cmake .. && make

# Run tests
ctest --verbose

# Format all files
find . -name "*.cpp" -o -name "*.hpp" | xargs clang-format -i

# Clean build
rm -rf build && mkdir build && cd build && cmake ..
```

This setup provides a professional C++ development environment that will serve you well throughout your programming journey!