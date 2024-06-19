#include <iostream>
#include <cmath>

int main()
{
    const int convert = 60;
    double deg, min, sec, lat;
    std::cout << "Enter a latitude in degrees, minutes, and seconds:\n";
    std::cout << "First, enter the degrees:";
    std::cin >> deg;
    std::cout << "Next, enter the minutes of arc:";
    std::cin >> min;
    std::cout << "Finally, enter the seconds of arc:";
    std::cin >> sec;
    lat = deg + min / convert + sec / pow(convert, 2);
    std::cout << deg << " degrees, " << min << " minutes, " << sec << " seconds = " << lat << " degrees\n";
    
    return 0;

}