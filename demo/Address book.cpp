#include <iostream>
using namespace std;

void showMenu()
{
    cout << "************************" << endl;
    cout << "1、添加联系人" << endl;
    cout << "2、显示联系人" << endl;
    cout << "3、删除联系人" << endl;
    cout << "4、查找联系人" << endl;
    cout << "5、修改联系人" << endl;
    cout << "6、清空联系人" << endl;
    cout << "0、退出联系人" << endl;
    cout << "************************" << endl;
}

int main(int argc, char const *argv[])
{
    while (true)
    {
        showMenu();

        int select = 0;
        cin >> select;
        switch (select)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 0:
            cout << "欢迎下次使用" << endl;
            system("pause");
            return 0;
            break;
        }
    }
    system("pause");
    return 0;
}
