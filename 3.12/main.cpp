#include <iostream>
#include"Account.h"

using namespace std;
int main()
{
    double a,b,c,e,f,g;
    cout<<"��һ���˻��ĳ�ʼ��Ϊ:\n";
    cin>>a;
    cout<<"����Ҫ����Ľ��Ϊ\n";
    cin>>b;
    cout<<"����Ҫȡ���Ľ��Ϊ\n";
    cin>>c;
    Account a1(a);
    a1.credit(b);
    a1.debit(c);
    a1.getBalance(e);
    cout<<"�ڶ����˻��ĳ�ʼ��Ϊ:\n";
    cin>>e;
    cout<<"����Ҫ����Ľ��Ϊ:\n";
    cin>>f;
    cout<<"����Ҫȡ���Ľ��Ϊ:\n";
    cin>>g;
    Account a2(e);
    a2.credit(f);
    a2.debit(g);
    a2.getBalance(e);
}
