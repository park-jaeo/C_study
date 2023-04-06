#include <iostream>

struct ST
{
    long a;
    int b;
    short c;
};

int main()
{
    std::cout << sizeof(ST) << std::endl;

    return 0; 
}