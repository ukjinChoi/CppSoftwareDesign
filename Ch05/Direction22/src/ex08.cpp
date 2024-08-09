#include <cstdlib>
#include <iostream>
#include <vector>

void print(std::vector<int>& vec)
{
    for(auto&& v : vec)
    {
        std::cout << v << ",";
    }
    std::cout << std::endl;
}
int main()
{
    std::vector<int> vec{ 1, -3, 27, 42, 4, -8, 22, 42, 37, 4, 18, 9 };
    auto const pos = std::max_element( begin(vec), end(vec));

    vec.erase(std::remove(begin(vec), end(vec), *pos), end(vec));

    print(vec);

    return 0;
}