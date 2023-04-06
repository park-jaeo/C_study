#include <iostream>

void fn()
{
    std::cout << "fn" << std::endl;
}

int main()
{
    const int a = 0;

    for (int i = 0; i < 100; ++i)
    {
        fn();
    }
}