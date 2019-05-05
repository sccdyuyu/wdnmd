#include <iostream>

using namespace std;

int main()
{
    unsigned int size=5;
    unsigned int values[size]={2,4,6,8,10};
    unsigned int *vPtr;
    for(size_t i=0;i<size;++i)
        {
            cout<<values[i]<<' '<<endl;
        }
        vPtr = values;
        vPtr =&values[0];

    for(size_t i=0;i<size;++i)
        {

            cout<<*(vPtr+i)<<' '<<endl;
        }
    for(size_t i=0;i<size;++i)
        cout<<*(values+i)<<' '<<endl;
    cout<<values[4]<<' ';
    cout<<*(values+4)<<' ';
    cout<<vPtr[4]<<' ';
    cout<<*(vPtr+4)<<' ';
}
