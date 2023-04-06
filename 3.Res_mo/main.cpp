#include <vector>
int main()
{
    std::vector<int> vec;
    int a1=1;
    int a2=2;

    vec.push_bach(a1);
    vec.push_bach(a2);
}




void fooV(std::array<int,100> a)
{
    int b = a+1;

};

void fooP(int * ap)
{
    int b= *ap+1;
};


void fooR(const int & a)
{
    int b = a+1;
    a=100;
};
//const int & a로 정의해서 더 안전한 코드를 작성할 수 있다.

int main()
{
    int a=0;
    fooV(a);
    fooP(&a);
    return 0;
}



//pass bu
//value
//ptr
//reference

//메모리 구조와 관련
// reference는 변수의 별칭이다.
//pointer는 버그를 일으킬 가능성이 있다.


//& -> L value reference
//&& -> R value reference