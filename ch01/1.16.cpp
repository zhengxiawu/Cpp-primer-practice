/*************************************************************************
	> File Name: 1.16.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年10月29日 星期六 21时46分21秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int v,sum = 0;
    while(std::cin>>v)
    {
        sum+=v;
    }
    std::cout<<"所有数字加和为："<<sum<<std::endl;
}
