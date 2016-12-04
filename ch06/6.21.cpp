/*************************************************************************
	> File Name: 6.21.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年12月04日 星期日 22时49分42秒
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
int return_big(int i,int *pi)
{
    if(i>*pi)
    {
        return i;
    }else{
        return *pi;   
    }
}
int main()
{
    int a=1,b=2;
    cout<<return_big(a,&b)<<endl;

    return 0;
}
