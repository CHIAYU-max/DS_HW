#include <iostream>
#include <vector>
#include <print>   // C++23 核心功能：比 cout 更快更簡潔的輸出方式
#include <ranges>  // C++20/23 功能：強大的資料處理工具

int main() {
    // 1. 使用 C++23 的 std::println 進行格式化輸出
    std::println("環境測試成功！");
    std::println("目前的編譯器支援 C++23 標準。");

    // 2. 測試一些現代 C++ 特性
    std::vector<int> nums = {1, 2, 3, 4, 5};
    
    std::print("數字清單：");
    for (int n : nums) {
        std::print("{} ", n);
    }
    std::println(""); // 換行

    return 0;
}