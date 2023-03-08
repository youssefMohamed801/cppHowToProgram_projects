// create "Account" class 
// instantiae 2 bank accounts from that class
// the bank account object has data members "name", "balance"
// you can deposit and withdraw an arbitrary amount to the bank account
// when you deposit or withdraw the program shows the 2 accounts info again
// and prompt you to modify the second bank account
// then show info again

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

// main function begins program execution
int main() {
	// prompting phase
	// get first account info
	string firstAccountName;
	int firstAccountInitialBalance;
	cout << "Enter first account name: ";
	getline(cin, firstAccountName);

	string secondAccountName;
	int secondAccountInitialBalance;
	cout << "Enter fist account initial balance: ";
	cin >> firstAccountInitialBalance;

	// get second account info
	cout << "\nEnter second account name: ";
	cin.ignore();
	getline(cin, secondAccountName);

	cout << "\nEnter second account initial balance: ";
	cin >> secondAccountInitialBalance;

	// processing phase
	// instantiaing account1, account2
	Account account1{ firstAccountName, firstAccountInitialBalance };
	Account account2{ secondAccountName, secondAccountInitialBalance };

	cout << "\nYou want to 1. deposit or 2. withdraw? (choose between 1 and 2): ";
	int userChoise;
	cin >> userChoise;

	if (userChoise == 1) {
		int bankAccountchoise;
		cout << "Which bank account to deposit in? (1 or 2)? ";
		cin >> bankAccountchoise;
		if (bankAccountchoise == 1) {
			cout << "\nProcessing a deposit process in account1!\n";
			cout << "\nEnter the amount you want to deposit: ";
			int depositAmount;
			cin >> depositAmount;
			account1.deposit(depositAmount);

			// show account1 info
			cout << "\nAccount Name: " << account1.getName();
			cout << "\nAccount Balance: USD " << account1.getBalance();
		}
		else if (bankAccountchoise == 2) {
			cout << "\nProcessing a deposit process in account2!\n";
			cout << "\nEnter the amount you want to deposit: ";
			int depositAmount;
			cin >> depositAmount;
			account2.deposit(depositAmount);

			// show account2 info
			cout << "\nAccount Name: " << account2.getName();
			cout << "\nAccount Balance: USD " << account2.getBalance();
		}
	}
	else if (userChoise == 2) {
		int bankAccountchoise;
		cout << "Which bank account to withdraw in? (1 or 2)? ";
		cin >> bankAccountchoise;
		if (bankAccountchoise == 1) {
			cout << "\nProcessing a withdraw process in account1!\n";
			cout << "\nEnter the amount you want to withdraw: ";
			int withdrawAmount;
			cin >> withdrawAmount;
			withdrawAmount = withdrawAmount * -1;
			account1.withdraw(withdrawAmount);

			// show account1 info
			cout << "Account Name: " << account1.getName();
			cout << "\nAccount Balance: USD " << account1.getBalance();
		}
		else if (bankAccountchoise == 2) {
			cout << "\nProcessing a withdraw process in account2!\n";
			cout << "\nEnter the amount you want to withdraw: ";
			int withdrawAmount;
			cin >> withdrawAmount;
			withdrawAmount = withdrawAmount * -1;
			account2.withdraw(withdrawAmount);

			// show account2 info
			cout << "\nAccount Name: " << account2.getName();
			cout << "\nAccount Balance: USD " << account2.getBalance();
		}
	}
	else {
		cout << "\nYou have entered non-valid value!";
		return 1;
	}

} // end main function

