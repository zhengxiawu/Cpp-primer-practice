/*************************************************************************
	> File Name: 2.40.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月07日 星期一 21时58分40秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
struct Sales_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double price = 0.0;
};
int main()
{
    Sales_data data1,data2;
    double total = 0;
    std::cout<<"now the problem 1.21"<<std::endl;
    std::cin >> data1.bookNo>>data1.units_sold>>data1.price;
    std::cin >> data2.bookNo>>data2.units_sold>>data2.price;
    if (data1.bookNo == data2.bookNo)
    {
        std::cout<< "the bookNo is:"<<data1.bookNo<<std::endl;
        std::cout<< "the sold book is:"<<data1.units_sold+data2.units_sold<<std::endl;
        std::cout<< "the total price is:"<<data1.price*data1.units_sold+ data2.price*data2.units_sold<<std::endl;

    }
    std::cout<<"now the problem 1.22"<<std::endl;
    int total_book_num = 0;
    double total_book_price = 0.0;
    while(std::cin>>data1.bookNo>>data1.units_sold>>data1.price)
    {
        total_book_num += data1.units_sold;
        total_book_price += data1.units_sold*data1.price;
    }
    std::cout<< "the bookNo is:"<<data1.bookNo<<std::endl;
    std::cout<< "the sold book is:"<<total_book_num<<std::endl;
    std::cout<< "the total price is:"<<total_book_price<<std::endl;
 
    std::cout<<"now the problem 1.23"<<std::endl;
    total_book_num = 0;
    total_book_price= 0.0;
    std::cin >> data1.bookNo;
    if(std::cin >> data1.bookNo>>data1.units_sold>>data1.price)
    {   
        total_book_num += data1.units_sold;
        total_book_price += data1.units_sold*data1.price;
        while(std::cin>>data2.bookNo>>data2.units_sold>>data2.price)
        {
            if (data1.bookNo == data2.bookNo){
                total_book_num += data1.units_sold;
                total_book_price += data1.units_sold*data1.price;
            }
            else
            {
                std::cout<< "the bookNo is:"<<data1.bookNo<<std::endl;
                std::cout<< "the sold book is:"<<total_book_num<<std::endl;
                std::cout<< "the total price is:"<<total_book_price<<std::endl;

                data1.bookNo = data2.bookNo;
                data1.units_sold = data2.units_sold;
                data1.price = data2.price;
                total_book_num += data1.units_sold;
                total_book_price += data1.units_sold*data1.price;
            }
        
        }
        std::cout<< "the bookNo is:"<<data1.bookNo<<std::endl;
        std::cout<< "the sold book is:"<<total_book_num<<std::endl;
        std::cout<< "the total price is:"<<total_book_price<<std::endl;

    }
    else{
        std::cout<< "no input "<<std::endl;
        std::cout<<data1.bookNo<<std::endl;
    }
    return 0;
}
