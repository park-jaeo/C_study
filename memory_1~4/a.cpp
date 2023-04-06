#include <iostream>

int main()
{
    int a =0;
    int b= 3;
    int c = a+b;
    double d = 2.5;

    std::cout << "a:"<< (long)&a << std::endl;
    std::cout << "b:"<< (long)&b << std::endl;
    std::cout << "c:"<< (long)&c << std::endl;
    std::cout << "d:"<< (long)&d << std::endl;


    return 0;
}

//스택은 메모리가 줄어드는 형태로 쌓인다.

