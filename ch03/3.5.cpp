/*************************************************************************
	> File Name: 3.5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月08日 星期二 22时15分56秒
 ************************************************************************/

#include<iostream>
using namespace std;
using std::string;
int main()
{
    string s1,s2;
    while(getline(std::cin,s1))
    {
        s2+=s1;
    }
    std::cout<<s2<<std::endl;
    s2 = "";
    while(std::cin>>s1)
    {
        s2+=s1;
    }
    std::cout<<s2<<std::endl;

}
