#include <array>
#include <iostream>

class Animal
{
public:
    virtual void speak()
    {
        std::cout << "Animal" << std::endl;
    }

    virtual ~Animal() = default;

};

class Cat : public Animal
{
public:
    virtual void speak() override
    {
        std::cout << "meow~" << std::endl;
    }
};

class Dog : public Animal
{
public:
    virtual void speak() override
    {
        std::cout << "bark~" << std::endl;
    }
};

int main()
{
    std::array<Animal*,5> animals;

    //td::array<Animal*,5> animals;에서는 배열을 animals로 정의, 요소는 정의하지 않아 놓고, 
    //for(auto & animalPtr : animals)에서 loop의 일부로 animalPtr을 declaration 해주었다. 


    for(auto & animalPtr : animals)
    // animalPtr은 loop의 일부로 declaration 되어 있다. (range-based for loop)
    // declaration은 순회 중인 요소에 대한 변수를 선언해 주었다.
    {
        int i=0;
        std::cin >> i;
        if(i==1)
        {
            animalPtr = new Cat();
        }
        else
        {
            animalPtr = new Dog();
        }
    }
    for(auto & animalPtr : animals)
    {
        animalPtr->speak();
        delete animalPtr;
    }


}

//dynamic polymorphism은 가상 함수를 이용하여 구현된다.
//가상 함수를 이용하는 이유는 런타임 다형성을 구현하기 위해서 이다.

//오버라이딩(override)는 부모 클래스에서 상속받은 함수를 자식 클래스에서 새로운 클래스로 대체하는 것이다.

//포인터로 정의하면 animalPtr->speak()로 메서드를 사용해야 하고
//객체로 정의하면 animal.speak()로 메소드를 사용해야 한다.

// *은 포인터 변수 자체를 사용할 때 사용한다. 포인터를 '*animalPtr' 형식으로 사용하면 객체 자체를 나타낼 수 있다
// 즉 객체 자체인 Animal을 나타낸다.

// *: 포인터를 사용해 정의해 주었다.
// &: 메모리 참조를 이용해 정의해 주었다.

