/*************************************************************************
	> File Name: 4.21.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月23日 星期三 21时59分43秒
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
    vector<int> v{1,2,3,4,5,6,7,8,9};
    for(auto &i:v)
    {
        i=((i%2==0)?i:i*2);
    }
    for(auto i:v)
    {
        cout<<i<<endl;
    }

    return 0;
}
