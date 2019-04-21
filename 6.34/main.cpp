#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int flip();
int main()
{
    int head=0;
    int tail=0;
    srand(static_cast<unsigned int>(time(0)));
    for(unsigned int i=0;i<+100;i++)
        {        if (flip()==0)
           {            ++tail;
                     cout<<"tail ";
           }        else
           {            ++head;
           cout<<"head ";
           }
           if(i%10==0)
            cout<<endl;
           }
    cout<<"\n the total number of head:"<<head<<endl;
    cout<<"\n the total number of tail:"<<tail<<endl;
}
int flip()
{
    return rand()%2;
}
