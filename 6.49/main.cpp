#include <iostream>
#include <cmath>
using namespace std;
inline double circleArea(const double x)
{
    return 3.14159*x*x;
}
int main()
{
    double a=0;
    cout<<"输入圆的半径：";
    cin>>a;
    cout<<"面积为"<<circleArea(a)<<endl;
    return 0;
}
