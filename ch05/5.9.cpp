/*************************************************************************
	> File Name: 5.9.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月26日 星期六 22时11分44秒
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
    int count = 0;
    string s; 
    while(cin>>s){
        for(auto sub_s:s)
        {
            
            if(sub_s=='a' || sub_s=='e' || sub_s=='i' || sub_s=='o' || sub_s=='u'){
                count+=1;
            }
        }
    }
    cout<<"the number is:"<<count<<endl;
    return 0;
}
