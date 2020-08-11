#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main()
{
    //初始化有序容器
    map<string, size_t> word_count;
    set<string> exclude = {"the", "but", "and", "or", "an", "a"};
    map<string, string> authors = { {"Joyce", "James"}, {"Austen","Jane"}, {"Dickens","Charles"}};

    for(const auto x:authors)
    {
        cout << x.first << " " << x.second << endl;
    }
    for(const auto x:exclude)
    {
        cout << x << endl;
    }
    return 0;
}
