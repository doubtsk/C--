#include <iostream>
using namespace std;
long func(long long n)
{
    long ret = 1;
    for (int i = 1; i <= n; i++)
    {
        ret *= i;
    }
    return ret;
}

int main()
{
    int n = 0;
    long long f = 0;
    cin >> n;
    f = func(n);
    cout << f << endl;
    system("pause");
    return 0;
}
//顶天计算20的阶乘，再高就爆了