// ===========================================================================
// BankAccount.cpp
// ===========================================================================

#include "Exercise_BankAccount.h"

// c'tor
BankAccount::BankAccount(int account)
{
    m_number = account;
    m_balance = 0.0;
}

// getter / setter
double BankAccount::getAccountNumber() 
{
    return m_number;
}

double BankAccount::getBalance() 
{
    return m_balance;
}

// public interface
void BankAccount::deposit(double amount) 
{
    m_balance += amount;
}

void BankAccount::withdraw(double amount)
{
    if (m_balance < amount)
        return;

    m_balance -= amount;
}

void BankAccount::setInterestRate(double rate)
{
    m_interestRate = rate;
}


void BankAccount::updateInterest(int days)
{
    double interest = (days * m_interestRate * m_balance) / 365.0 / 100.0;

    m_balance += interest;
}


void BankAccount::print() 
{
    std::cout << "BankAccount Nr. " << m_number << ":";
    std::cout << "   Balance=" << m_balance << "." << std::endl;
}


// ===========================================================================
// End-of-File
// ===========================================================================
