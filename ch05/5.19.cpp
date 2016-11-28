/*************************************************************************
	> File Name: 5.19.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月27日 星期日 22时42分35秒
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
    do{
        string s1,s2,shorter_s;
        cout<<"please input two string:";
        if(cin>>s1>>s2){
            if(s1.size()>s2.size()){
                shorter_s = s2;
            }else{
                shorter_s = s1;
            }
            cout<<"the shorter is:"<<shorter_s<<endl;
        }
    }while(true);
    return 0;
}
