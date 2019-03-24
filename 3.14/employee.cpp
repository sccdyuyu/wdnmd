#include <iostream>
#include"employee.h"
using namespace std;
Employee::Employee (string fn,string ln,int mp)
{
    setFirstName(fn);
    setLastName(ln);
    setMonthlyPay(mp);
}
void Employee::setFirstName(string fn)
{
    firstName=fn;
}
string Employee::getFirstName() const
{
    return firstName;
}
void Employee::setLastName(string ln)
{
    lastName=ln;
}
string Employee::getLastName() const
{
    return lastName;
}

void Employee::setMonthlyPay(int mp)
{
    if(monthlyPay<0)
        monthlyPay=0;
    else
        monthlyPay=mp;
}
int Employee::getMonthlyPay() const
{
    return monthlyPay;
}

