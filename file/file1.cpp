#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    std::ofstream file;
    file.open("C:\\C--\\file\\test.txt", ios::in | ios::out); // 使用ofstream打开文件
    file << "已成功输入文";                                 // 向文件中写入数据
    file.close();                                             // 关闭文件
}