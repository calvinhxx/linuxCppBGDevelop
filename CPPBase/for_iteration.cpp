#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str("some");
    //只是读取容器数据,既不修改容器大小也不修改容器数据
    for(auto c : str)
    {
        cout << c << endl;
    }
    //修改容器数据不修改容器大小
    for(auto& c : str)
    {
        c = toupper(c);
        cout << c << endl;
    }
    return 0;
}