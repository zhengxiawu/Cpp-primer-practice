/*************************************************************************
	> File Name: 6.11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年12月03日 星期六 22时50分45秒
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
void reset(int &i){
    i=0;
}
int main()
{
    int a = 1;
    cout<<"before reset:"<<a<<endl;
    reset(a);
    cout<<"after reset:"<<a<<endl;

    return 0;
}
