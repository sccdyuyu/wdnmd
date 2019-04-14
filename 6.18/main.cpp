#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=1;
    int counter=0;
    cout<<"Enter a number: ";
    cin>>a;
    while(counter<a)
    {
        counter++;
        b*=counter;
    }
    cout<<a<<"!="<<b<<endl;
    return 0;
}
