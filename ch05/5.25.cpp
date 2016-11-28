/*************************************************************************
	> File Name: 5.23.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月28日 星期一 22时40分35秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>
using namespace std;
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;
int main()
{
    
    int i1,i2;
    while(cin>>i1>>i2){
        try{
            if(i2==0){
                throw runtime_error("除数不能为0");
            }
            cout<<(i1/i2)<<endl;
        }catch(runtime_error err){
            cout<< err.what()
                << "是否在尝试一次？Y/N"<<endl;
            char c;
            cin>>c;
            if(!cin || c=='N'){
                break;
            }

        }
    }
    cout<<(i1/i2)<<endl;
    return 0;
}
