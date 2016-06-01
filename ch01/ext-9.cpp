/*************************************************************************
	> File Name: ext-9.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年06月01日 星期三 14时27分55秒
 ************************************************************************/

#include<iostream>
int main()
{
    int sum = 0, val = 50;
    while(val<=100)
    {
        sum += val;
        val++;
    }
    std::cout << "Sum of 50 to 100 is"
              << sum << std::endl;
    return 0;
}
