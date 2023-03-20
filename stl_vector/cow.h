#ifndef COW_H
#define COW_H
#include <string>

enum cow_purpose { dairy, meat, hide, pet };

class cow {
  
  public:
    cow (std::string name_i, int age_i, unsigned char purpose_i, int country_i );

    std::string getName();
    
    int getAge() ;

    int getCountry() ;

    unsigned char getPurpose();

    ~cow();
  
  private:
    std::string name;
    int age;
    unsigned char purpose;  
    int country;
    int city;
    int home;
};

#endif