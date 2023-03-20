#include <iostream>
#include <string>
#include <typeinfo>
#include "cow.h"

int a = 37;
int *ptr;

int main(int argc, char *argv[]) {

  cow *cowPtr = new cow("Alexa", 2, pet);
  std::cout << " cow pointer is pointing to address " << cowPtr << std::endl;
  std::cout << " the address of cow pointer is      " << &cowPtr << std::endl;
  std::cout << " cow name we have                   " << cowPtr->getName() << std::endl;
 
  delete cowPtr;

  ptr = &a;
  std::cout << "            The content of a is " << a << std::endl;
  std::cout << "     ptr is pointing to address " << ptr << std::endl;
  std::cout << "            The address of a is " << &a << std::endl;
  std::cout << " Where ptr is pointing, we have " << *ptr << std::endl;
  std::cout << "          The address of ptr is " << &ptr << std::endl;
  std::cout<<std::endl;

  cow my_cow("Betsy", 5, pet);
  std::cout << my_cow.getName() << " is a type-" << (float) my_cow.getPurpose() << " cow" << std::endl;
  std::cout << my_cow.getName() << " is " << (float) my_cow.getAge() << std::endl;
  return 0;
}