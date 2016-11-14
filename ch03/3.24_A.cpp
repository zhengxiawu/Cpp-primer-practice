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
    int pre,num;
    if(std::cin>>pre){
        v1.push_back(pre);
        while(std::cin>>num)
        {
            v1.push_back(num);
        }
    }
    auto it = v1.begin();
    auto end = v1.end();
    while(it!=end-1)
    {
        std::cout<<*it+*(it+1)<<std::endl;
        ++it;
    }

}
