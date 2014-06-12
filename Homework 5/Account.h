//
//  Account.h
//  Homework 5
//
//  Created by katie joy shaw on 6/11/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#ifndef __Homework_5__Account__
#define __Homework_5__Account__

#include <iostream>
#include <string>
#include <vector>
#include "Transaction.h"
using namespace std;

class Account
{
public:
    Account ();
    Account (string Name, int ID, double Balance);
    
    vector<Transaction> getTransactionsVector()const;
    
    int getId();
    double getBalance();
    double getAnnualInterestRate();
    string getName();
    
    void setId(int Id);
    void setBalance(double Balance);
    void setAnnualInterestRate(double AIR);
    void setName(string Name);
    
    double getMonthlyInterestRate();
    
    void withdraw(double amount, string Description); // I added description to these b/c I don't know why it's a parameter of transaction if it's not passed in.
    
    void deposit(double amount, string Description); // ^ same
    
private:
    string customerName;
    int ID;
    double balance;
    static double annualInterestRate; //current interest rate
    vector<Transaction> transactions;    
};

#endif /* defined(__Homework_5__Account__) */
