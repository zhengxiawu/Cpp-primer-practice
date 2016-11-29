/*************************************************************************
	> File Name: 6.7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月29日 星期二 22时49分35秒
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
int test(){
    static unsigned int i = 0;
    return (i++>=1)?1:0;
}
int main()
{
    cout<<test()<<endl;
    cout<<test()<<endl;
    cout<<test()<<endl;
    cout<<test()<<endl;
    cout<<test()<<endl;
    cout<<test()<<endl;

    return 0;
}
