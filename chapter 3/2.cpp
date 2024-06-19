#include <cmath>
#include <iostream>

int main()
{
    const int ft_in = 12;
    const double in_m = 0.0254;
    const double kg_pound = 2.2;
    int foot, inch;
    double height, weight, BMI;
    std::cout << "请输入身高的英尺数" << std::endl;
    std::cin >> foot;
    std::cout << "请输入身高的英寸数" << std::endl;
    std::cin >> inch;
    std::cout << "请输入体重（单位：磅）" << std::endl;
    std::cin >> weight;
    height = foot * ft_in + inch;
    height = height * in_m;
    weight = weight / kg_pound;
    BMI = weight / pow(height, 2);
    std::cout << "身高为" << height << "米，" << "体重为" << weight << "千克，" << "BMI为" << BMI << std::endl;

    return 0;
}