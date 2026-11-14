#include <iostream>
using namespace std;

class ATM
{
private:
    int balance = 10000;   // hidden data

public:
    void withdraw(int amount)
    {
        if(amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdraw successful\n";
        }
        else
        {
            cout << "Insufficient balance\n";
        }
    }

    void checkBalance()
    {
        cout << "Balance: " << balance;
    }
};

int main()
{
    ATM a;

    a.withdraw(2000);
    a.checkBalance();

    return 0;
} /// it hides the internal data and show only functionality.
// it uses for => data hiding, data protection, code security.
