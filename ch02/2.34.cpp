/*************************************************************************
	> File Name: 2.34.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月06日 星期日 22时06分49秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;
    std::cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<g<<std::endl;
    a = 42;b = 42;c = 42;
    std::cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<g<<std::endl;
}
