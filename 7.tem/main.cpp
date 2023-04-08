//function template
//class template
//alias template
//variable template

//template concept

#include <algorithm>
#include <iostream>
#include <vector>

template<typename T>
T add(T a,T b)
{
    return a+b;
};

int main()
{
    int a = add<int>(1,1);
    double b = add<double>(2.5,5.1);

    std::cout << a << std::endl;
    std::cout << b << std::endl;

}