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
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10,"hi"};
    std::cout<<"v1:"<<std::endl;
    int_out_put(v1);
    std::cout<<"v2:"<<std::endl;
    int_out_put(v2);
    std::cout<<"v3:"<<std::endl;
    int_out_put(v3);
    std::cout<<"v4:"<<std::endl;
    int_out_put(v4);
    std::cout<<"v5:"<<std::endl;
    int_out_put(v5);
    std::cout<<"v6:"<<std::endl;
    //string_out_put(v6);
    std::cout<<"v7:"<<std::endl;
    string_out_put(v7);

}
