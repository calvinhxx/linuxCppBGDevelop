#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {0,1,2,3,4,5,6,7,8,9};
    
    //vec.end()指向容器“尾后” 容器最后一个元素的下一个
    for(auto i = vec.begin(); i != vec.end() ;++i)
    {
        *i = (*i)*2;
    } 
    for(auto x:vec)
    {
        std::cout << x << std::endl;
    }
}