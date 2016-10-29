/*************************************************************************
	> File Name: 1.9.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年10月29日 星期六 20时20分48秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int sum=0,val = 50;
    while(val<=100)
    {
        sum+=val;
        ++val;
    }
    std::cout<<sum<<std::endl;
    return 0;
}
