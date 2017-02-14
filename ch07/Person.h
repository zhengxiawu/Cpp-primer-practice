#ifndef PERSON_H
#define PERSON_H
#include<string>
#include<iostream>
using namespace std;
struct Person{
    public:    
  Person()=default;
  Person(const std::string s1,const std::string s2):name(s1),address(s2){}
  std::string get_name() const {return this->name;}
  std::string get_address() const {return this->address;}
    private:
  std::string name;
  std::string address;
};

std::ostream &print(ostream &os,const Person &p){
  os<<p.name<<" "<<p.address<<' \n';
  return os;
}
std::istream &read(istream &is,Person &p){
  is>>p.name>>p.address;
  return is;
}
#endif
