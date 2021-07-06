#pragma once
#include <iostream>
#include "CheckingAccount.h"
class BankCustomer
{
private:
	int m_customerNumber;

public:
	int GetCustomerNumber();

	void SetCustomerNumber(int number);

	BankCustomer(int customerNumber);

	void FindCheckingAccount(CheckingAccount account);
};

