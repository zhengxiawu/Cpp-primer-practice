/*************************************************************************
	> File Name: 3.37_A.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月15日 星期二 22时34分09秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    std::cout<<"请输入长度："<<std::endl;
    std::cin>>n1>>n2;
    if(n1!=n2)
    {
        std::cout<<"unequal"<<std::endl;
        return 0;
    }
    std::cout<<"请输入数组一："<<std::endl;
    int a[n1],b[n2];
    for(unsigned i = 0;i<n1;i++)
    {
        std::cin>>a[i];
    }
    for(unsigned i = 0;i<n1;i++)
    {
        std::cin>>b[i];
    }
    for(unsigned i = 0;i<n1;i++)
    {
        if(a[i]!=b[i])
        {
            std::cout<<"unequal"<<std::endl;
            return 0;
        }
    }
    std::cout<<"equal"<<std::endl;


}

