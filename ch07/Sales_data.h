/*************************************************************************
	> File Name: Sales_data.h
	> Author: 
	> Mail: 
	> Created Time: 2016年11月07日 星期一 22时58分06秒
 ************************************************************************/

#ifndef _SALES_DATA_H
#define _SALES_DATA_H
#include<string>
#include<iostream>
using namespace std;
class Sales_data {
    friend std::istream& operator >> (std::istream&,Sales_data&);
    friend std::ostream& operator << (std::ostream&,const Sales_data&);
    friend bool operator < (const Sales_data&,const Sales_data&);
    friend bool operator == (const Sales_data&,const Sales_data&);
    public:
        Sales_data = default;
        Sales_data(const std::string &book):bookNO(book){}
        Sales_data(std::istream &is){is >> *this}
    public:
        Sales_data& operator+=(const Sales_data&);
        std::string isbn() const {return bookNO;}
    private:
        std::string bookNO;
        unsigned units_sold = 0;
        double sellingprice = 0.0;
        double saleprice = 0.0;
        double discount = 0.0;
};
inline bool compareIsbn(const Sales_data &lhs,const Sales_data &rhs){
    return lhs.isbn() == rhs.isbn();
}
Sales_data operator + (const Sales_data&, const Sales_data&);

inline bool operator==(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.units_sold == rhs.units_sold &&
           lhs.sellingprice == rhs.sellingprice &&
           lhs.saleprice == rhs.saleprice &&
           lhs.isbn() == rhs.isbn();
}
inline bool 

#endif
