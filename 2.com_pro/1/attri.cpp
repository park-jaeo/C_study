#include <iostream>

//return state, error code
//prefer enum class
[[deprecated("due to API change")]]
[[nodiscard("return value is EVERYTING!")]]
int fn()
{
    //do some work
    return 0;
}

int main()
{
    const int ret = fn();
    std::cout << ret << std::endl;
}