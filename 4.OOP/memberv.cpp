#include <iostream>

class MyClass {
public:
    MyClass() { value = 0; }
    void setX(int x) { value = x; }
    int getX() { return value; }
private:
    int value;
};

int main() {
    MyClass obj;
    obj.setX(42);
    std::cout << obj.getX() << std::endl;
    return 0;
}


