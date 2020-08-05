#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int test()
{
    cout << "1" << endl;
    return 1;
}

int main()
{
    auto func = test;    //auto  存储函数对象
    func();
    auto funlamb = []() ->int {
         cout << "lambda" << endl;
    };
    funlamb();
    return 0;
}
