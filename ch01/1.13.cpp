/*************************************************************************
	> File Name: 1.13.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年10月29日 星期六 21时29分04秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    //编写程序重现之前1.41节当中的所有练习，只是这里使用for循环
    //1.9
    int sum = 0;
    for(int val = 50;val<101;val++)
    {
        sum+=val;
    }
    std::cout<<"这里是练习1.9的输出"<<std::endl;
    std::cout<<sum<<std::endl;
    //1.10
    std::cout<<"这里是练习1.10的输出"<<std::endl;
    for(int val = 10; val>0;val--)
    {
        std::cout<<val<<std::endl;
    }
    //1.11
    int v1,v2;
    std::cout<<"请输入两个数作为练习1.11的输入，并且第一个小于第二个数"<<std::endl;
    std::cin>>v1;
    std::cin>>v2;
    for(int val = v1;val<v2;val++)
    {
        std::cout<<val<<std::endl;
    }
}
