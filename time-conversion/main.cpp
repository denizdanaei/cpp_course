
// time conversion

#include <iomanip>
#include <iostream>

void represent_time_hours_minutes_seconds(long double time) {
    // int hours = 0, minutes = 0, seconds = 0;
    const int hours = time / 3600;
    const int minutes = (time - hours * 3600) / 60;
    const int seconds = time - hours * 3600 - minutes * 60;

    std::cout << hours << "hours " << minutes << " minutes " << seconds << " seconds " << std::endl;

    const int day = 24 * 60 * 60;
    std::cout << std::fixed << std::setprecision(5);
    std::cout << (time / day) * 100 << "% of one day" << std::endl;
}

int gettimeFromUser() {
    double time = 0;
    std::cout << "Enter the number of seconds: ";
    std::cin >> time;
    // std::cout << "You Entered: " << Celsius << std::endl;
    return time;
}

int main() {
    double time = gettimeFromUser();
    represent_time_hours_minutes_seconds(time);

    return 0;
}
