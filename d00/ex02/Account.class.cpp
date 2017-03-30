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
	_totalAmount += initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_nbCheckAmount = 0;

	Account::_displayTimestamp();
	std::cout << "index:" << _nbAccounts++ << ";amount:" << initial_deposit << ";created" << std::endl;
	return;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	_nbAccounts--;
	std::cout << "index:" << _nbAccounts << ";amount:" << this->_amount << ";closed";
	if (_nbAccounts > 0) std::cout << std::endl;
	return;
}

void Account::makeDeposit(int deposit)
{
	if (deposit >= 0)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
		this->_amount += deposit;
		_totalAmount += deposit;
		this->_nbDeposits++;
		Account::_totalNbDeposits++;
		std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
	}
	return;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
	if (withdrawal <= this->_amount)
	{
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << "refused" << std::endl;
	return (false);
}

int Account::checkAmount(void) const
{
	this->_nbCheckAmount++;
	return (this->_amount);
}

void Account::displayStatus(void) const
{
	time_t	current_time = time(0);
	struct	tm*local_t = localtime(&current_time);
	char	time_dis[18];

	strftime(time_dis, 18, "[%Y%d%m_%H%M%S] ", local_t);
	std::cout << time_dis;
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
