//
//  Vector.h
//  Homework 5
//
//  Created by katie joy shaw on 6/10/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#ifndef __Homework_5__Vector__
#define __Homework_5__Vector__

#include <iostream>
#include <vector>

template <typename elementType>

class Vector
{
    Vector<elementType>();
    Vector<elementType>(int size);
    Vector<elementType>(int size, elementType defaultValue);
    void push_back(elementType element);
    void pop_back();
    unsigned size() const;
    elementType at(int index) const;
    bool empty() const;
    void clear();
    void swap(Vector v2);
};


#endif /* defined(__Homework_5__Vector__) */
