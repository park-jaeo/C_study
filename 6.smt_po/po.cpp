#include <iostream>
#include <memory>
#include <vector>

class Cat
{
public:
    Cat():mAge{0}
    //mAge{age}는 멤버 변수 age를 초기화하는 멤버 초기화 리스트이다.
    //member initialize list 문법을 사용하여 mAge멤버 변수를 age매개 변수로 초기화해 주었다.
    {
        std::cout << "cat constructor" << std::endl;
    }
    ~Cat() noexcept
    {
        std::cout << "cat destructor" << std::endl;
    }
private:
    int mAge;
    // :mAge{age}로 mAge값은 age로 초기화되었다.
};

void foo()
{
    std::cout << "foo constructor" << std::endl;
    std::vector<Cat> cats(5);
    std::cout << "foo function end" << std::endl;
}

int main()
{
    std::cout << "before foo" << std::endl;
    foo();
    std::cout << "after foo" << std::endl;
    //unique포인터의 lifecycle은 scope기반으로 이루어져서,
    // foo()함수가 먼저 끝나고 cat destructor이 다음에 온다.
    return 0;
}

//멤버 변수(member variable)
// : 클래스 내부에 선언된 변수이다.

//매개 변수(Parameter)
// : 함수나 메서드의 입력으로 전달되는 변수이다.


// before foo
// foo constructor
// cat constructor
// foo function end
// cat destructor
// after foo
