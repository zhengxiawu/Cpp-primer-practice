/*************************************************************************
	> File Name: 6.17.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年12月04日 星期日 22时07分27秒
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
bool detect_upper(const string &s)
{
    for(auto i:s)
    {
        if(isupper(i))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string t_string = "AAA";
    string f_string = "aaa";
    if(detect_upper(t_string))
    {
        cout<<"yes";
    }
    if(detect_upper(f_string))
    {
        cout<<"yes";
    }
    cout<<endl;

    return 0;
}
