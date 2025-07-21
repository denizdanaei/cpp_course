# Unit Testing Setup

This project includes comprehensive unit tests using Google Test framework for temperature conversion functions supporting Celsius, Fahrenheit, and Kelvin scales.

## Features Tested

### Temperature Conversion Functions
- `convertCelsiusToFahrenheit()` - C to F conversion
- `convertFahrenheitToCelsius()` - F to C conversion  
- `convertCelsiusToKelvin()` - C to K conversion
- `convertKelvinToCelsius()` - K to C conversion
- `convertFahrenheitToKelvin()` - F to K conversion
- `convertKelvinToFahrenheit()` - K to F conversion

## Prerequisites

Install Google Test:

### Ubuntu/Debian:
```bash
sudo apt-get install libgtest-dev
```

### macOS with Homebrew:
```bash
brew install googletest
```

## Building and Running Tests

### Using VS Code:
1. Configure CMake (`Ctrl+Shift+P` → "CMake: Configure")
2. Build the project (`F7` or "CMake: Build")
3. Run tests (`Ctrl+Shift+P` → "CMake: Run Tests")

### Using Command Line:
```bash
mkdir build && cd build
cmake ..
make
./fahrenheit_tests
```

### Run with CTest for detailed output:
```bash
ctest --verbose
```

## Test Coverage (40 Tests Total)

The comprehensive unit test suite covers:

### Basic Conversions
- ✅ Celsius ↔ Fahrenheit conversions (18 tests)
- ✅ Celsius ↔ Kelvin conversions (8 tests)  
- ✅ Fahrenheit ↔ Kelvin conversions (6 tests)

### Critical Temperature Points
- ✅ Absolute zero (-273.15°C / 0K / -459.67°F)
- ✅ Water freezing point (0°C / 273.15K / 32°F)
- ✅ Water boiling point (100°C / 373.15K / 212°F)
- ✅ Room temperature (20°C / 293.15K / 68°F)
- ✅ Body temperature (37°C / 310.15K / 98.6°F)

### Precision and Edge Cases
- ✅ Round-trip conversions (C→F→C, F→C→F, C→K→C, etc.)
- ✅ Decimal precision testing
- ✅ Extreme values (very large and small temperatures)
- ✅ Three-way conversion chains (C→K→F, F→K→C)

### Mathematical Accuracy
- ✅ Conversion formula correctness
- ✅ Floating-point precision (±0.001 tolerance)
- ✅ Symmetrical conversion validation

## Expected Output
```
[==========] Running 40 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 40 tests from FahrenheitTest
...
[  PASSED  ] 40 tests.
100% tests passed, 0 tests failed out of 1
```

## Key Conversion Formulas Tested

- **Celsius to Fahrenheit**: `F = C × 9/5 + 32`
- **Fahrenheit to Celsius**: `C = (F - 32) × 5/9`
- **Celsius to Kelvin**: `K = C + 273.15`
- **Kelvin to Celsius**: `C = K - 273.15`
- **Fahrenheit to Kelvin**: `K = (F - 32) × 5/9 + 273.15`
- **Kelvin to Fahrenheit**: `F = (K - 273.15) × 9/5 + 32`
