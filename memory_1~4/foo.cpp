#include <iostream>

class Cat
{
public:
    Cat() // Cat 클래스 생성자
    {
        m_age = 1; // m_age 변수 초기화
    };
    ~Cat(); // Cat 클래스 소멸자
    void addAge(int arg) // 나이를 더하는 함수
    {
        m_age += arg; // m_age 변수에 arg 값을 더함
    };
private:
    int m_age; // 고양이 나이 변수
};

int main()
{
    Cat cat; // Cat 클래스 객체 생성
    cat.addAge(10); // cat 객체의 나이를 10살 더함

    return 0; // 프로그램 종료
}