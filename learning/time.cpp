#include<iostream>
#include <chrono>
using namespace std::chrono;
const time_point<system_clock> now = system_clock::now();
int main()
{
    seconds s3(3); // 3秒，使用整型储存，seconds类型等价于duration<int64>
    duration<double, std::milli> ms3k(3000);
    auto timestamp = now.time_since_epoch().count();
    using unix_time_seconds = time_point<system_clock, seconds>;
    auto now_in_second = time_point_cast<seconds>(now);
    auto s3_ = duration_cast<seconds>(ms3k);
    duration<double, std::milli> ms1(1.1);
    auto t = s3 + ms1;
    auto tp = now_in_second + ms1;

    system("pause");
    return 0;
}