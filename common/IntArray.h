#ifndef __INTARRAY_H__
#define __INTARRAY_H__

class IntArray
{
    private:
        int m_len;
        int *m_pointer;
        
        IntArray(int len);
        bool init();
    public:
        static IntArray* new_instance(int len);
        // 拷贝构造不允许，因为拷贝构造其实也需要和二阶构造的，
        // 因为只是换了一个方式构造一个新对象而已，
        // 两者唯一的区别就是拷贝构造会把原先的值拷贝过来而不是默认全零
        // IntArray(const IntArray& other);
        ~IntArray();
        int length();
        bool set_elem(int pos, int value);
        bool get_elem(int pos, int &value);
};

#endif