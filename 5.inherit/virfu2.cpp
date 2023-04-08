
#include <iostream>

class Animal
{
public:
    virtual void speak()
    {
        std::cout << "Animal" << std::endl;
    }
    virtual ~Animal() = default;
private:
    double height; // 8Bytes

};

class Cat : public Animal
{
public:
    void speak() override
    {
        std::cout << "meow~" << std::endl;
    }
private:
    double weight; // 16 Bytes
};



int main()
{
    // Animal * polyAnimal = new Cat();
    Animal * polyAnimal = new Cat();

    //polyAnimal 포인터는 heap을 가리키고, 그렇기 때문에 speak()를 호출할 수 있다.
    // 포인터 변수의 타입이 Animal*이지만, 객체의 타입이 Cat이여서 가능하다.
    polyAnimal->speak();
    delete polyAnimal;
    //polyAnimal 포인터 변수는 stack에 할당된다.
    //포인터가 가리키는 객체(Cat())은 heap에 할당된다.
    //

    return 0;
}


// Animal : height 8byte
// Cat : height 8byte  / weight: 8byte

// 포인터 정보 추가
// virtual Table을 가리키는 포인터가 추가된다. 
// Animal : + 8byte
// Cat : + 8byte