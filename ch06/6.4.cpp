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
void fact()
{
    int v1;
    cout<<"请输入一个数字:"<<endl;
    cin>>v1;
    int result=1;
    while(v1>1){
        result *=v1--;
    }
    cout<<"输出的结果为："<<result<<endl;
}
int main()
{
    fact();
    return 0;
}
