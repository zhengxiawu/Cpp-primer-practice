/*************************************************************************
	> File Name: Sales_data.h
	> Author: 
	> Mail: 
	> Created Time: 2016年11月07日 星期一 22时58分06秒
 ************************************************************************/

#ifndef _SALES_DATA_H
#define _SALES_DATA_H

#include<string>
using namespace std;
struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double price = 0.0;
};

#endif
