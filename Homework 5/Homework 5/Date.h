//
//  Date.h
//  Homework 5
//
//  Created by katie joy shaw on 6/11/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#ifndef __Homework_5__Date__
#define __Homework_5__Date__

#include <iostream>

class Date
{
public:
    Date();
    Date(int Day, int Month, int Year);
    
private:
    int year;
    int month;
    int day;
};

#endif /* defined(__Homework_5__Date__) */
