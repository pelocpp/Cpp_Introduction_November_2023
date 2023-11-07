// ===========================================================================
// BankAccount.cpp
// ===========================================================================

#include "Exercise_BankAccount.h"

void testBankAccount()
{
    BankAccount anyAccount;  // default c'tor: NO () !!!!!!!!!!!!!!!!
    anyAccount.print();

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

void testBankAccount2()
{
    BankAccount firstAccount;
    firstAccount.deposit(100);
    firstAccount.print();

    BankAccount secondAccount;
    secondAccount.deposit(200);
    secondAccount.print();

    BankAccount thirdAccount;
    thirdAccount.deposit(300);
    thirdAccount.print();
}

void testBankAccount3()
{
    BankAccount firstAccount;

    // C#, Java
    // BankAccount firstAccount = new BankAccount (1, 2);

    firstAccount.deposit(100);
    firstAccount.print();

    BankAccount secondAccount;
    secondAccount.deposit(200);
    secondAccount.print();

    if ( firstAccount.equals (secondAccount)  ) {

        // sind gleich
    }

    //if (firstAccount == secondAccount ) {

    //    // sind gleich
    //}

}

// ===========================================================================
// End-of-File
// ===========================================================================
