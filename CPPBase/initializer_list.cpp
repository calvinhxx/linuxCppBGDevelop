#include <iostream>
#include <string>
using namespace std;

void Test(initializer_list<string> str)
{
    for(auto x:str)
    {
        cout << x ;
    }
}

int main()
{
    Test( {string("1") ,string("2") ,string("3")} );
    return 0;
}