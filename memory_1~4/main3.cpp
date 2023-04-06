#include <array>
#include <cstdint>
#include <iostream>

int main()
{
    uint64_t ui8;
    float f4;
    std::array<uint8_t,5> uia5;

    uint64_t *ui64ptr = &ui8;
    std::cout << sizeof(ui64ptr) << std::endl;
    std::cout << (uint64_t)ui64ptr << std::endl;

    return 0;
} 

//32비트 아키텍처: 포인터 크기 4바이트
//64비트 아키텍처: 포인터 크기 8바이트