/*************************************************************************
	> File Name: 5.12.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月26日 星期六 22时49分04秒
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
    int ffCnt=0,flCnt=0,fiCnt=0;
    char ch,prch=' ';
    bool flag=true;
    while(cin>>ch){
        if(prch=='f'){
            switch(ch){
                case 'f':
                ++ffCnt;
                
                break;
                case 'l':
                ++flCnt;
                break;
                case 'i':
                ++fiCnt;
                break;
            }
        }
        prch=ch;
    }
    cout<<"ff:"<<ffCnt<<'\t'<<"fl:"<<flCnt<<'\t'<<"fi:"<<fiCnt<<'\t'<<endl;
    return 0;
}
