//
//  Date.cpp
//  Homework 5
//
//  Created by katie joy shaw on 6/11/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#include "Date.h"
#include <ctime>

Date::Date() // I looked up how to convert raw times from <ctime> into month, day, and year. A lot of this probably shouldn't be attributed to my brain.
{
    time_t rawtime;
    struct tm *ptm;
    
    time (&rawtime);
    
    ptm = localtime(&rawtime);
    
    day = ptm->tm_mday;
    month = ptm->tm_mon + 1;
    year = ptm->tm_year + 1900;
    
}
Date::Date(int Day, int Month, int Year)
{
    day = Day;
    month = Month;
    year = Year;
}