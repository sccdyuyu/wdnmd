#include <iostream>

using namespace std;

int main()
{
    unsigned int number=0;
    unsigned int smallest;
    unsigned int a=0;
    cout<<"Enter a number: ";
    cin>>number;
    for( unsigned int counter=0;counter<number;++counter)
    {
    unsigned int counter1=0;
    counter1=counter+1;
        cout<<"Enter number"<<counter1<<": ";
        cin>>a;
       if(a<smallest)
        smallest=a;
    }
    cout<<"smallest is: "<<smallest<<endl;
    return 0;
}
