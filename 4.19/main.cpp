#include <iostream>

using namespace std;

int main()
{
    unsigned int counter=0;
    int number=0;
    int largest=0;
    int secondLargest=0;
    while(counter<10)
    {
        counter++;
        cout<<"input number "<<counter<<": ";
        cin>>number;
        if (largest<number)
        {secondLargest=largest;
            largest=number;
        }
    }
    cout<<"the largest is: "<<largest<<endl;
    cout<<"the secondLargest is; "<<secondLargest<<endl;
    return 0;
}
