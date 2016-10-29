/*************************************************************************
	> File Name: 1.18.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年10月29日 星期六 22时02分00秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int input_value,current_value,count = 1;
    //first input
    std::cin>>input_value;
    current_value = input_value;
    while(std::cin>>input_value)
    {
        if(input_value==current_value)
        {
            ++count;
        }
        else
        {
            std::cout<<"the number is:"<<current_value<<"and you input "<<count<<"times"<<std::endl;
            current_value = input_value;
            count = 1;
        }
    }
    std::cout<<"the number is:"<<current_value<<"and you input "<<count<<"times"<<std::endl;
    return 0;
}
