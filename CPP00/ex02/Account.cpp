/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:46:08 by claclou           #+#    #+#             */
/*   Updated: 2022/01/28 09:58:33 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
# include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
				<< ";p_amount:" << this->_amount
				<< ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount
				<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
				<< ";p_amount:" << this->_amount;
	if (this->_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	std::cout << ";withdrawal:" << withdrawal
				<< ";amount:" << this->_amount
				<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;

	return (true);
}

int		Account::checkAmount( void ) const
{
	return (0);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex 
				<< ";amount:" << this->_amount << ";deposits:" 
				<< this->_nbDeposits << ";withdrawals:" 
				<< this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t timer;
	
	timer = time(NULL);
	tm *ltm = localtime(&timer);

	std::cout << std::setfill('0') 
				<< "[" << 1900 + ltm->tm_year << 1 + ltm->tm_mon 
				<< ltm->tm_mday << "_" << ltm->tm_hour << ltm->tm_min 
				<< ltm->tm_sec << "] ";
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts 
				<< ";total:" << _totalAmount 
				<< ";deposits:" << _totalNbDeposits 
				<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	this->_accountIndex = this->getNbAccounts();
    Account::_nbAccounts++;
	this->_amount += initial_deposit;
    Account::_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex 
				<< ";amount:" << this->_amount 
				<< ";created" << std::endl;
	return ;
}

Account::Account( void )
{
	Account::_displayTimestamp();
	this->_accountIndex = this->getNbAccounts();
    Account::_nbAccounts++;
	this->_amount += 0;
    Account::_totalAmount += this->_amount;
	std::cout << "index:" << this->_accountIndex 
				<< ";amount:" << this->_amount 
				<< ";created" << std::endl;
	return ;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	Account::_nbAccounts -= 1;
	std::cout << "index:" << this->_accountIndex 
				<< ";amount:" << this->_amount 
				<< ";closed" << std::endl; 
	return ;
}
