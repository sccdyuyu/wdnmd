#include <iostream>

using namespace std;
int minimum(double,double);
int minimum(double x,double y)
{
    if(x<y)
        return x;
    else
        return y;
}
int main()
{
    double a;
    double b;
    double c;
    double d;
    d=minimum(minimum(a,b),c);
    cout<<"enter three integers:\n";
    cin>>a>>b>>c;
    cout<<"minimum is  "<<d;
    cout<<endl;
    return 0;
}
