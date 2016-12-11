/*************************************************************************
	> File Name: 6.42.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年12月08日 星期四 22时36分04秒
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
string make_plural(size_t ctr,const string &word, const string &ending = "s")
{
    return (ctr>1)?word+ending:word;
}
int main()
{
    string s1="sucess",s2="failure";
    cout<<make_plural(1,s1)<<make_plural(2,s1)<<endl;
    cout<<make_plural(1,s2)<<make_plural(2,s2)<<endl;
    

    return 0;
}
