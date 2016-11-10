/*************************************************************************
	> File Name: 3.14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月10日 星期四 22时31分42秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
using std::vector;
int main()
{
    vector<int> v1;
    int num;
    while(std::cin>>num)
    {
        v1.push_back(num);
    }
    unsigned end = v1.size();
    for(unsigned i=0;i<end/2;++i)
    {
        std::cout<<v1[i]+v1[end-i-1];
    }

}
