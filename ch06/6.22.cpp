/*************************************************************************
	> File Name: 6.22.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年12月04日 星期日 22时52分34秒
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
void change_pointer(int *&p1,int *&p2)
{
    int *temp;
    temp = p1;
    p1 = p2;
    p2 = temp;
}
int main()
{
    int a=1,b=2;
    int *p1=&a,*p2=&b;
    cout<<*p1<<*p2<<endl;
    change_pointer(p1,p2);
    cout<<*p1<<*p2<<endl;
    return 0;
}
