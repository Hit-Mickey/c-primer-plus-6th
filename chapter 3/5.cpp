#include <iostream>

int main()
{
    using std::cout, std::cin, std::endl;
    long long world, US;
    double proportion;
    cout << "Enter the world's population:";
    cin >> world;
    cout << "Enter the population of the US:";
    cin >> US;
    proportion = double(US) / world * 100;
    cout << "The population of the US is " << proportion << "%" << " of the world population." << endl;

    return 0;
}