#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void swap(int& a,int& b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

int main()
{
    vector<int> aa = {7,3,5,6,9,3,1,6,3,4,5,6};
    for(int i = 0; i < aa.size(); ++i)
    {
        for(int j = 0; j < i ; j++)
        {
            if(aa.at(i) <= aa.at(j))
            {
                swap(aa.at(i), aa.at(j));
            }
        }
    }
    return 0;
}
