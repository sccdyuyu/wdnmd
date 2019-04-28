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
2019/4/21 21:44:11
我的电脑 2019/4/21 21:44:11
}
18:19:24
我的手机 2019/4/28 18:19:24
#include<iostream>
#include<iomanip>
#include<array>
using namespace std;
int main()
{
    int total=0;
    const array<char ,6>alphabet={'a','b','c','d','e','f'};
    cout<<alphabet[5]<<endl;
    array <double,4>grades;
    for(size_t i=0;i<grades.size();++i)
        {grades[i]=0;}
    grades[3]=4;
    array <int,5>values;
    for(size_t i=0;i<values.size();++i)
    values[i]=8;
    array<double,100>temperatures;
    for(size_t i=0;i<temperatures.size();++i)
        {
            temperatures[i]=23;
            total+=temperatures[i];
        }
    cout<<"total is:"<<total<<endl;
    array<double,11>a={1,2,3,4,5,6,7,8,9,10,11};
    array<double,34>b;
    for(size_t i=0;i<b.size();++i)
        {b[i]=0;}
    for(size_t i=0;i<a.size();++i)
        {b[i]=a[i];}
    cout<<"number"<<setw(5)<<"b"<<setw(5)<<endl;
    for(size_t number=0;number<b.size();++number)
        {cout<<setw(5)<<number<<setw(5)<<b[number];}
    return 0;

}
