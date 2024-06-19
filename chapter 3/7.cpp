#include <iostream>

int main()
{
    using std::cout, std::cin, std::endl;
    double eu_cost, cost;
    cout << "请输入汽车每100公里耗油量:";
    cin >> eu_cost;
    cost = eu_cost / 12.4 * 19;
    cout << "汽车每加仑跑" << cost << "英里" << endl;

    return 0;
}