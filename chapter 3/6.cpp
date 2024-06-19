#include <iostream>

int main()
{
    using std::cout, std::cin, std::endl;
    double dis, cost, eu_dis, eu_cost;
    cout << "请输入驱车里程（英里）：";
    cin >> dis;
    cout << "请输入耗油量（加仑）：";
    cin >> cost;
    cout << "汽车耗油量为一加仑的里程为" << dis/cost << "英里" << endl;
    cout << "请输入驱车里程（公里）：";
    cin >> dis;
    cout << "请输入耗油量（升）：";
    cin >> cost;
    cout << "汽车每100公里耗油" << cost/dis*100 << "升" << endl;

    return 0;
}