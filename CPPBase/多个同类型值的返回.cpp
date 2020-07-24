#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> test()
{
    return {"1+" ,"2+", "3+"};
};

int main()
{
    vector<string> str = test();
    cout << str.at(0) << str.at(1) << str.at(2);
    return 0;
}


