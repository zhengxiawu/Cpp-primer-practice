/*************************************************************************
	> File Name: 4.22_A.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月23日 星期三 22时10分32秒
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
    vector<int> v{50,70,75,80,90,95};
    for(auto i:v)
    {
        if(i>90){
            cout<<"high pass"<<endl;
        }else if(i>75){
            cout<<"pass"<<endl;
        }else if(i>60){
            cout<<"low pass"<<endl;
        }else{
            cout<<"fail"<<endl;
        }

    }

    return 0;
}
