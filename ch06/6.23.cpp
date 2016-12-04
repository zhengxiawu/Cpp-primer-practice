/*************************************************************************
	> File Name: 6.23.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年12月04日 星期日 22时59分51秒
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
void print(int *p,const unsigned size)
{
    for(unsigned i=0;i<size;i++)
    {
        cout<<*p;
        ++p;
    }
    cout<<endl;
}
int main()
{
    int i=0,j[2]={0,1};
    print(&i,1);
    print(j,2);

    return 0;
}
