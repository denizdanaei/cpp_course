#include <gtest/gtest.h>
#include "fahrenheit.h"
#include <cmath>

class FahrenheitTest : public ::testing::Test {
protected:
    const double TOLERANCE = 0.001;
    
    void SetUp() override {
        // Setup code if needed
    }
    
    void TearDown() override {
        // Cleanup code if needed
    }
};

// Test Celsius to Fahrenheit conversion
TEST_F(FahrenheitTest, ConvertCelsiusToFahrenheit_FreezingPoint) {
    EXPECT_NEAR(convertCelsiusToFahrenheit(0.0), 32.0, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertCelsiusToFahrenheit_BoilingPoint) {
    EXPECT_NEAR(convertCelsiusToFahrenheit(100.0), 212.0, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertCelsiusToFahrenheit_NegativeTemperature) {
    EXPECT_NEAR(convertCelsiusToFahrenheit(-40.0), -40.0, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertCelsiusToFahrenheit_RoomTemperature) {
    EXPECT_NEAR(convertCelsiusToFahrenheit(20.0), 68.0, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertCelsiusToFahrenheit_BodyTemperature) {
    EXPECT_NEAR(convertCelsiusToFahrenheit(37.0), 98.6, TOLERANCE);
}

// Test Fahrenheit to Celsius conversion
TEST_F(FahrenheitTest, ConvertFahrenheitToCelsius_FreezingPoint) {
    EXPECT_NEAR(convertFahrenheitToCelsius(32.0), 0.0, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertFahrenheitToCelsius_BoilingPoint) {
    EXPECT_NEAR(convertFahrenheitToCelsius(212.0), 100.0, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertFahrenheitToCelsius_NegativeTemperature) {
    EXPECT_NEAR(convertFahrenheitToCelsius(-40.0), -40.0, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertFahrenheitToCelsius_RoomTemperature) {
    EXPECT_NEAR(convertFahrenheitToCelsius(68.0), 20.0, TOLERANCE);
}

// Test Celsius to Kelvin conversion
TEST_F(FahrenheitTest, ConvertCelsiusToKelvin_AbsoluteZero) {
    EXPECT_NEAR(convertCelsiusToKelvin(-273.15), 0.0, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertCelsiusToKelvin_FreezingPoint) {
    EXPECT_NEAR(convertCelsiusToKelvin(0.0), 273.15, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertCelsiusToKelvin_BoilingPoint) {
    EXPECT_NEAR(convertCelsiusToKelvin(100.0), 373.15, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertCelsiusToKelvin_RoomTemperature) {
    EXPECT_NEAR(convertCelsiusToKelvin(20.0), 293.15, TOLERANCE);
}

// Test Kelvin to Celsius conversion
TEST_F(FahrenheitTest, ConvertKelvinToCelsius_AbsoluteZero) {
    EXPECT_NEAR(convertKelvinToCelsius(0.0), -273.15, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertKelvinToCelsius_FreezingPoint) {
    EXPECT_NEAR(convertKelvinToCelsius(273.15), 0.0, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertKelvinToCelsius_BoilingPoint) {
    EXPECT_NEAR(convertKelvinToCelsius(373.15), 100.0, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertKelvinToCelsius_RoomTemperature) {
    EXPECT_NEAR(convertKelvinToCelsius(293.15), 20.0, TOLERANCE);
}

// Test Fahrenheit to Kelvin conversion
TEST_F(FahrenheitTest, ConvertFahrenheitToKelvin_FreezingPoint) {
    EXPECT_NEAR(convertFahrenheitToKelvin(32.0), 273.15, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertFahrenheitToKelvin_BoilingPoint) {
    EXPECT_NEAR(convertFahrenheitToKelvin(212.0), 373.15, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertFahrenheitToKelvin_AbsoluteZero) {
    EXPECT_NEAR(convertFahrenheitToKelvin(-459.67), 0.0, TOLERANCE);
}

// Test Kelvin to Fahrenheit conversion
TEST_F(FahrenheitTest, ConvertKelvinToFahrenheit_AbsoluteZero) {
    EXPECT_NEAR(convertKelvinToFahrenheit(0.0), -459.67, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertKelvinToFahrenheit_FreezingPoint) {
    EXPECT_NEAR(convertKelvinToFahrenheit(273.15), 32.0, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertKelvinToFahrenheit_BoilingPoint) {
    EXPECT_NEAR(convertKelvinToFahrenheit(373.15), 212.0, TOLERANCE);
}

// Test round-trip conversions
TEST_F(FahrenheitTest, RoundTrip_CelsiusToFahrenheitAndBack) {
    double original = 25.5;
    double fahrenheit = convertCelsiusToFahrenheit(original);
    double backToCelsius = convertFahrenheitToCelsius(fahrenheit);
    EXPECT_NEAR(original, backToCelsius, TOLERANCE);
}

TEST_F(FahrenheitTest, RoundTrip_FahrenheitToCelsiusAndBack) {
    double original = 77.5;
    double celsius = convertFahrenheitToCelsius(original);
    double backToFahrenheit = convertCelsiusToFahrenheit(celsius);
    EXPECT_NEAR(original, backToFahrenheit, TOLERANCE);
}

TEST_F(FahrenheitTest, RoundTrip_CelsiusToKelvinAndBack) {
    double original = 25.5;
    double kelvin = convertCelsiusToKelvin(original);
    double backToCelsius = convertKelvinToCelsius(kelvin);
    EXPECT_NEAR(original, backToCelsius, TOLERANCE);
}

TEST_F(FahrenheitTest, RoundTrip_KelvinToCelsiusAndBack) {
    double original = 300.0;
    double celsius = convertKelvinToCelsius(original);
    double backToKelvin = convertCelsiusToKelvin(celsius);
    EXPECT_NEAR(original, backToKelvin, TOLERANCE);
}

TEST_F(FahrenheitTest, RoundTrip_FahrenheitToKelvinAndBack) {
    double original = 98.6;
    double kelvin = convertFahrenheitToKelvin(original);
    double backToFahrenheit = convertKelvinToFahrenheit(kelvin);
    EXPECT_NEAR(original, backToFahrenheit, TOLERANCE);
}

TEST_F(FahrenheitTest, RoundTrip_KelvinToFahrenheitAndBack) {
    double original = 310.15;
    double fahrenheit = convertKelvinToFahrenheit(original);
    double backToKelvin = convertFahrenheitToKelvin(fahrenheit);
    EXPECT_NEAR(original, backToKelvin, TOLERANCE);
}

// Edge case tests
TEST_F(FahrenheitTest, ConvertCelsiusToFahrenheit_Zero) {
    EXPECT_NEAR(convertCelsiusToFahrenheit(0.0), 32.0, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertCelsiusToFahrenheit_VeryLarge) {
    EXPECT_NEAR(convertCelsiusToFahrenheit(1000.0), 1832.0, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertCelsiusToFahrenheit_VerySmall) {
    EXPECT_NEAR(convertCelsiusToFahrenheit(-273.15), -459.67, TOLERANCE);
}

// Test decimal precision
TEST_F(FahrenheitTest, ConvertCelsiusToFahrenheit_DecimalPrecision) {
    EXPECT_NEAR(convertCelsiusToFahrenheit(36.6), 97.88, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertFahrenheitToCelsius_DecimalPrecision) {
    EXPECT_NEAR(convertFahrenheitToCelsius(98.6), 37.0, TOLERANCE);
}

// Test Kelvin edge cases
TEST_F(FahrenheitTest, ConvertCelsiusToKelvin_VeryLarge) {
    EXPECT_NEAR(convertCelsiusToKelvin(1000.0), 1273.15, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertKelvinToCelsius_VeryLarge) {
    EXPECT_NEAR(convertKelvinToCelsius(1000.0), 726.85, TOLERANCE);
}

TEST_F(FahrenheitTest, ConvertFahrenheitToKelvin_DecimalPrecision) {
    EXPECT_NEAR(convertFahrenheitToKelvin(98.6), 310.15, 0.01);
}

TEST_F(FahrenheitTest, ConvertKelvinToFahrenheit_DecimalPrecision) {
    EXPECT_NEAR(convertKelvinToFahrenheit(310.15), 98.6, 0.01);
}

// Test three-way conversions (C→K→F)
TEST_F(FahrenheitTest, ThreeWayConversion_CelsiusToKelvinToFahrenheit) {
    double celsius = 37.0;
    double kelvin = convertCelsiusToKelvin(celsius);
    double fahrenheit = convertKelvinToFahrenheit(kelvin);
    double expectedFahrenheit = convertCelsiusToFahrenheit(celsius);
    EXPECT_NEAR(fahrenheit, expectedFahrenheit, TOLERANCE);
}

TEST_F(FahrenheitTest, ThreeWayConversion_FahrenheitToKelvinToCelsius) {
    double fahrenheit = 98.6;
    double kelvin = convertFahrenheitToKelvin(fahrenheit);
    double celsius = convertKelvinToCelsius(kelvin);
    double expectedCelsius = convertFahrenheitToCelsius(fahrenheit);
    EXPECT_NEAR(celsius, expectedCelsius, TOLERANCE);
}
