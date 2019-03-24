#include<iostream>
#include"Account.h"
using namespace std;
Account::Account(int a)
{
    yue=a;
}
void Account::credit(int a)
{
    if (a>=0)
      yue+=a;
    else
      cout<<"error!"<<endl;
}
void Account::debit(int a)
{
    if (yue>=a)
      yue-=a;
   else
      cout<<"Debit amount exceeded account balance"<<endl;
}
void Account::getBalance(int a)
{
    cout<<"your account:"<<yue<<endl;
}
