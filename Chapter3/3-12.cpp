#include <iostream>
using namespace std;

class Account {

    private:

        int accountBalance;
    
    public:

        Account (int balance){
            setAccountBalance(balance);
        }

        void setAccountBalance(int balance){
            if (balance >= 0){
                accountBalance = balance;
            }else {
                accountBalance = 0;
                cout << "Invalid Initial Balance\n";
            }
        }

        int getAccountBalance(){
            return accountBalance ;
        }

        void credit (int creditNumber){
            accountBalance = accountBalance + creditNumber;
        }

        void debit (int debitNumber){
            if (accountBalance >= debitNumber){
                accountBalance = accountBalance - debitNumber;
            }else {
                cout << "Debit amount exceeded account balance.\n";
            }
        }
};
int main() {

    Account account1(500);
    Account account2(1000);
    account1.credit(300);
    account1.debit(400);
    account1.setAccountBalance(-100);
    cout << account1.getAccountBalance();

}