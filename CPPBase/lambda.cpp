#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int v1 = 42;
    auto f = [v1]() mutable ->int{ return ++v1; };
    auto val = f();
    cout << val << endl;
    return 0; 
}
