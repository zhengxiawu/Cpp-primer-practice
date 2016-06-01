/*************************************************************************
	> File Name: my-ext-20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年06月01日 星期三 15时30分23秒
 ************************************************************************/

#include<iostream>
#include"../include/Sales_item.h"
using namespace std;
int main()
{
    Sales_item item;
    while(std::cin>>item)
    {
        std::cout<<item<<std::endl; 
    }
    return 0;
}
