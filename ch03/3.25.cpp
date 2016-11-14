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
    vector<unsigned> score(11,0);
    unsigned grade;
    auto begin = score.begin();
    while(cin>>grade)
    {
        (*(begin+grade/10))++;
    }
    for(auto i:score)
    {
        std::cout<<i<<std::endl;
    }

}
