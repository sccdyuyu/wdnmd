#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int result1=0;
    int result2=0;
    int result3=0;

    cout<<"����Բ�İ뾶:";
    cin>>x;
    result1=2*x;
    result2=3.14159*x*2;
    result3=3.14159*(x^2);
    cout<<"Բ��ֱ��Ϊ:"<<result1<<"\nԲ���ܳ�Ϊ:"<<result2<<"\nԲ�����Ϊ"<<result3<<endl;
    return 0;
}
