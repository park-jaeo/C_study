#include <array>
#include <cstdint>
#include <iostream>

int main()
{
    //array
    int a[10];

    std::array<int,5> ia;
    std::cout << sizeof(ia) << std::endl;


    return 0;


}

//short  : 2byte    
//크기 256 -> -128 ~ +127

//int  : 4byte
//float : 4byte
//크기 4294967296(4.29억) -> -2.14억 ~ +2.14억

//long  : 8byte
//double : 8byte