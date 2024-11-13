#include <iostream>
using namespace std;

void printMenu() {
    cout << "1: USD --> MYR" << endl;
    cout << "2: MYR --> USD" << endl;
    cout << "0: Exit" << endl;  // Option to exit
    cout << "==================" << endl;
}

int getUserOption() {
    int userOption; 
    cout << "Select option 0-2: ";
    cin >> userOption;
    cout << "Selected option: " << userOption << endl;
    return userOption;
}

void printUsdToMyr() {
    float usd;
    float myrRate = 4.35; // Example conversion rate

    cout << "Enter amount in USD: ";
    cin >> usd;

    float conversion = usd * myrRate;
    cout << "Converted amount in MYR: " << conversion << " MYR" << endl;
}

void printMyrToUsd() {
    float myr;
    float usdRate = 4.35; // Example conversion rate

    cout << "Enter amount in MYR: ";
    cin >> myr;

    float conversion = myr / usdRate;
    cout << "Converted amount in USD: " << conversion << " USD" << endl;
}

void processUserOption(int userOption) {
    if (userOption == 1) {
        printUsdToMyr();
    } else if (userOption == 2) {
        printMyrToUsd();
    } else if (userOption == 0) {
        cout << "Exiting the program." << endl;
        exit(0);  // Exit the program
    } else {
        cout << "Invalid option. Please select 0, 1, or 2." << endl;
    }
}

int main() {
    while (true) {
        printMenu();                        
        int userOption = getUserOption();   
        processUserOption(userOption);      
    }

    return 0;
}
