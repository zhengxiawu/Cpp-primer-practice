/*************************************************************************
	> File Name: 3.31.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月15日 星期二 21时44分45秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int i[10] = {0,1,2,3,4,5,6,7,8,9};
    int j[10];
    for(unsigned k=0;k<10;k++)
    {
        j[k] = i[k];
        std::cout<<j[k]<<std::endl;
    }
    return 0;
}
