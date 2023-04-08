//unique_ptr <- exclusive ownership
//shared_ptr <- shared ownership
//RAII를 제공해야 함

//Reference count는 레퍼런스의 갯수를 추적하여 동작함
#include <iostream>
#include <memory>

class Cat 
{
public:
    Cat()
    {
        std::cout << "cat constructor" << std::endl;
    }
    ~Cat()
    {
        std::cout << "cat destructor" << std::endl;
    }
    // std::shared_ptr<Cat> mVar;
    std::shared_ptr<Cat> mFriend;
};

int main()
{
    std::shared_ptr<Cat> pKitty = std::make_shared<Cat>();
    std::shared_ptr<Cat> pNabi = std::make_shared<Cat>();
    
    pKitty->mFriend = pNabi;
    pNabi->mFriend = pKitty;
    // pNabi.friend -> pKitty.friend
    //  pKitty.friend-> pNabi.friend 2byte memory leak





    // std::shared_ptr<Cat> pKitty = std::make_shared<Cat>();
    // mPtr->mVar = mPtr;

    // std::cout << "count: " << mPtr.use_count() << std::endl;

    //cat.mVar ->cat.mVar : 2byte memory leak

    return 0;
}