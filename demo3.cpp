#include <iostream>
#include<iomanip>
using namespace std;

int func(int arr[3][3])
{
    int t = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < i; j++)
        {
            t = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = t;
        }
    }
    return 0;
}
int main()
{
    int arr[3][3] = {{1,2,3,},{4, 5, 6},{7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(7)<<arr[i][j];
        }
        cout << endl;
    }
    func(arr);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(7)<<arr[i][j];
        }
        cout << endl;
    }

    system("pause");
    return 0;
}