/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 15:12:50 by user42            #+#    #+#             */
/*   Updated: 2021/07/30 20:35:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial): 
		_accountIndex (Account::_nbAccounts++),
		_amount (initial),
		_nbDeposits (0),
		_nbWithdrawals (0)
{
	Account::_totalAmount += initial;
	
	Account ::_displayTimestamp();
	std::cout \
		<< "index:" \
		<< _accountIndex \
		<< ";amount:" \
		<< _amount \
		<< ";created" \
		<< std::endl;
}

Account::~Account()
{
	Account::_totalAmount -= _amount;
	Account::_nbAccounts--;

	Account::_displayTimestamp();
	std::cout \
		<< "index:" \
		<< _accountIndex \
		<< ";amount:" \
		<< _amount \
		<< ";closed"
		<< std::endl;
}

int	Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts \
	<< ";total:" << Account::_totalAmount \
	<< ";deposits:" << Account::_totalNbDeposits \
	<< ";withdrawals:" << Account::_totalNbWithdrawals \
	<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout \
	<< "index:" << _accountIndex \
	<< ";p_amount:" << _amount;

	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;

	std::cout \
	<< ";deposit:" << deposit \
	<< ";amount:" << _amount \
	<< ";nb_deposits:" << _nbDeposits \
	<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout \
	<< "index:" << _accountIndex \
	<< ";p_amount:" << _amount;

	if (withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	std::cout \
	<< ";withdrawal:" << withdrawal \
	<< ";amount:" << _amount \
	<< ";nb_withdrawals:" << _nbWithdrawals \
	<< std::endl;

	return true;
}

int	Account::checkAmount(void) const
{
	return _amount;	
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout \
	<< "index:" << _accountIndex \
	<< ";amount:" << _amount \
	<< ";deposits:" << _nbDeposits \
	<< ";withdrawals:" << _nbWithdrawals \
	<< std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t	now = time(0);
	tm	*ltm = localtime(&now);

	std::cout << "[" \
	<< ltm->tm_year + 1900 \
	<< ltm->tm_mon + 1 \
	<< ltm->tm_mday \
	<< "_" \
	<< ltm->tm_hour \
	<< ltm->tm_min \
	<< ltm->tm_sec \
	<< "] ";
}
