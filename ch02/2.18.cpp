/*************************************************************************
	> File Name: 2.18.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月02日 星期三 22时10分52秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    //首先定义我们需要的变量
    int a=1,b=2;
    int *p = &a;
    std::cout<<"the pointer value is:"<<p<<" and the pointed object value is "<<*p<<std::endl;
    //改变指针的值
    p++;
    std::cout<<"change the pointer value:"<<p<<std::endl;
    p = &b;
    std::cout<<"change the pointed object the pointer value is:"<<p<<" and the pointed object value is "<<*p<<std::endl;
}
