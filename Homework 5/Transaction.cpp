//
//  Transaction.cpp
//  Homework 5
//
//  Created by katie joy shaw on 6/11/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#include "Transaction.h"

Transaction::Transaction()
{
    type = 'W';
    date = Date();
    balance = 753289;
    amount = 4;
    description = "default";
}
Transaction::Transaction(char Type, double Amount, double Balance, string Description)
{
    type = Type;
    date = Date();
    balance = Balance;
    amount = Amount;
    description = Description;
}
double Transaction::getAmount()
{
    return amount;
}
double Transaction::getBalance()
{
    return balance;
}
string Transaction::getDescription()
{
    return description;
}
void Transaction::setAmount(double Amount)
{
    amount = Amount;
}
void Transaction::setBalance(double Balance)
{
    balance = Balance;
}
void Transaction::setDescription(string Description)
{
    description = Description;
}

