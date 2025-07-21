#include "fahrenheit.h"

#include <iostream>

double convertCelsiusToFahrenheit(double celsius) {
    return celsius * 1.8 + 32;
}

double convertFahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

double convertCelsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double convertKelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double convertFahrenheitToKelvin(double fahrenheit) {
    double celsius = convertFahrenheitToCelsius(fahrenheit);
    return convertCelsiusToKelvin(celsius);
}

double convertKelvinToFahrenheit(double kelvin) {
    double celsius = convertKelvinToCelsius(kelvin);
    return convertCelsiusToFahrenheit(celsius);
}

double getTemperatureFromUser() {
    double celsius = 0;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;
    std::cout << "You Entered: " << celsius << std::endl;
    return celsius;
}
