#include <iostream>

int main()
{
    int n = 1;
    switch(n)
    {
        case 1;
            std::cout << "1" <<std::endl;
            [[fallthrough]];
        case 2;
            std::cout << "2" <<std::endl;
            break;
        default:
            std::cout << "default" <<std::endl;
            break;
    }
    [[maybe_unused]] int debug;
}


        // case 1;
        //     std::cout << "1" <<std::endl;
        //     break;
        // // -> warning

        // case 1;
        //     std::cout << "1" <<std::endl;
        //     [[fallthrough]];
        // warning 안뜸
