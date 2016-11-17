/*************************************************************************
	> File Name: vector_array_test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月17日 星期四 21时54分12秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> v1 = {1,2,3,4,5,6};
    for(auto i:v1)
    {
        i = i+2;
    }
    for(auto i:v1)
    {
        std::cout<<i<<std::endl;
    }
}
