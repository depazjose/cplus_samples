#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
   std::cout << "Hi There!" << std::endl;
   std::string str;
   std::cout << "Introduce your name: ";
   std::cin >> str;
   std::cout << str;
   return 0;
}