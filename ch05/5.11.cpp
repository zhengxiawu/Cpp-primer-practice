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
    unsigned aCnt = 0,eCnt = 0,iCnt = 0,oCnt = 0,uCnt=0,space_Cnt=0,zhibiao_Cnt=0,huanhang_Cnt=0;
    string s;
    while(cin.get(ch)){
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
            case ' ':
            ++space_Cnt;
            break;
            case '\t':
            ++zhibiao_Cnt;
            break;
            case '\n':
            ++huanhang_Cnt;
            break;
            
        }
    }
    cout<<"a:"<<aCnt<<'\t'<<"e:"<<eCnt<<'\t'<<"i:"<<iCnt<<'\t'<<"o:"<<oCnt<<'\t'<<"u:"<<uCnt<<'\t'<<endl<<"\\ t:"<<zhibiao_Cnt<<'\t'<<"\\ n:"<<huanhang_Cnt<<'\t'<<"space:"<<space_Cnt<<'\t';

    return 0;
}
