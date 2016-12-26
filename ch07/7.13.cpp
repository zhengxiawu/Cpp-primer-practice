#include "Sales_data_v2.h"
int main() {
  Sales_data total;
  if(std::cin>>total){
    Sales_data trans;
    while (std::cin>>trans) {
      if (total.isbn()==trans.isbn()) {
        total.combine(trans);
      }else{
        print(std::cout,total);
        total = trans;
      }
    }
    print(std::cout,total);
  }else{
    std::cerr << "No data!" << std::endl;
    return -1;
  }
  return 0;
}
