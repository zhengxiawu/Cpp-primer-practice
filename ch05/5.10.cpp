/*************************************************************************
	> File Name: 5.10.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月26日 星期六 22时22分03秒
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
    unsigned aCnt = 0,eCnt = 0,iCnt = 0,oCnt = 0,uCnt=0;
    char ch;
    while(cin>>ch){
        switch(ch){
            case 'a':
            case 'A':
            ++aCnt;
            break;
            case 'e':
            case 'E':
            ++eCnt;
            break;
            case 'i':
            case 'I':
            ++iCnt;
            break;
            case 'o':
            case 'O':
            ++oCnt;
            break;
            case 'u':
            case 'U':
            ++uCnt;
            break;
            
        }
    }
    cout<<"a:"<<aCnt<<'\t'<<"e:"<<eCnt<<'\t'<<"i:"<<iCnt<<'\t'<<"o:"<<oCnt<<'\t'<<"u:"<<uCnt<<'\t'<<endl;

    return 0;
}
