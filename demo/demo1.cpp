#include <iostream>
using namespace std;
int add(int x)
{
    static int n = 0;
    n = n + x;
    return n;
}

int main()
{
    int i, j, sum;
    cout << "input a number ";
    cin >> i;
    cout << "the number is";
    for (j = 1; j <= i; j++)
    {
        sum = add(j);
        cout << j << ":" << sum << endl;
        system("pause");
        return 0;
    }
}