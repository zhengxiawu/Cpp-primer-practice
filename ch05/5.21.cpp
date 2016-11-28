/*************************************************************************
	> File Name: 5.20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月28日 星期一 21时46分08秒
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
int main()
{
    string s,pres="  ";
    bool flag = true;
    while(cin>>s){
        if(s[0]<'A'||s[1]>'Z')
        {
            continue;
        }
        if(pres==s){
            cout<<s<<endl;
            flag = false;
            break;
        }
        pres = s;
    }
    if(flag){
        cout<<"没有一样的";
    }
    return 0;
}
