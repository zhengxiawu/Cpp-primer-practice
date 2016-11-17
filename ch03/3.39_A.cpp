/*************************************************************************
	> File Name: 3.39_A.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月15日 星期二 23时08分30秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
using std::string;
int main()
{
    std::cout<<"请输入两个字符串："<<std::endl;
    string s1,s2;
    std::cin>>s1>>s2;
    if(s1==s2){
        std::cout<<"相等"<<std::endl;
    }
    if(s1>s2)
    {
        
        std::cout<<"第一个大于第二个"<<std::endl;
    }
    if(s1<s2)
    {
        
        std::cout<<"第二个大于第一个"<<std::endl;
    }  
}

