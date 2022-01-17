#ifndef CPP_TIMER_HPP_
#define CPP_TIMER_HPP_

#include <iostream>
#include <chrono>
#include <string>
#include <fstream>

class MyCppTimer
{
public:
    MyCppTimer() {
        //out_timer_.open("timer_log.txt");
        cur_time_ = std::chrono::steady_clock().now();
    }
    ~MyCppTimer() {};
    void time(std::string file, int line) {
        double result = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock().now() - cur_time_).count() / 1000.0;
        std::cout << result << "\t" << file << "\t" << line << std::endl;
        out_timer_ << result << "\t" << file << "\t" << line << std::endl;
        //cur_time_ = std::chrono::steady_clock().now();
    }
    void restart() { cur_time_ = std::chrono::steady_clock().now(); }
private:
    std::chrono::time_point<std::chrono::steady_clock> cur_time_;
    std::ofstream out_timer_;
};

#endif
