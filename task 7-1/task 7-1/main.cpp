#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector <int> v1{ 1, 1, 2, 5, 6, 1, 2, 4 };
    std::cout << "[IN]: ";
    for (const auto& it : v1)
    {
        std::cout << it << ' ';
    }
    std::sort(v1.begin(), v1.end());
    auto new_v1 = unique(v1.begin(), v1.end());
    v1.erase(new_v1, v1.end());
    std::cout << "\n[OUT]: ";
    for (const auto& it : v1)
    {
        std::cout << it << ' ';
    }
}