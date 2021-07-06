#include "CheckingAccount.h"


CheckingAccount::CheckingAccount(int accNumber) : m_accNumber(accNumber)
{}

int CheckingAccount::GetAccNumber()
{
	return m_accNumber;
}

void CheckingAccount::SetAccNumber(int number)
{
	m_accNumber = number;
}