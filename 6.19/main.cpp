#include <iostream>

using namespace std;

int main()
{
    unsigned int base=0;
    unsigned int exponent=0;
    unsigned int answer=1;
    cout<<"write base:";
    cin>>base;
    cout<<"write exponent:";
    cin>>exponent;
    for(unsigned int i=0;i<exponent;i++)
    {
        answer*=base;
    }
    cout<<"base^exponent is: "<<answer<<endl;
    return 0;

}
