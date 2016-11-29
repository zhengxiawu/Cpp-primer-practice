/*************************************************************************
	> File Name: fact_main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月29日 星期二 23时04分13秒
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
#include"Chapter6.h";
int main()
{
    int v1;
    cout<<"请输入一个数字："<<endl;
    cin>>v1;
    cout<<"这个数字的乘介为："<<fact(v1)<<endl;

    return 0;
}
