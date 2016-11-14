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
using std::string;
void int_out_put(vector<int> v1)
{

    std::cout<<v1.size()<<std::endl;
    for(auto it = v1.begin();
       it != v1.end(); ++it)
    {
        std::cout<<*it<<std::endl;
    }
}
void string_out_put(vector<string> v1)
{
    std::cout<<v1.size()<<std::endl;
    for(auto it = v1.begin();
       it!=v1.end() && !it->empty(); ++it)
    {
        for(auto it2 = it->begin();it2!=it->end();++it2)
        {
            *it2 = toupper(*it2);
        }
        std::cout<<*it<<std::endl;
    }
}
int main()
{
    vector<int> v1{1,2,3,4,5,6,7,8,9,10};
    for(auto it = v1.begin();it!=v1.end();++it)
    {
        *it = 2* *it;
    }
    int_out_put(v1);
}
