#pragma once
#include <iostream>
#include "CheckingAccount.h"
class BankCustomer
{
private:
	int m_customerNumber;

public:
	int GetCustomerNumber()
	{
		return m_customerNumber;
	}

	void SetCustomerNumber(int number)
	{
		m_customerNumber = number;
	}

	BankCustomer(int customerNumber): m_customerNumber(customerNumber)
	{}

	void FindCheckingAccount(CheckingAccount account)
	{
		std::cout << "The account number of the customer with customer number " << m_customerNumber << " is: " << account.GetAccNumber() << " \n";
	}
};

