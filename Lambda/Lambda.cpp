// Lambda.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <algorithm>
#include <vector>

#include <opencv2/core.hpp>

//int main()
//{
//  std::vector<cv::Point> v;
//  v.push_back(cv::Point(1, 5));
//  v.push_back(cv::Point(4, 3));
//  v.push_back(cv::Point(2, 1));
//  std::sort(v.begin(), v.end(),
//      [&](cv::Point a, cv::Point b) {
//      return a.x > b.x;
//  });
//  std::for_each(v.begin(), v.end(), [](cv::Point &pt) {
//      pt.x += 5;
//      pt.y += 4;
//  });
//  system("pause");
//}

int main()
{
    std::vector<cv::Point> v;
    v.push_back(cv::Point(1, 1));
    v.push_back(cv::Point(4, 3));
    v.push_back(cv::Point(2, 1));
    std::sort(v.begin(), v.end(),
        [&](cv::Point fore, cv::Point back) {
        if (fore.x != back.x)return fore.x > back.x;
        return fore.y > back.y;
    });
    system("pause");
}
