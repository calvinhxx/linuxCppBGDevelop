#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    vector<int> vec={1,2,3,4,5,6,7,8};
    int num = 3;
    auto result  = find(vec.cbegin(), vec.cend(), num);
    auto result1 = find(vec.cbegin(), vec.cend(), 10);
    
    if( result != vec.cend())
    {
        cout << "v contains:" << num << endl;
    }
    else
    {   
        cout << "v dos not contain:" << num << endl;
    }

        
    if( result1 != vec.cend())
    {
        cout << "v contains:" << 10 << endl;
    }
    else
    {   
        cout << "v dos not contain:" << 10 << endl;
    }
    return 0;
}
