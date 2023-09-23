#include <iostream>
using std::cout;
using std::endl;
int *newPointGet(int *p1)
{
    int k1 = 55;
    p1 = new int;
    *p1 = k1;
    return p1;
}
int *PointGet(int *p2)
{
    int k2 = 55;
    p2 = &k2;
    return p2;
}

int main()
{
    cout << "输出函数各自返回指针所指向的内存的值" << endl;
    int *p = NULL;
    p = newPointGet(p);
    int *i = NULL;
    i = PointGet(i);
    cout << "Newpoint:" << *p << ",get:" << *i << endl;
    cout << "i所指向的内存没有被立即销毁,执行一个输出语句后:" << endl;
    cout << "Newpoint:" << *p << ",get:" << *i << endl;
    delete p;
    cout << "销毁堆内存后" << endl;
    cout << "*p=" << *p << endl;
    system("pause");
    return 0;
}