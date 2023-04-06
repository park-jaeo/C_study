#include <array>
#include <iostream>


int main()
{
    constexpr int meaninfulNum =5;
    std::array<int,3> nums{1,2,3};
    nums[3] = meaninfulNum;

    return 0;
}