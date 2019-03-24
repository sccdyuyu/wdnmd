#include<string>
class Employee
{
public:
    Employee(std::string,std::string,int);
    void setFirstName(std::string);
    void setLastName(std::string);
    void setMonthlyPay(int);
    std::string getFirstName()const;
    std::string getLastName()const;
    int getMonthlyPay()const;
private:
    std::string firstName;
    std::string lastName;
    int monthlyPay;
};
