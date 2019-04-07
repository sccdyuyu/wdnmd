#include <iostream>

using namespace std;

int main()
{
    double a=0;
    double b=1;
    for(unsigned int i=0;i<1000;++i)
    {

        if(i%2!=0)
            a-=4/b;
        else
            a+=4/b;
        cout<<i<<"¼¶"<<"\t"<<a<<endl;
        b+=2;
    }

    return 0;

}
