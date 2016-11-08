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
    for(char c :s1)
    {
        c = 'X';
    }
    std::cout<<s1<<std::endl;
    return 0;
}
