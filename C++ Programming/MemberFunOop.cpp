
#include <iostream>
using namespace std;
//MEMBER FUN
class BankAccount {
private:
    int ac_no;
    double balance;

public:
    BankAccount(int ac, double bal) {
        ac_no = ac;
        balance = bal;
    }

    void get_Account_Details() {
        cout << "Enter Account Number: ";
        cin >> ac_no;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void display_Account_Details() {
        cout << "Account Number: " << ac_no << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(0, 0.0);
    acc.get_Account_Details();
    acc.display_Account_Details();
    return 0;
}

Enter Account Number: 222
Enter Balance: 11112455
Account Number: 222
Balance: 1.11125e+07