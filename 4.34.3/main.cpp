#include <iostream>

using namespace std;

int main()
{
    double a=0;
    double x=0;
    double y=1;
    double b=1;
    double e=1;
    int counter=0;
    cout<<"Enter number a: ";
    cin>>a;
    cout<<"Enter number x: ";
    cin>>x;
    while(counter<a)
    {
        counter++;
        x=y*x;
        y=x;
        b*=counter;
        e+=y/b;
    }
    cout<<"e="<<e<<endl;
    return 0;

}
