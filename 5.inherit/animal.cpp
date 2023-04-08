#include <iostream>

class Animal
{
public:
    void sleep() const
    {
        std::cout << "i'm sleeping" <<std::endl;
    }
};

class Human : public Animal
{
public:
    void driveCar() const
    {
        std::cout << "I'm driving" << std::endl;
    }
};

int main(int argc, char const *argv[])
//argc : argument count
//argv : argument vector
{
    Human nocope;
    nocope.driveCar();
    nocope.sleep();

    return 0;
}