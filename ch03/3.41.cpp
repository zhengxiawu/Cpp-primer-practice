/*************************************************************************
	> File Name: 3.41.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月17日 星期四 21时43分20秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[] = {1,2,3,4};
    vector<int> ivector(begin(a),end(a));
    for(i:ivector)
    {
        std::cout<<i<<std::endl;
    }
}

