/*************************************************************************
	> File Name: 6.44.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年12月11日 星期日 22时19分09秒
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
inline bool isShorter(const string &s1,const string &s2)
{
    return s1.size()<s2.size();
}
int main()
{
    string s1="test",s2 = "test2";
    cout<<isShorter(s1,s2)<<endl;

    return 0;
}
