//unique_ptr의 개념
//exclusive ownership을 부여해서 object를 하나의 포인터만 가리킬 수 있도록 한다.
#include <iostream>
#include <memory>

class Animal
{
public:
    void sleep() const
    {
        std::cout << "i'm sleeping" <<std::endl;
    }
};

class Cat : public Animal
{
public:
    Cat():mAge{0}
    {
        std::cout << "cat constructor" << std::endl;
    }
    ~Cat()
    {
        std::cout << "cat destructor" << std::endl;
    }
private:
    int mAge;
};



class Zoo
{
public:
    //prefer enum class
    //enum class를 사용하는 것이 더 올바른 방법
    Zoo(int n)
    {
        if(n==1)
        {
            mAnimal = std::make_unique<Cat>();
        }
        else
        {
            // mAnimal = std::make_unique<Dog>();
        }
    }
private:
    // Animal * mAnimal;
    std::unique_ptr<Animal> mAnimal;
};


int main()
{
    std::unique_ptr<Cat> catPtr = std::make_unique<Cat>();
    //std:make_unique<Cat>은 Cat클래스의 객체를 동적으로 할당하고, 
    //"생성자를 호출한 후" 그 객체에 대한 포인터를 반환한다.
    std::unique_ptr<Cat> catPtr1 = std::move(catPtr);
} 

//catPtr, catPtr1, ptr, fooPtr -> Cat을 가리킨다.

//enum(enumeration,열거형)은 프로그래밍 언어에서 사용되는 데이터타입 중 하나이다.
//enum Color { RED, GREEN, BLUE }; 