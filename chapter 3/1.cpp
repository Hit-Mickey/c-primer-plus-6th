#include <iostream>

int main()
{
    const int convert = 12;
    int height, foot, inch;
    std::cout << "Please input your height(单位：英寸):___\b\b\b";
    std::cin >> height;
    foot = height / convert;
    inch = height % convert;
    std::cout << "身高为" << foot << "英尺" << inch << "英寸" << std::endl;

    return 0;
}