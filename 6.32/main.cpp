#include <iostream>

using namespace std;
int qualityPoints(int);
qualityPoints(int a)
{
    if (90<=a)
        return 4;
    else if (80<=a)
        return 3;
    else if (70<=a)
        return 2;
    else if (60<=a)
        return 1;
    return 0;
}

int main()
{
    int x=0;
    cout << "Enter the mark:";
    cin >>x;
    cout <<qualityPoints(x)<<endl;
    return 0;
}
