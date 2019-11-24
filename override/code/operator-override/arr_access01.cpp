/**
 * @author Eric
 * @file Description 数组操作符重载示例1
 * @desc Created on 2019-11-24 4:25:30 pm
 * @copyright 
 */
#include <iostream>

using namespace std;

class Test
{
    int a[5];
    public:
        int& operator [](int i)
        {
            return a[i];
        }

        // 可以通过字符串作为下标获取对应元素
        int& operator [](const string& s)
        {
            if (s == "1st")
                return a[0];
            if (s == "2nt")
                return a[1];
            else
                return a[0];
        }
};

int main(int argc, char const *argv[])
{
    Test t;
    t[0] = 4;
    cout << t["1st"] << endl;
    return 0;
}
