#include <iostream>
#include"employee.h"
using namespace std;
int main()
{
    Employee Employee1("Zhao","Fuxi",100);
    Employee Employee2("Zhang","Zuhao",60000);
    cout<<"Employee's pay is:"<<endl;
    int monthlyPay1=Employee1.getMonthlyPay();
    cout<<Employee1.getFirstName()<<Employee1.getLastName()<<"\n"<<monthlyPay1*12<<endl;
    int monthlyPay2=Employee2.getMonthlyPay();
    cout<<Employee2.getFirstName()<<Employee2.getLastName()<<"\n"<<monthlyPay2*12<<endl;
    Employee1.setMonthlyPay(monthlyPay1*1.1);
    Employee2.setMonthlyPay(monthlyPay2*1.1);
    cout<<"employee's pay after 10%rise is:"<<endl;
    monthlyPay1=Employee1.getMonthlyPay();
    cout<<Employee1.getFirstName()<<Employee1.getLastName()<<"\n"<<monthlyPay1*12<<endl;
    monthlyPay2=Employee2.getMonthlyPay();
    cout<<Employee2.getFirstName()<<Employee2.getLastName()<<"\n"<<monthlyPay2*12<<endl;
}
