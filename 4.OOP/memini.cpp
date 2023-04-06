#include <iostream>
class Cat
{
public:
    Cat()
    {
        mAge = 1;    
    }
    Cat(int age)
    {
        mAge = age;
    }
private:
    int mAge;
    
};
class Zoo
{
public:
    Zoo(){};
private:
    Cat kitty;

}

int main()
{
    Cat kitty(3);
    Cat nabi(2);
    return 0;
}

//parameter(매개변수)와 argument(인자)는 다른 개념이다.

//매개변수(parameter)는 함수나 메소드를 정의할 때 선언되는 변수
//argument는 호출시 전달되는 값이다.

//매개변수는 인자를 받아서 반환하는, 탬플릿처럼 사용되고 거고 인자는 개개의 값들을 의미한다.