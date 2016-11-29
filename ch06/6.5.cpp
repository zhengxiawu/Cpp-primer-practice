/*************************************************************************
	> File Name: 6.3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月29日 星期二 22时25分43秒
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
int face(int v1)
{
    int result = (v1>0)?v1:-v1;
    return result;
}
int main()
{
    int v1;
    cin>>v1;
    cout<<face(v1)<<endl;
}

