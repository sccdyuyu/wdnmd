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
    cout<<"����Բ�İ뾶��";
    cin>>a;
    cout<<"���Ϊ"<<circleArea(a)<<endl;
    return 0;
}
