/*************************************************************************
	> File Name: 3.6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月08日 星期二 22时41分27秒
 ************************************************************************/

#include<iostream>
using namespace std;
using std::string;
int main()
{
    string s1;
    string s2;
    getline(cin,s1);
    for(decltype(s1.size()) index = 0;index<s1.size();++index)
    {
        if(!ispunct(s1[index]))
        {s2+=s1[index];}
        

    }
    std::cout<<s2<<std::endl;
    return 0;
}
