/*************************************************************************
	> File Name: 3.37_A.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月15日 星期二 22时34分09秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
using std::vector;
int main()
{
    int n1,n2;
    std::cout<<"请输入长度："<<std::endl;
    std::cin>>n1>>n2;
    if(n1!=n2)
    {
        std::cout<<"unequal"<<std::endl;
        return 0;
    }
    std::cout<<"请输入数组一："<<std::endl;
    vector<int> a,b;
    int temp;
    for(unsigned i = 0;i<n1;i++)
    {
        std::cin>>temp;
        a.push_back(temp);
    }
    for(unsigned i = 0;i<n1;i++)
    {
        std::cin>>temp;
        b.push_back(temp);
    }
    if(a==b){
    std::cout<<"equal"<<std::endl;
    }else{
        std::cout<<"unequal"<<std::endl;
    }
}

