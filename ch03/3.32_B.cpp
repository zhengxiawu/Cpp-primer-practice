/*************************************************************************
	> File Name: 3.31.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月15日 星期二 21时44分45秒
 ************************************************************************/

#include<iostream>
#include<vector>
using std::vector;
using namespace std;
int main()
{
    vector<int> i = {0,1,2,3,4,5,6,7,8,9};
    vector<int> j = i;
    for(auto k:j)
    {
        std::cout<<k<<std::endl;
    }
    return 0;
}
