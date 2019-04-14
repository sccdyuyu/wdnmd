#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    for(unsigned int i=0;i=-1;i++)
    {
        cout << "Enter 2 integers:" << endl;
        cin>>a>>b;
        if (b%a==0)
        cout<<"true"<<endl;
        else
        cout<<"false"<<endl;
    }
    return 0;
}
