//
//  Transaction.h
//  Homework 5
//
//  Created by katie joy shaw on 6/11/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#ifndef __Homework_5__Transaction__
#define __Homework_5__Transaction__

#include <iostream>
#include <ctime>
#include "Date.h"
using namespace std;

class Transaction
{
private:
    Date date;
    char type;
    double amount;
    double balance;
    string description;
    
public:
    Transaction();
    Transaction(char Type, double Amount, double Balance, string Description);
    double getAmount();
    double getBalance();
    string getDescription();
    void setAmount(double Amount);
    void setBalance(double Balance);
    void setDescription(string Description);
};

#endif /* defined(__Homework_5__Transaction__) */
