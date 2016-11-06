/*************************************************************************
	> File Name: 2.35.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月06日 星期日 22时19分17秒
 ************************************************************************/

#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    const int i = 42;
    auto j = i;const auto &k = i;auto *p = &i;
    const auto j2 = i, &k2 = i;
    std::cout<<typeid(i).name()<<std::endl;
    std::cout<<typeid(j).name()<<std::endl;
    std::cout<<typeid(k).name()<<std::endl;
    std::cout<<typeid(p).name()<<std::endl;
    std::cout<<typeid(j2).name()<<std::endl;
    std::cout<<typeid(k2).name()<<std::endl;
}

