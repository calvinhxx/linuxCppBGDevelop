#include<iostream>
#include<typeinfo>

using namespace std;

int fun()
{
    cout << "fun" << endl;
    return 1;
}
int main()
{
    //auto   编译器类型自动判断
    int val1 = 1;
    int val2 = 1;
    auto item = val1 + val2;
    cout << item << endl;
    
    //decltype 返回操作数的数据类型，编辑并不实际调用函数f
    decltype(fun()) sum = 3;
    cout << sum << endl;
    cout << typeid(sum).name() << endl;

    const int ci = 0;
    const int& cj = ci;
    decltype(cj) x = 0;
    decltype(cj) y = x;  //y类型为 const int&ss
}
