/*************************************************************************
	> File Name: 5.3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月26日 星期六 20时40分16秒
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
    int sum = 0,val = 1;
    while(val<=10) sum+=val,++val;
    cout<<"sum of 1 to 10 inclusive is"<<sum<<endl;
    return 0;
}
