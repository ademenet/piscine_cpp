#include<iostream>
#include "Account.class.hpp"

// Those getters return the static values, which are totals of accounts, amount,
// and so on.
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

// This function is called regurlarly just before deposits and withdrawals
// operations.
void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits << ";withdrawals:";
	std::cout << _totalNbWithdrawals << std::endl;
	return;
}

// Opening a new account.
Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_nbCheckAmount = 0;

	Account::_displayTimestamp();
	std::cout << "index:" << _nbAccounts++ << ";amount:" << initial_deposit;
	std::cout << ";created" << std::endl;
	return;
}

// Closing an account.
Account::~Account(void)
{
	Account::_displayTimestamp();
	_nbAccounts--;
	std::cout << "index:" << _nbAccounts << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
	return;
}

// Deposit operation.
void Account::makeDeposit(int deposit)
{
	if (deposit >= 0)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:";
		std::cout << this->_amount << ";deposit:" << deposit;
		this->_amount += deposit;
		_totalAmount += deposit;
		this->_nbDeposits++;
		_totalNbDeposits++;
		std::cout << ";amount:" << this->_amount << ";nb_deposits:";
		std::cout << this->_nbDeposits << std::endl;
	}
	return;
}

// Withdrawal operation.
bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:";
	std::cout << this->_amount << ";withdrawal:";
	if (withdrawal <= this->_amount)
	{
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:";
		std::cout << this->_nbWithdrawals << std::endl;
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
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:";
	std::cout << this->_nbWithdrawals << std::endl;
}

// Initialize the static attributes, it means that they are class members.
int Account::_nbAccounts			= 0;
int Account::_totalNbDeposits		= 0;
int Account::_totalNbWithdrawals	= 0;
int Account::_totalAmount			= 0;

void Account::_displayTimestamp(void)
{
	time_t	current_time = time(0);
	struct	tm*local_t = localtime(&current_time);
	char	time_dis[32];

	strftime(time_dis, 32, "[%Y%d%m_%H%M%S] ", local_t);
	std::cout << time_dis;
	return;
}

Account::Account(void)
{
	return;
}
