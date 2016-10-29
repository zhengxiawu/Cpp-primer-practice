/*************************************************************************
	> File Name: 1.11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年10月29日 星期六 20时32分24秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int v1,v2,temp;
    std::cin>>v1;
    std::cin>>v2;
    if(v1>v2)
    {
        temp = v1;
        v1=v2;
        v2=temp;
    }
    while(v1<=v2)
    {
        std::cout<<v1<<std::endl;
        v1++;
    }
}
