#include <iostream>
#include <chrono>

int main() {
    // 获取程序开始时间
    auto start_time = std::chrono::system_clock::now();

    // 打印 Hello World
    std::cout << "Hello World" << std::endl;

    // 获取程序结束时间
    auto end_time = std::chrono::system_clock::now();

    // 计算程序执行时间
    std::chrono::duration<double> elapsed_seconds = end_time - start_time;

    // 输出程序执行时间
    std::cout << "程序执行时间: " << elapsed_seconds.count() << " 秒" << std::endl;

    return 0;
}
