#include <string>

clas Cat
{
    public:
    void setName(std::string name)
    {
        //mName = name;  L-value : 1copy
        //mName = std::move(name); R-value : zerocopy
    };
private:
    std::string mName;
};

int main()
{
    Cat kitty;
    std::string s = "kitty";

    kitty.setName(s);
    kitty.setName("nabi");
} 