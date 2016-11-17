/*************************************************************************
	> File Name: 3.42.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月17日 星期四 21时47分48秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1{1,2,3,4,5,6};
    int a[v1.size()];
    auto it = v1.begin();
    for(auto &i:a)
    {
        i=*it;
        it++;
    }
    for(auto i:a)
    {
        std::cout<<i<<std::endl;
    }
    
    return 0;
}

