#include <iostream>

class MyType
{
public:
    MyType();
private:
    int a;
    double b;
};

int main()
{
    std::cout << sizeof(MyType) << std::endl;
}