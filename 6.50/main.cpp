#include <iostream>

using namespace std;
double tripleByValue(int);
double tripleByReference(int&);
double tripleByValue(int value)
{
    return value*3;
}

double tripleByReference(int&valueRef)
{
    valueRef*=valueRef;
}
int main()
{
    int a=3;
    int b=6;
    cout <<"a="<<a<<" before tripleByValue\n";
    cout <<"value returned by tripleByValue:"<<tripleByValue(a)<<endl;
    cout <<"a="<<a<<" after tripleByValue\n"<<endl;
    cout <<"b="<<b<<" before tripleByReference\n";
    tripleByReference(b);
    cout <<"b="<<b<<" after tripleByReference\n"<<endl;
}
