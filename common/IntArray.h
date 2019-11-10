#ifndef __INTARRAY_H__
#define __INTARRAY_H__

class IntArray
{
    private:
        int m_len;
        int *m_pointer;

    public:
        // IntArray();
        IntArray(int len);
        IntArray(const IntArray& other);
        ~IntArray();
        int length();
        bool set_elem(int pos, int value);
        bool get_elem(int pos, int &value);
};

#endif