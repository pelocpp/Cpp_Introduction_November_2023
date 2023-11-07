// ===========================================================================
// BankAccount.cpp
// ===========================================================================

#include "Exercise_BankAccount.h"

int BankAccount::lastNumber = 10'000;   // vorbelegung im .cpp File

// c'tor
BankAccount::BankAccount()
{
    //m_number = 0;
    //m_balance = 0.0;
    //m_interestRate = 0.0;

    m_number = lastNumber;   // wähle nächste verfügbar Kontonummer
    lastNumber++;

    m_balance = 0.0;
    m_interestRate = 0.0;
}

BankAccount::BankAccount(int account)
{
    m_number = account;
    m_balance = 0.0;
    m_interestRate = 0.0;
}

// getter / setter
double BankAccount::getAccountNumber() const
{
    return m_number;
}

double BankAccount::getBalance() 
{
    return m_balance;
}

double BankAccount::getInterestRate() {

    return m_interestRate;
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

// compare two accounts
//bool BankAccount::equals(BankAccount other)
//{
//    // are the account numbers equal?
//
//    if (m_number != other.getAccountNumber()) {
//
//        return false;
//    }
//
//    if (m_balance != other.getBalance()) {
//
//        return false;
//    }
//
//    if (m_interestRate != other.getInterestRate()) {
//
//        return false;
//    }
//
//    return true;
//}

bool BankAccount::equals(const BankAccount& other)
{
    // are the account numbers equal?

    // JUST FOR TESTING // JUST FOR OBSERVATION
    // other.deposit(500);   // DoN't want to modify object 'other'

    if (m_number != other.getAccountNumber()) {

        return false;
    }

    if (m_balance != other.m_balance) {

        return false;
    }

    if (m_interestRate != other.m_interestRate) {

        return false;
    }

    return true;
    }


// ===========================================================================
// End-of-File
// ===========================================================================
