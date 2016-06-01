/*************************************************************************
	> File Name: ext-16.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年06月01日 星期三 14时48分09秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int sum = 0,val = 0;
    while(std::cin>>val)
    {
        sum += val;
    }
    std::cout<<"sum is :"<<sum<<std::endl;
    return 0;
}
