#include <iostream>
using namespace std;



class ATM {
    private:
        double balance;

    public:
        // Constructor with default initial balance
        ATM(double initial_balance = 0.0) : balance(initial_balance) {}

        // Method to check balance
        void checkBalance() const {
            cout << "Current Balance: RM" << balance << endl;
        }

        // Method to deposit money
        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "RM" << amount << " successfully deposited..." << endl;
            } else {
                cout << "Invalid amount!" << endl;
            }
        }

        // Method to withdraw money
        void withdraw(double amount) {
            if (amount > balance) {
                cout << "Insufficient balance..." << endl;
            } else if (amount <= 0) {
                cout << "Amount not valid!" << endl;
            } else {
                balance -= amount;
                cout << "RM" << amount << " successfully withdrawn." << endl;
            }
        }
};

int main() {
    ATM atm(20.0); // Initialize ATM with a balance of RM10
    int choice;
    double amount;

    cout << "Welcome to ABC ATM" << endl;

    do {
        cout << "\nChoose an option:" << endl;
        cout << "1. Check balance" << endl;
        cout << "2. Deposit money" << endl;
        cout << "3. Withdraw money" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        system("cls");

        // Handle menu choice
        switch (choice) {
            case 1:
                atm.checkBalance();
                break;
            case 2:
                cout << "Enter amount to be deposited: RM";
                cin >> amount;
                atm.deposit(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: RM";
                cin >> amount;
                atm.withdraw(amount);
                break;
            case 4:
                cout << "Thank you for using ABC ATM." << endl;
                break;
            default:
                cout << "Wrong input. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
