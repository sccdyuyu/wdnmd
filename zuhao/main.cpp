#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int result1=0;
    int result2=0;
    int result3=0;

    cout<<"输入圆的半径:";
    cin>>x;
    result1=2*x;
    result2=3.14159*x*2;
    result3=3.14159*(x^2);
    cout<<"圆的直径为:"<<result1<<"\n圆的周长为:"<<result2<<"\n圆的面积为"<<result3<<endl;
    return 0;
}
