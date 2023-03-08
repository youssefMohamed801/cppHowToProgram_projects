#pragma once
#include <string>

class Account
{
public:
	// constructor
	Account(std::string accountName, int initialBalance)
		:name{ accountName } {
		if (initialBalance > 0) {
			balance = initialBalance;
		}
	}

	// member function deposit
	void deposit(int depositAmount) {
		if (depositAmount > 0) {
			balance = balance + depositAmount;
		}
	}

	// member function withdraw
	void withdraw(int withdrawAmount) {
		if (withdrawAmount < 0) {
			balance = balance + withdrawAmount;
		}
	}

	// member function getBalance
	int getBalance() {
		return balance;
	}

	// member function getName
	std::string getName() {
		return name;
	}
	
private:
	// data member name
	std::string name;
	// data member balance
	int balance{ 0 };
};

