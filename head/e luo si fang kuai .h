#ifndef __HEADFILE_H__
#define __HEADFILE_H__

#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include <conio.h>
#include <cstdio>
using namespace std;

class Tetris
{
private:
    int rank;     // 游戏难度等级
    int score;    // 得分
    int id;       // 图形ID
    int point[2]; // 两基点
    int top;      // 最高点高度
    double clock; // 距离上一次消行过去的毫秒数
public:
    Tetris();
    void DrawMap();             // 游戏界面
    void SetColor(int);         // 控制颜色
    void Draw(int, int, int);   // 画图形
    void Run();                 // 运行游戏
    void ReDraw(int, int, int); // 清除图形
    bool Judge(int, int, int);
    void Turn(int); // 旋转
    void Updata();  // 更新界面
    void Pause();   // 游戏暂停
    void Input_score();
    void Welocme();
};

// 条形
#define a1 0
#define a2 1

// 方块
#define b 2

// L形
#define c1 3
#define c2 4
#define c3 5
#define c4 6

// J形
#define d1 7
#define d2 8
#define d3 9
#define d4 10

// T形
#define e1 11
#define e2 12
#define e3 13
#define e4 14

// S形
#define f1 15
#define f2 16

// Z形
#define g1 17
#define g2 18

#endif