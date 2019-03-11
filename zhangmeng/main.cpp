#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    int result1=0;
    int result2=0;
    int result3=0;
    int result4=0;
    cout<<"输入第一个数：";
    cin>>x;
    cout<<"输入第二个数：";
    cin>>y;
    result1=x+y;
    result2=x-y;
    result3=x*y;
    result4=x/y;
    cout<<"两个数的和为:"<<result1<<" 两个数的差为:"<<result2<<" 两个数的积为:"<<result3<<" 两个数的商为:"<<result4<<endl;
    return 0
}
