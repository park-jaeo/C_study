#include <iostream>
class Cat
{
public:
    void speak()
    {
        static int count = 0;
        //static int count를 함수 안에서 정의해 주었다.
        // count 변수를 speak()메소드 내에서 정의해서 local 변수로 
        //static 변수는 프로그램이 실행되는 동안 유지되며, 함수 호출시마다 초기화되지 않는다.
        count++;
        std::cout << count << "meow" << std::endl;
    };
    //static int count = 0; -> 아무 곳에서나 접근 가능하다.
private:
    // static int count = 0; 와 같이 private 변수를 만드는 것도 하나의 방법이다.
    int mAge;
};


int main()
{
    Cat kitty;
    Cat nabi;
    kitty.speak();
    // kitty object가 count를 호출해서 count를 1 증가시킨다
    nabi.speak();
    // speak object가 count를 호출해서 count를 1 증가시킨다
    
    //14줄에서와 같이 Cat::count = -999; 와 같이 접근이 가능해진다.
    return 0;
}

//전역 변수와 static 변수는 프로그램이 시작될 때 global memory space에 속하는
//data segmant 또는 BSS섹션에 할당된다.