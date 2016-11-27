/*************************************************************************
	> File Name: 5.17.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月27日 星期日 22时32分43秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;
int main()
{
    vector<int> v1 = {1,2,3,4,5,6};
    vector<int> v2 = {1,2,4,5,6};
    if(v1[0]==v2[0])
    {
        cout<<"yes"<<endl;
    }
    return 0;
}
