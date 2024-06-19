#include <iostream>

int main()
{
    long sec, tmp;
    int day, hour, min;
    std::cout << "Enter the number of seconds:";
    std::cin >> sec;
    tmp = sec;
    day = sec / (24 * 60 * 60);
    sec = sec % (24 * 60 * 60);
    hour = sec / 3600;
    sec = sec % 3600;
    min = sec / 60;
    sec = sec % 60;
    std::cout << tmp << " seconds = " << day << " days, " << hour << " hours, " << min << "minutes, " << sec << " seconds\n";

    return 0;
}