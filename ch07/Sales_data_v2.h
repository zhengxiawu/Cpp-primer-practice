#ifndef _SALES_DATA_H
#define _SALES_DATA_H
#include<string>
#include<iostream>
using namespace std;
struct Sales_data{
  friend std::istream& operator >> (std::istream&,Sales_data&);
  friend Sales_data add(const Sales_data& lhs,const Sales_data& rhs);
  friend std::ostream &print(ostream &os, const Sales_data &item);
  friend std::istream &read(istream &is, Sales_data &item);
  Sales_data()=default;
  Sales_data(const std::string &s):bookNo(s){};
  Sales_data(const std::string &s, unsigned n,double p):
    bookNo(s),units_sold(n),revenue(p*n){};
  Sales_data(std::istream &is){is>>*this;};
  std::string isbn() const {return this->bookNo;}
  Sales_data& combine(const Sales_data&);
  inline double avg_price() const;
private:
  std::string bookNo;
  unsigned units_sold = 0;
  double sellingprice = 0.0;
  double saleprice = 0.0;
  double discount = 0.0;
  double revenue = 0.0;
};
Sales_data add(const Sales_data& lhs,const Sales_data& rhs);
std::ostream &print(ostream &os, const Sales_data &item);
std::istream &read(istream &is, Sales_data &item);

Sales_data add(const Sales_data& lhs, const Sales_data& rhs){
  Sales_data temp_sales;
  temp_sales.bookNo = lhs.bookNo;
  temp_sales.units_sold = lhs.units_sold + rhs.units_sold;
  temp_sales.revenue = lhs.revenue + rhs.revenue;
  return temp_sales;
}
std::ostream &print(ostream &os, const Sales_data &item){
  os<< item.isbn() <<" " << item.units_sold << " " << item.revenue << " " << item.avg_price()<<'\n';
  return os;
}
std::istream &read(istream &is, Sales_data &item){
  double price;
  is>> item.bookNo >>item.units_sold >> price;
  item.revenue = price * item.units_sold;
  return is;
}
Sales_data & Sales_data::combine(const Sales_data &rhs){
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}
inline double Sales_data::avg_price() const{
  if(units_sold!=0){
    return revenue/static_cast<double>(units_sold);
  }else{
    return 0;
  }
}
std::istream& operator>>(std::istream& in, Sales_data& s)
{
  double p;
  in >> s.bookNo >> s.units_sold>>p;
  s.revenue = s.units_sold*p;
  return in;
}
#endif
