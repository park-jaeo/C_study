#include <iosteam>

class Square
{
public:
    Square(int l):mL{l}{}; // mL이라는 이름의 빈 unordered_map 객체 생성
    int area() const // 넓이를 계산하는 함수
    {
        return mL*mL; // 한 변의 길이를 제곱하여 넓이 계산
    }
    int perimeter() const // 둘레를 계산하는 함수
    {
        return 4*mL; // 한 변의 길이를 4배하여 둘레 계산
    }
private:
    int mL; // 한 변의 길이를 저장하는 변수
};

int main()
{
    Square c{10}; // Square 클래스의 객체 c를 생성하고 한 변의 길이를 10으로 초기화
    std::cout << c.area() << "\n"; // c의 넓이를 출력
    std::cout << c.perimeter() << "\n"; // c의 둘레를 출력
}


// mL{l}{}, mL{l} : initializer List이다. 
// mL 멤버 변수를 l 값으로 초기화한다.

//{} : 생성자에서 아무것도 실행하지 않는다.
