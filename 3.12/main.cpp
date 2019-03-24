#include <iostream>
#include"Account.h"

using namespace std;
int main()
{
    double a,b,c,e,f,g;
    cout<<"第一个账户的初始额为:\n";
    cin>>a;
    cout<<"您想要存入的金额为\n";
    cin>>b;
    cout<<"您想要取出的金额为\n";
    cin>>c;
    Account a1(a);
    a1.credit(b);
    a1.debit(c);
    a1.getBalance(e);
    cout<<"第二个账户的初始额为:\n";
    cin>>e;
    cout<<"您想要存入的金额为:\n";
    cin>>f;
    cout<<"您想要取出的金额为:\n";
    cin>>g;
    Account a2(e);
    a2.credit(f);
    a2.debit(g);
    a2.getBalance(e);
}
