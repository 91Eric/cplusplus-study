#include "IntArray.h"
#include <cstdio>
#include <cstdlib>
#include <new>
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

IntArray::~IntArray()
{
    m_len = 0;
    delete[] m_pointer;
}

int main(int argc, char const *argv[])
{
    /* code */
    IntArray *p = IntArray::new_instance(3);
    IntArray b = *p;
    int i = 0;
    int j = 0;
    b.set_elem(1, 22);
    p->get_elem(1, j);
    if (b.get_elem(1, i))
        printf("%d %d\n", i, j);
    return 0;
}
