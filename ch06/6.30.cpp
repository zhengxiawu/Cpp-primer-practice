/*************************************************************************
	> File Name: 6.30.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年12月07日 星期三 22时39分10秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;
bool str_subrange(const string &str1, const string &str2)
{
    if(str1.size()==str2.size())
        return str1==str2;
    auto size =(str1.size() < str2.size())?str1.size():str2.size();
    for(decltype(size) i=0;i!=size;++i)
    {
        if(str1[i] != str2[i]){
            return;
        }
    }
}
int main()
{
    string s1="aaa",s2="AAA";
    bool test = str_subrange(s1,s2);
    return 0;
}
