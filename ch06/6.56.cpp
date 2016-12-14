/*************************************************************************
	> File Name: 6.54.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年12月14日 星期三 21时48分18秒
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
typedef int (*fcp)(const int&,const int&);
int sum(const int &i1,const int &i2){
    return i1+i2;
}
int substract(const int &i1,const int &i2){
    return i1-i2;
}

int multi(const int &i1,const int &i2){
    return i1*i2;
}

int divi(const int &i1,const int &i2){
    return i1/i2;
}

int main()
{
    int i1=10,i2=2;
    vector<fcp> v1;
    v1.push_back(sum);
    v1.push_back(substract);
    v1.push_back(multi);
    v1.push_back(divi);
    cout<<v1[0](i1,i2)<<endl;
    cout<<v1[1](i1,i2)<<endl;
    cout<<v1[2](i1,i2)<<endl;
    cout<<v1[3](i1,i2)<<endl;
    return 0;
}
