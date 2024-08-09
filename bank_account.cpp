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
            
        }

        void withdraw(double amount) {

        }

        float get_balance() {

        }
};

int main() {
    cout << "Output";

    return 0;
}