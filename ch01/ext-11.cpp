/*************************************************************************
	> File Name: ext-11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年06月01日 星期三 14时36分59秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    std::cout << "Enter two numbers:" <<std::endl;
    int v1 = 0,v2 = 0,start = 0,end = 0;
    std::cin >> v1 >> v2;
    if(v1<=v2)
    {
        start = v1;
        end = v2;
    }
    else
    {
        start = v2,end = v1;
    }
    while(start<=end)
    {
        std::cout<<start<<std::endl;
        start++;
    }
    return 0;
}
