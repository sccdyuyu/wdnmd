#include <iostream>

using namespace std;

int main()
{
    double a=0;
    double b=1;
    double e=1;
    int counter=0;
    cout<<"Enter a number: ";
    cin>>a;
    while(counter<a)
    {
        counter++;
        b*=counter;
        e+=1/b;
    }
    cout<<"e="<<e<<endl;
    return 0;

}
