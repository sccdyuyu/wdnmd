#include <string>
using std::string;
class Account
{
public:
    Account(int);
    void credit(int);
    void debit(int);
    void getBalance(int);
private:
    int yue;
    int a;
};
