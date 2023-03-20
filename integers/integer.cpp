#include <iostream>
#include <string>
#include <typeinfo>

int main(int argc, char *argv[]) {
   int value = 0;
   int aux = 0;
   std::cin.unsetf(std::ios::dec);
   std::cin.unsetf(std::ios::hex);
   std::cin.unsetf(std::ios::oct);
   std::cin.unsetf(std::ios::oct);
   std::cout << typeid(true).name() << std::endl;
   do {
    std::cout << "Introduce integer value: ";
    std::cin >> aux;

    value = (int) aux;
    std::cout << "\t value: " << value << typeid(value).name() << std::endl;
   } while (value != 0);
   return 0;
}