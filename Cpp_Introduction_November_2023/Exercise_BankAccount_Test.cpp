// ===========================================================================
// BankAccount.cpp
// ===========================================================================

#include "Exercise_BankAccount.h"

void testBankAccount()
{
    BankAccount myAccount(12345);
    myAccount.deposit(50);
    myAccount.withdraw(25);
    myAccount.print();

    BankAccount secondAccount(12346);
    secondAccount.deposit(100);
    secondAccount.print();
    secondAccount.setInterestRate(5.0);
    secondAccount.updateInterest (365);
    secondAccount.print();
}

// ===========================================================================
// End-of-File
// ===========================================================================
