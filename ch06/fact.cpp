/*************************************************************************
	> File Name: fact.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月29日 星期二 23时01分26秒
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
#include"Chapter6.h"
int fact(int v1){
    int result = 1;
    while(v1>1){
        result*=v1--;
    }
    return result;
}
