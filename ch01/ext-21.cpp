/*************************************************************************
	> File Name: ext-21.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年06月01日 星期三 15时35分20秒
 ************************************************************************/

#include<iostream>
#include "../include/Sales_item.h"
using namespace std;
int main()
{
    Sales_item item1,item2;
    std::cin>>item1>>item2;
    if(item1.isbn()==item2.isbn())
    {
        std::cout<<item1+item2<<endl;
        return 0;
    }
    else
    {
        std::cerr << "we need same isbn"<<std::endl;
        return -1;
    }
}
