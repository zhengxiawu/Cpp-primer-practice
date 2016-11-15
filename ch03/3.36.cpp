/*************************************************************************
	> File Name: 3.36.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月15日 星期二 22时31分06秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int a[2] = {1,1};
    int *p = a;
    *p = 0;
    ++p;
    *p = 0;
    for(auto i:a)
    {
        std::cout<<i<<std::endl;
    }
}
