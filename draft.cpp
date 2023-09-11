#include <iostream>
#include <stdarg.h>
using namespace std;
void OutputInfo(int num, ...)
{
    va_list args;
    va_start(args, num);
    while (num--)
    {
        char *pch = va_arg(args, char *);
        int intValue = va_arg(args, int);
        cout << pch << endl;
        cout << intValue << endl;
    }
    va_end(args);
}
int main()
{
    OutputInfo(2, "hello", 100);
    system("pause");
    return 0;
}