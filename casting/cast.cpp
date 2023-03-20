#include <iostream>
#include <string>
#include <typeinfo>

float flt = -7.44f;
int32_t sgn;
uint32_t unsgn;

int main(int argc, char *argv[]) {
 sgn = flt;
 unsgn = sgn;

 std::cout << " float: " << flt << std::endl;
 std::cout << " int32: " << sgn << std::endl;
 std::cout << "uint32: " << unsgn << std::endl;
 
 std::cout << std::endl;

 double weight = 10.99;

 std::cout << "Float:         " << weight << std::endl;
 std::cout << "Integer part:  " << (int) weight << std::endl;
 std::cout << "Fraction part: " << (int) ((weight - (int) weight) * 100000)  << std::endl;
 
 return 0;
}