/*************************************************************************
	> File Name: 5.5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月26日 星期六 21时42分55秒
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
    string grade_string = "ffffffEDCBA";
    int point = 0;
    while(cin>>point)
    {
        if(point>100 || point < 0)
        {
            cout<<"invalid number"<<endl;
        }else{

        cout<<"the grade is: "<<grade_string[point/10]<<endl;
        }
    }
    return 0;
}
