#include <iostream>
#include <string>

using namespace std;

class account {
    private:
        std::string name;
        double balance;
    
    public:
        account(std::string accountName, double startingBalance) : name(accountName), balance(startingBalance) {}

        void deposit(double amount) {
            balance += amount;
        }

        void withdraw(double amount) {
            if (balance > 0 && amount < balance) {
                balance -= amount;
            }
        }

        std::string get_name() {
            return name;
        }

        float get_balance() {
            return balance;
        }
};

int main() {
    std::string a_name;
    float starting_balance;

    cout << "Enter your account name: ";
    cin >> a_name;
    cout << "Enter your starting balance: £";
    cin >> starting_balance;

    account a1(a_name, starting_balance);

    cout << "Your account '" << a1.get_name() << "' balance is: £" << a1.get_balance() << "\n";

    int option;

    while (true) {
        cout << "Please choose one of the following options:\n";
        cout << "1. View balance\n";
        cout << "2. Deposit money\n";
        cout << "3. Withdraw money\n";
        cout << "4. Exit\n";

        cin >> option;

        switch(option) {
            case 1:
                cout << "Your balance for account " << a1.get_name() << " is £" << a1.get_balance() << "\n";
                break;
            case 2:
                float dep_amount;
                cout << "Enter the amount you want to deposit: £";
                cin >> dep_amount;
                a1.deposit(dep_amount);
                cout << "Your balance for account " << a1.get_name() << " is £" << a1.get_balance() << "\n";
                break;
            case 3:
                float wdraw_amount;
                cout << "Enter the amount to want to withdraw: £";
                cin >> wdraw_amount;
                a1.withdraw(wdraw_amount);
                cout << "Your balance for account " << a1.get_name() << " is £" << a1.get_balance() << "\n";
                break;
            case 4:
                cout << "Goodbye\n";
                break;
        }
        if (option == 4) {
            break;
        }
    }

    return 0;
}