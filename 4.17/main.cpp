#include <iostream>

using namespace std;

int main()
{
    unsigned int counter=0;
    int number=0;
    int largest=0;
    while(counter<10)
    {
        counter++;
        cout<<"write the number of seller "<<counter<<": ";
        cin>>number;
        if (number>largest)
            largest=number;
    }
    cout<<"the largest is:"<<largest<<endl;
    return 0;

}
