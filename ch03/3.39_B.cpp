/*************************************************************************
	> File Name: 3.39_A.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月15日 星期二 23时08分30秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstring>
using namespace std;
using std::string;
int main()
{
    std::cout<<"请输入两个字符串的长度："<<std::endl;
    int n1,n2;
    std::cin>>n1>>n2;
    char s1[n1],s2[n2];
    for(unsigned i = 0;i<n1;i++)
    {
        std::cin>>s1[i];
    }
    for(unsigned i=0;i<n2;i++)
    {
        std::cin>>s2[i];
    }
    int temp = strcmp(s1,s2);
    if(temp == 0){
        std::cout<<"相等"<<std::endl;
    }
    if(temp>0)
    {
        
        std::cout<<"第一个大于第二个"<<std::endl;
    }
    if(temp<0)
    {
        
        std::cout<<"第二个大于第一个"<<std::endl;
    }  
}

