/*************************************************************************
	> File Name: 3.43_A.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月17日 星期四 22时29分51秒
 ************************************************************************/

#include<iostream>
using namespace std;
using int_array = int[4];
int main()
{
    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for(int_array &row :a){
        for(int col: row){
            std::cout<< col<<' ';
        }
        std::cout<<std::endl;
    }
    return 0;
}
