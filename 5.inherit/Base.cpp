class Base
{
private:
    int pri;
protected:
    int pro;

public: //protected from Derived class
    void setPRI(int n)
    {
        pri = n;
    }
    void setPRO(int n)
    {
        pro = n;
    }
};

class Derived : private Base
//protected상속 : Base클래스의 public을 protected로 받는다.
//private 상속 : Base클래스의 public, protected를 private로 받는다.
{
public:
    void test()
    {
        Base::pro = 100;
    }

};


int main(int argc, char const *argv[])
//argc : argument count
//argv : argument vector
{
    Derived derived;
    derived.setPRO(10);
    derived.setPRI(100);
}