/*************************************************************************
	> File Name: 6.27.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年12月07日 星期三 22时09分03秒
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
int cacu_sum(initializer_list<int> il)
{
    int sum=0;
    for(auto i:il)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    cout<<cacu_sum({1,2,3,4,5,6})<<endl;

    return 0;
}
