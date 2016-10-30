/*************************************************************************
	> File Name: 1.22.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年10月30日 星期日 21时51分25秒
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
    Sales_item total_item,curr_item;
    int count=0;
    if(std::cin>>curr_item)
    {
        count+=1;
        total_item = curr_item;
        while(std::cin>>curr_item)
        {
            if(curr_item.isbn()==total_item.isbn()){
                count+=1;
            }else{
                std::cout<<"目前的数据为："<<total_item<<std::endl;
                std::cout<<"目前的数据量为："<<count<<std::endl;
                total_item = curr_item;
            }
        }
        std::cout<<"目前的数据为："<<total_item<<std::endl;
        std::cout<<"目前的数据量为："<<count<<std::endl;
        total_item = curr_item;
    }else{
        std::cout<<"没有数据，请至少输入一个数据"<<std::endl;
    }
    

}

