#ifndef COW_H
#define COW_H
#include <string>

enum cow_purpose { dairy, meat, hide, pet };

class cow {
  
  public:
    cow (std::string name_i, int age_i, unsigned char purpose_i );

    std::string getName();
    
    int getAge() ;

    unsigned char getPurpose();

    ~cow();
  
  private:
    std::string name;
    int age;
    unsigned char purpose;  
};

#endif