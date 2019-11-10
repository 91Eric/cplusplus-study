#include "IntArray.h"
#include <cstdio>
#include <cstdlib>
#include <new>
using namespace std;
IntArray::IntArray(int len)
{
    m_pointer = new(std::nothrow) int[len];
    if (m_pointer)
    {
        for (int i = 0; i < len; i++)
        {
            m_pointer[i] = 0;
        }
        m_len = len;
    }
    else
    {
        m_len = 0;
    }
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
IntArray::~IntArray()
{
    m_len = 0;
    delete[] m_pointer;
}

int main(int argc, char const *argv[])
{
    /* code */
    IntArray a(3);
    return 0;
}
