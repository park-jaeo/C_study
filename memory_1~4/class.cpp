#include <iostream>
class Cat
{
public:
    void printCat();
private:
    int age;      //4bytes
    float weight; //4bytes
};

int main()
{
    // std::cout << sizeof() << std::endl;
    Cat cat1;
    Cat cat2;

    Cat *catPtr = &cat1; //8bytes(64bit)
    std::cout << sizeof(catPtr) << std::endl;

    return 0;
}