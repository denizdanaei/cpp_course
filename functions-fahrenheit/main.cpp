
// functions-fahrenheit

#include <iostream>

double convertCelsiusToFahrenheit(double celsius)
{
    return celsius * 1.8 + 32;
}

int getTemperatureFromUser()
{
    double Celsius = 12;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> Celsius;
    std::cout << "You Entered: " << Celsius << std::endl;
    return Celsius;
}


int main()
{
    double celsius = getTemperatureFromUser();
    double fahrenheit = convertCelsiusToFahrenheit(celsius);

    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}

