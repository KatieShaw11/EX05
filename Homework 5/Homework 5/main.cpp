//
//  main.cpp
//  Homework 5
//
//  Created by katie joy shaw on 6/10/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <cstdlib>
#include <stdio.h>
#include <ctime>
#include "Vector.h"
#include "Account.h"
using namespace std;

template <typename T>
int linearSearch(const T list[], T key, int arraySize); // 12.2
template <typename T>
bool isSorted(const T list[], int size); // 12.4
template <typename T>
void shuffle(vector<T> &v); // 12.20

int main()
{
                            // 12.2 is a little farther down. I did it after 12.4 but wanted to reuse the arrays from 12.4.
    
                            //  12.4  //
    
    cout << "\t12.4\n\n";
    
// Testing with ints
    
    int listint[5] = {1, 2, 3, 4, 5};
    cout << "This int array (";
    for (int i = 0; i < 5; i++)
    {
        cout << listint[i] << " ";
    }
    cout << ") ";
    if (isSorted(listint, 5)==true)
    {
        cout << "is sorted, in either descending or ascending order.\n";
    }
    else{
        cout << "is not sorted, in neither descending nor ascending order.\n";
    }
    
// Testing with strings
    
    string liststring[5] = {"bob", "charles", "phil", "tuck", "umbridge"};
    cout << endl;
    cout << "This string array (";
    for (int i = 0; i < 5; i++)
    {
        cout << liststring[i] << " ";
    }
    cout << ") ";
    if (isSorted(liststring, 5)==true)
    {
        cout << "is sorted, in either descending or ascending order.\n";
    }
    else{
        cout << "is not sorted, in neither descending nor ascending order.\n";
    }
    
// Testing with doubles
    
    double listdouble[5] = {12.3, 4.3, 89, 1, 90.4};
    cout << endl;
    cout << "This double array (";
    for (int i = 0; i < 5; i++)
    {
        cout << listdouble[i] << " ";
    }
    cout << ") ";
    if (isSorted(listdouble, 5)==true)
    {
        cout << "is sorted, in either descending or ascending order.";
    }
    else{
        cout << "is not sorted, in neither descending nor ascending order.";
    }
    
    
    
                            //  12.2  //
    
    
    cout << "\n\n\t12.2\n\n";
    
    int keyint = 4;
    string keystring = "phil";
    double keydouble = 15.3;
    
//Testing ints
    
    cout << "This int array (";
    for (int i = 0; i < 5; i++)
    {
        cout << listint[i] << " ";
    }
    if (linearSearch(listint, keyint, 5)>-1)
    {
        cout << ") contains " << keyint << " at index " << linearSearch(listint, keyint, 5) << "." << endl;
    }
    else
        cout << ") does not contain " << keyint << "." << endl;
    
//Testing string arrays
    
    cout << "This string array (";
    for (int i = 0; i < 5; i++)
    {
        cout << liststring[i] << " ";
    }
    
    int result = linearSearch(liststring, keystring, 5);
    
    if (result > -1)
    {
        cout << ") contains " << keystring << " at index " << result << "." << endl;
    }
    else
        cout << ") does not contain " << keystring << "." << endl;
    
//Testing double arrays
    
    cout << "This double array (";
    for (int i = 0; i < 5; i++)
    {
        cout << listdouble[i] << " ";
    }
    
    result = linearSearch(listdouble, keydouble, 5);
    
    if (result > -1)
    {
        cout << ") contains " << keydouble << " at index " << result << "." << endl;
    }
    else
        cout << ") does not contain " << keydouble << "." << endl;

    
                            //  12.8  //
                                // IN OTHER FILE  //

                            //  12.20  //
    
    cout << "\n\n\t12.20\n\n";

    vector<int> ThisVector;
    
    cout << "Enter 10 int values to be shuffled: ";
    int intholder;
    for (int i = 0; i < 10; i++)
    {
        cout << "\nValue #" << (i+1) << ": ";
        cin >> intholder;
        ThisVector.push_back(intholder);
    }
    
    shuffle(ThisVector);
    
    cout << "\nHere are your shuffled numbers:";
    
    for (int i = 0; i < 10; i++)
    {
        cout << endl << ThisVector[i];
    }
    
    
                            //  12.25  //

    cout << "\n\n\t12.25\n\n";
    
    Account myAccount("George", 1122, 1000);
    
    myAccount.setAnnualInterestRate(1.5);
    
    cout << myAccount.getName() << "'s (ID #" << myAccount.getId() << ") balance is " << myAccount.getBalance() << ". Interest rate: " <<myAccount.getAnnualInterestRate() <<"%.\n";
    
    myAccount.deposit(30, "Deposit $30");
    myAccount.deposit(40, "Deposit $40");
    myAccount.deposit(50, "Deposit $50");
    myAccount.withdraw(5, "Withdraw $5");
    myAccount.withdraw(5, "Withdraw $4");
    myAccount.withdraw(5, "Withdraw $2");
    
    vector<Transaction> myVector = myAccount.getTransactionsVector();
    
    for (int i = 0; i < myVector.size(); i++)
        cout << myVector[i].getDescription() << "; new balance: $" << myVector[i].getBalance() << endl;
    
    
}

//end main


                            //  12.2  //

template <typename T>
                
int linearSearch(const T list[], T key, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (key == list[i])
            return i;
    }
    return -1;
}

                            //  12.4  //

// Wasn't sure which way the sorting was going (ascending or descending, because the directions do not specify. The helper function checks for both, and the function returns true whether the list is "1, 2, 3, 4, 5" or "5, 4, 3, 2, 1."


template <typename T>

bool isSorted(const T list[], int size, bool Ascending)
{
    for (int i = 0; i < size-2; i++)
    {
        if (Ascending == false)
        {
            if (list[i] > list[i+1])
                return false;
        }
        if (Ascending == true)
        {
            if (list[i] < list[i+1])
                return false;
        }
    }
    return true;
}

template <typename T>



bool isSorted(const T list[], int size)
{
    if(isSorted(list, size, true) || isSorted(list, size, false))
        return true;
    else
        return false;
}

                            //  12.20  //

template<typename T>

void shuffle(vector<T> &v)
{
    vector<T> newVector;
    T placeholder;
    
    srand((unsigned) time(0));
    
    int r;
    int vnum = v.size();
    
    for(int i = 0; i < v.size(); i++)
    {
        r =  rand() % vnum;
        newVector.push_back(v[r]);
        placeholder = v[v.size()-1];
        v[v.size()-1] = v[r];
        v[r] = placeholder;
        v.pop_back();
        
        vnum--;
    }
}

