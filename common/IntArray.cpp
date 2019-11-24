/**
 * @author Eric
 * @file Description 数组类对象实现
 * @desc Created on 2019-11-24 4:42:41 pm
 * @copyright 
 */
#include "IntArray.h"
#include <cstdio>
#include <cstdlib>
#include <new>
#include <iostream>

using namespace std;

IntArray::IntArray(int len)
{
    m_len = len;
}

bool IntArray::init()
{
    m_pointer = new(std::nothrow) int[m_len];
    if (m_pointer)
    {
        for (int i = 0; i < m_len; i++)
        {
            m_pointer[i] = 0;
        }
        return true;
    }
    else
    {
        m_len = 0;
        return false;
    }
}

IntArray*  IntArray::new_instance(int len)
{
    IntArray *ret = new IntArray(len);

    if (!(ret && ret->init()))
    {
        delete ret;
        return NULL;
    }

    return ret;
}

int IntArray::length()
{
    return m_len;
}

bool IntArray::set_elem(int pos, int value)
{
    int ret = (pos >= 0) && (pos < m_len);
    if (ret)
    {
        m_pointer[pos] = value;
    }
    return ret;
}

bool IntArray::get_elem(int pos, int &value)
{
    int ret = (pos >= 0) && (pos < m_len);
    if (ret)
    {
        value = m_pointer[pos];
    }
    return ret;
}

// IntArray::IntArray(const IntArray& other)
// {
//     m_len = other.m_len;

//     m_pointer = new(nothrow) int[m_len];

//     for (int i = 0; i < m_len; i++)
//     {
//         m_pointer[i] = other.m_pointer[i];
//     }
//    
/*
    
*/
// }

int& IntArray::operator [](int idx)
{
    return m_pointer[idx];
}

IntArray& IntArray::self()
{
    return *this;
}

IntArray::~IntArray()
{
    m_len = 0;
    delete[] m_pointer;
}

int main(int argc, char const *argv[])
{
    IntArray* p = IntArray::new_instance(3);
    IntArray& arr = p->self();
    arr[1] = 1;
    cout << arr[1] << endl;
    return 0;
}
