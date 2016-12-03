/*************************************************************************
	> File Name: 6.10.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年12月03日 星期六 22时31分27秒
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
void swap(int &p1,int &p2)
{
    int temp = p1;
    p1 = p2;
    p2 = temp;
}
int main()
{
    int i1 = 1,i2 = 2;
    int &a = i1,&b = i2;
    cout<<"befor change:"<<i1<<":"<<i2<<endl;
    swap(a,b);
    cout<<"after change:"<<i1<<":"<<i2<<endl;
    return 0;
}
