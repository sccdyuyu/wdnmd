
#include <iostream>

using namespace std;

int main()
{
    double a=0;
    double b=0;
    double c=0;
    cin>>a>>b>>c;
    if ((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
    cout<<"可以组成直角三角形"<<endl;
    else
        cout<<"不可以组成直角三角形"<<endl;
    return 0;
}
