/*************************************************************************
	> File Name: 2.4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年10月31日 星期一 22时24分21秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    unsigned u = 10,u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout <<u-i << std::endl;
}

