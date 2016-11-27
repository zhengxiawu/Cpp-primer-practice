/*************************************************************************
	> File Name: 5.14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月27日 星期日 21时34分42秒
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
    string s,pres,string_flag;
    int count=0,max_count = 0;
    vector<string> vs;
    while(cin>>s){
        vs.push_back(s);
    }
    cout<<"test"<<endl;
    pres = ' ';
    auto beg = vs.begin();
    while(beg!=vs.end()){
        if(pres==(*beg)&&(beg+1)!=vs.end()){
            ++count;
        }else{
            if((beg+1)==vs.end()){
                count++;
            }
            if(count>=max_count){string_flag=pres;max_count=count;}
            count=1;
            pres = *beg;
        }
        ++beg;
    }
    cout<<string_flag<<": "<<max_count<<endl;
    return 0;
}

