#include "BankCustomer.h"


int BankCustomer::GetCustomerNumber()
{
	return m_customerNumber;
}

void BankCustomer::SetCustomerNumber(int number)
{
	m_customerNumber = number;
}

BankCustomer::BankCustomer(int customerNumber) : m_customerNumber(customerNumber)
{}

void BankCustomer::FindCheckingAccount(CheckingAccount account)
{
	std::cout << "The account number of the customer with customer number " << m_customerNumber << " is: " << account.GetAccNumber() << " \n";
}