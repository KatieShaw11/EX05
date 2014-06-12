//
//  Account.cpp
//  Homework 5
//
//  Created by katie joy shaw on 6/11/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#include "Account.h"
#include <vector>

double Account::annualInterestRate = 0; //current interest rate


Account::Account ()
{
    customerName = "Pete Smith";
    ID = 0;
    balance = 0;
    vector<Transaction> transactions = vector<Transaction>(10);
}
Account::Account (string Name, int Id, double Balance)
{
    customerName = Name;
    ID = Id;
    balance = Balance;
    vector<Transaction> transactions;
}

int Account::getId()
{
    return ID;
}
double Account::getBalance()
{
    return balance;
}
double Account::getAnnualInterestRate()
{
    return annualInterestRate;
}
string Account::getName()
{
    return customerName;
}

void Account::setId(int Id)
{
    ID = Id;
}
void Account::setBalance(double Balance)
{
     balance = Balance;
}
void Account::setAnnualInterestRate(double AIR)
{
    annualInterestRate=AIR;
}
void Account::setName(string Name)
{
    customerName = Name;
}

double Account::getMonthlyInterestRate()
{
    return annualInterestRate/12;
}

void Account::withdraw(double Amount, string Description)  // I added description to these b/c I don't know why it's a parameter of transaction if it's not passed in.
{
    balance = balance - Amount;
    //Transaction *t = new Transaction('W', Amount, balance, Description);
    Transaction t('W', Amount, balance, Description);
    transactions.push_back(t);
}

void Account::deposit(double Amount, string Description) // ^ same
{
    balance = balance + Amount;
    //Transaction *t = new Transaction('D', Amount, balance, Description);
    Transaction t('D', Amount, balance, Description);
    transactions.push_back(t);

}

vector<Transaction> Account::getTransactionsVector() const
{
    return transactions;
}

