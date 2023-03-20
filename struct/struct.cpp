#include <iostream>
#include <string>
#include <typeinfo>

enum cow_purpose { dairy, meat, hide, pet };

struct cow {
  std::string name;
  int age;
  unsigned char purpose;
};

int main(int argc, char *argv[]) {
  cow my_cow;
  my_cow.age = 5;
  my_cow.name = "Betsy";
  my_cow.purpose = pet;
 
  std::cout << my_cow.name << " is a type-" << (float) my_cow.purpose << " cow" << std::endl;
 
  return 0;
}