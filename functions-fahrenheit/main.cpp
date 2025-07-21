
// functions-fahrenheit

#include <iostream>
#include "fahrenheit.h"

int main()
{
    double celsius = getTemperatureFromUser();
    double fahrenheit = convertCelsiusToFahrenheit(celsius);
    double kelvin = convertCelsiusToKelvin(celsius);

    std::cout << "Temperature conversions:" << std::endl;
    std::cout << "Celsius: " << celsius << "°C" << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << "°F" << std::endl;
    std::cout << "Kelvin: " << kelvin << "K" << std::endl;

    return 0;
}

