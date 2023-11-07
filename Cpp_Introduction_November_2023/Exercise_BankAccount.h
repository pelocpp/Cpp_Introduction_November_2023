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

    // Verbesserung: Kontonummer wird von der Klasse verwaltet
public:
    static int lastNumber;

public:
    // c'tor
    BankAccount();
    BankAccount(int account);

    // getter / setter
    double getAccountNumber() const;
    double getBalance() const;
    double getInterestRate() const;

    // public interface
    void deposit(double amount);
    void withdraw(double amount);
    void print();

    // interest
    void setInterestRate(double rate);
    void updateInterest(int days);

    // compare two accounts - using references
    bool equals(const BankAccount& other);

    // operators
    friend bool operator== (const BankAccount& left, BankAccount right);
    friend bool operator!= (const BankAccount& left, BankAccount right);
    friend bool operator<  (const BankAccount& left, BankAccount right);
    friend bool operator<= (const BankAccount& left, BankAccount right);
    friend bool operator>  (const BankAccount& left, BankAccount right);
    friend bool operator>= (const BankAccount& left, BankAccount right);
};

// ===========================================================================
// End-of-File
// ===========================================================================
