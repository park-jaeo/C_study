#include <string>


void storeByLRef(std:string & s)
{
    std::string b = s;
}; 
//std::string 객체를 참조해서 L-value이다.s
//std::string 객체를 복사해서 L-value이다.b

void storeByRRef(std::string && s)
{
    std::string b = std::move(s); //wrong !
    //std::string b = s; 틀림
    //s를 지칭할 수 있어서 충돌
    // R value + move ->zero copy 구현
}; 
//s: R-value이다. std::string객체를 참조한다.

int main()
{
    std::string a ="abc"
    storeByValue(a);
    storeByLRef(a);
    storeByRRef("abc");
}






// Left value Right value
// L value -> R value : std::move
// int (L value)a=(R value)0;
// int (L value)b=(L value)a; (재지칭)

// int c = std::move(a); -> R value


// & : L value ref
// && : R value ref R value는 임시 포인터이다.
