/*************************************************************************
	> File Name: 3.14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月10日 星期四 22时31分42秒
 ************************************************************************/

#include<iostream>
#include<vector>
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
    std::cout<<v1[0]<<std::endl;

}
