#include<iostream>
#include "Account.class.hpp"

// TODO Decomposer le hpp
// TODO Coder les methodes et tout et tout

int Account::getNbAccounts(void)
{
	return(_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return(_totalAmount);
}

int Account::getNbDeposits(void)
{
	return(_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return(_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	std::cout << "Index: " << _nbAccounts << std::endl;
	std::cout << "Total amount: " << _totalAmount << std::endl;
	std::cout << "Total number of deposits: " << _totalNbDeposits << std::endl;
	std::cout << "Total number of withdrawals: " << _totalNbWithdrawals << std::endl;
	return;
}

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_nbCheckAmount = 0;
	return;
}

Account::~Account(void)
{
	return;
}

void Account::makeDeposit(int deposit)
{
	if (deposit > 0)
	{
		this->_amount += deposit;
		_totalAmount += deposit;
		this->_nbDeposits++;
		Account::_totalNbDeposits++;
	}
	return;
}

bool Account::makeWithdrawal(int withdrawal)
{

}

int Account::checkAmount(void) const
{

}

void Account::displayStatus(void) const
{
	return;
}

int _nbAccounts			= 0;
int _totalNbDeposits	= 0;
int _totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{

}

Account::Account(void)
{
	return;
}
