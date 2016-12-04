/*************************************************************************
	> File Name: 6.17_B.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年12月04日 星期日 22时15分27秒
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
void convert_to_upper(string &s)
{
    for(char &i:s)
    {
        if(islower(i))
        {
            i=toupper(i);
        }
    }
}
int main()
{
    string t_str = "aaaaa";
    convert_to_upper(t_str);
    cout<<t_str<<endl;
    return 0;
}
