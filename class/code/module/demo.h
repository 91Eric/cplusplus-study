#ifndef __DEMO_H__
#define __DEMO_H__

// 这里通过将类型定义为void，这样没有任何类型信息，模拟private，不能直接访问，只能通过成员函数
typedef void Demo;

Demo* Demo_create(int i, int j);
void Demo_free(Demo **pthis);
int Demo_getI(Demo* pthis);
int Demo_getJ(Demo* pthis);

#endif