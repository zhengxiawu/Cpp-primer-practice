/*************************************************************************
	> File Name: 3.40.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月17日 星期四 21时13分51秒
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[] = "this is s1";
    char s2[] = "this is s2";
    strcat(s1,s2);
    char s3[] = "";
    strcpy(s3,s1);
    std::cout<<s3<<std::endl;
}

