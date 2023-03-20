#include <iostream>
#include <string>
#include <typeinfo>

enum cow_purpose { dairy, meat, hide, pet };

class cow {
  
  public:
    cow (std::string name_i, int age_i, unsigned char purpose_i ) {
    name = name_i;
    age = age_i;
    purpose = purpose_i;
    }

    std::string getName() {
      return name;
    }
    
    int getAge() {
      return age;
    }

    unsigned char getPurpose() {
      return purpose;
    }
  

  private:
    std::string name;
    int age;
    unsigned char purpose;
};

int main(int argc, char *argv[]) {
  cow my_cow("Betsy", 5, pet);
 
  std::cout << my_cow.getName() << " is a type-" << (float) my_cow.getPurpose() << " cow" << std::endl;
  std::cout << my_cow.getName() << " is " << (float) my_cow.getAge() << std::endl;
  return 0;
}