
#include <iostream>

using namespace std;

int main()
{
    double a=0;
    double b=0;
    double c=0;
    cin>>a>>b>>c;
    if ((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
    cout<<"�������ֱ��������"<<endl;
    else
        cout<<"���������ֱ��������"<<endl;
    return 0;
}
