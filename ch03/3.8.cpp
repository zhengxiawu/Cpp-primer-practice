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
    std::cin>>s1;
    string::size_type n;
    n=0;
    while(n<s1.size())
    {
        s1[n] = 'X';
        ++n;
    }
    std::cout<<s1<<std::endl;
    return 0;
}
