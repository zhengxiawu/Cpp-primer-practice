#ifndef PERSON_H
#define PERSON_H
#include<string>
#include<iostream>
using namespace std;
struct Person{
  std::string name;
  std::string address;
  std::string get_name() const {return this->name;}
  std::string get_address() const {return this->address;}
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
