#include <iostream>
#include <time.h>
#include <cmath>
#include <chrono>
using namespace std;
using namespace chrono;
const time_point<system_clock> now = system_clock::now();
int main()
{
    srand((unsigned)time(NULL));
    int rand1 = 1200;
    int hits = 0;
    //int t1 =  // Use chrono without std::
    for (int i = 1; i < rand1; i++)
    {
        int x = rand();
        int y = rand();
        int dist = sqrt(x * x + y * y);
        if (dist <= 1.0)
        {
            hits++;
        }
    }
    int pi = 4 * (hits / rand1);
    return 0;
}