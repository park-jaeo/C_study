#include <iostream>
class alignas(32) Cat
{
public:
    void speak();
private:
    char cl; //1bytes
    int i4a; //4bytes
    int i4b; //4bytes
    double d8;//8bytes
};


int main()
{
    Cat stackCat;

    Cat cats[100]; //flase sharing 문제 해결
    std::cout << sizeof(stackCat) << std::endl;
    //16bytes   //24bytes
    return 0;
}

//          d8         |    i4a     |   i4b    |
//    i4a     |        |            d8         |   i4b    |         |
// d8이 9byte에서 시작해야 한다. ->pedding을 넣어준다
// object의 전체 사이즈는 가장 큰 membervariable의 배수에서 끝나야 한다.