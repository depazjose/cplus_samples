#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
#include "cow.h"

int main(int argc, char *argv[]) {
  std::vector<int> ints;
  ints.push_back(199);
  ints.push_back(1);
  ints.push_back(200);
  ints.push_back(2);

  std::cout<<"The address of vector is      " << &ints << std::endl;
  std::cout<<"The address of vector[0] is   " << &ints[0] << std::endl;
  std::cout<<"The address of vector[1] is   " << &ints[1] << std::endl;
  std::cout<<"The address of vector[2] is   " << &ints[2] << std::endl;
  std::cout<<"The address of vector[3] is   " << &ints[3] << std::endl;
  std::cout<<"The address of vector[4] is   " << &ints[4] << std::endl;
  std::cout<<"The address last element is   " << *(ints.end()-1) << std::endl;

  std::cout << std::endl;

  std::vector<cow> cows;
  cows.push_back(cow("Paty", 21, meat, 3));
  cows.push_back(cow("Caty", 29, pet, 1));

  std::cout<<"The address of cows vector is      " << &cows << std::endl;
  std::cout<<"The cow[0].country value is        " << cows[0].getCountry() << std::endl;
  std::cout<<"The address of cow[0] is           " << &cows[0] << std::endl;
  std::cout<<"The address of cow[1] is           " << &cows[1] << std::endl;
  std::cout<<"The address of cow[2] is           " << &cows[2] << std::endl;

  return 0;
}





