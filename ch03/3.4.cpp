/*************************************************************************
	> File Name: 3.4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月08日 星期二 22时09分05秒
 ************************************************************************/

#include<iostream>
using namespace std;
using std::string;
int main()
{
    string s1,s2;
    std::cin>>s1;
    std::cin>>s2;
    if(s1==s2)
    {
        std::cout<<s1<<std::endl;
    }
    else if (s1>s2)
    {
        std::cout<<s1<<std::endl;
    }else{

        std::cout<<s2<<std::endl;
    }
    if(s1.size()==s2.size())
    {
        return 0;
    }
    else{
        if(s1.size()>s2.size()){
            std::cout<<s1<<std::endl;
        }else{
            std::cout<<s2<<std::endl;
        }
    }
    return 0;
}

