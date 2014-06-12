//
//  Vector.cpp
//  Vector class 12.8
//
//  Created by katie joy shaw on 6/10/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#include "Vector.h"

template <typename elementType>
Vector<elementType>::Vector()
{
    vectorSize = 0;
    capacity = 10;
    elements = new elementType[capacity];
}

template <typename elementType>

Vector<elementType>::Vector(int size)
{
    vectorSize = size;
    capacity = size + 5;
    elements = new elementType[capacity];
    
    for (int i = 0; i < vectorSize; i++)
    {
        elements[i] = 0;
    }
}

template <typename elementType>

Vector<elementType>::Vector(int size, elementType defaultValue)
{
    vectorSize = size;
    capacity = size + 5;
    elements = new elementType[capacity];
    
    for (int i = 0; i < vectorSize; i++)
    {
        elements[i] = defaultValue;
    }
}

template <typename elementType>

void Vector<elementType>::push_back(elementType element)
{
    if(vectorSize >= capacity)
    {
        elements = doubleCapacity(elements, capacity);
        capacity = capacity*2;
    }
    elements[vectorSize] = element;
    vectorSize++;
}

template <typename elementType>

void Vector<elementType>::pop_back()
{
    vectorSize--;
}

template <typename elementType>

unsigned Vector<elementType>::size() const
{
    return vectorSize;
}

template <typename elementType>

elementType Vector<elementType>::at(int index) const
{
    return elements[index];
}

template <typename elementType>

bool Vector<elementType>::empty() const
{
    if(vectorSize == 0)
    {
        return true;
    }
    return false;
}

template <typename elementType>

void Vector<elementType>::clear()
{
    delete [] elements;
    elements = new elementType [10];
    vectorSize = 0;
    capacity = 10;
}

template <typename elementType>

void Vector<elementType>::swap(Vector v2)
{
    elementType *pointerTemp = v2.elements;
    v2.elements = elements;
    elements = pointerTemp;
    
    int tempSize = v2.vectorSize;
    v2.vectorSize = vectorSize;
    vectorSize = tempSize;
    
    int tempCapacity = v2.capacity;
    v2.capacity = capacity;
    capacity = tempCapacity;
}


// dis is a helpful function from an old homework that imma use

template <typename elementType>


elementType* Vector<elementType>::doubleCapacity(const elementType* LIST, int SIZE)
{
    int* list2 = new int [2*SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        list2[i] = LIST[i];
    }
    return list2;
}
