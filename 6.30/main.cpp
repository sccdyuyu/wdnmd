#include<iostream>
using namespace std;
int nx(int,int);
nx(int n)
{
    int y=0;
    while(n>0)
    {
        y*=10;
        y+=n%10;
        n/=10;
    }
    return y;
}
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"the answer is:"<<endl;
    cout<<nx(a)<<endl;
    return 0;
