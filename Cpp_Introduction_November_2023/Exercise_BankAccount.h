// ===========================================================================
// BankAccount.h
// ===========================================================================

#pragma once

#include <iostream>

class BankAccount
{
private:
    int m_number;
    double m_balance;
    double m_interestRate;

public:
    // c'tor
    BankAccount(int account);

    // getter / setter
    double getAccountNumber();
    double getBalance();

    // public interface
    void deposit(double amount);
    void withdraw(double amount);
    void print();

    // interest
    void setInterestRate(double rate);
    void updateInterest(int days);

};


// ===========================================================================
// End-of-File
// ===========================================================================
