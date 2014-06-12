//
//  Vector.h
//  Vector class 12.8
//
//  Created by katie joy shaw on 6/10/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#ifndef __Vector_class_12_8__Vector__
#define __Vector_class_12_8__Vector__

//#include <iostream>

template <typename elementType>
class Vector
{
public:
    Vector();
    Vector(int size);
    Vector(int size, elementType defaultValue);
    void push_back(elementType element);
    void pop_back();
    unsigned size() const;
    elementType at(int index) const;
    bool empty() const;
    void clear();
    void swap(Vector v2);
    
private:
    int vectorSize;
    int capacity;
    elementType *elements;
    elementType* doubleCapacity(const elementType* LIST, int SIZE);

};

#endif /* defined(__Vector_class_12_8__Vector__) */
