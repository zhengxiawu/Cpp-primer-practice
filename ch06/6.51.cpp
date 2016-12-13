/*************************************************************************
	> File Name: 6.51.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年12月13日 星期二 22时45分35秒
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
void f(){
    cout<<"this is 1"<<endl;
}
void f(int i){
    cout<<"this is 2"<<endl;
}
void f(int i,int j){
    cout<<"this is 3"<<endl;
}
void f(double i,double j=3.14){
    cout<<"this is 4"<<endl;
}
int main()
{
    //f(2.56,42);
    f(42);
    f(42,0);
    f(2.56,3.14);

    return 0;
}
