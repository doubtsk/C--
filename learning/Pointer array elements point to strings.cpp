#include <iostream>
#include <string.h>
using namespace std;

void sort(char *name[], int n)
{
    char *temp;
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[k], name[j]) > 0)
            {
                k = j;
            }
        }
        if (k != i)
        {
            temp = name[i];
            name[i] = name[k];
            name[k] = temp;
        }
    }
}

void print(char *name[], int n)
{
    int i = 0;
    while (i < n)
    {
        cout << name[i] << endl;
        i++;
    }
}

int main()
{
    char *name[10] = {"mingri", "soft", "C++", "mr"};
    int n = 4;
    sort(name, n);
    print(name, n);
    system("pause");
    return 0;
}