#pragma once
class CheckingAccount
{
private:
	int m_accNumber;

public:
	CheckingAccount(int accNumber) : m_accNumber(accNumber)
	{}
	int GetAccNumber()
	{
		return m_accNumber;
	}

	void SetAccNumber(int number)
	{
		m_accNumber = number;
	}

};

