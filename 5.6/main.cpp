#include <iostream>

using namespace std;

int main()
{
    unsigned int counter=0;
    unsigned int sum=0;
    unsigned int average=0;
    for(unsigned int number=0;number !=9999;counter++)
    {
       cout<<"enter a number (if you want to stop,please enter 9999)"<<endl;
       cin>>number;
       sum+=number;
    }
    average=(sum-9999)/(counter-1);
    cout<<"average is: "<<average<<endl;
    return 0;
}
