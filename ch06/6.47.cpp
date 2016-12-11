/*************************************************************************
	> File Name: 6.33.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年12月07日 星期三 22时45分59秒
 ************************************************************************/
#include<cassert>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;
void cout_vector(vector<int> v1,unsigned index)
{
    unsigned sz = v1.size();
    if(index<sz)
    {
        cout<<v1[index]<<endl;
        cout_vector(v1,index+1);
    }
    #ifndef NDEBUG
    cerr<<"now the size is: "<< v1.size() <<endl;
    #endif
}
int main()
{
    vector<int> v1={1,2,3,4,5,6};
    cout_vector(v1,0);

    return 0;
}
