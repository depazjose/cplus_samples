#include "cow.h"


  cow::cow (std::string name_i, int age_i, unsigned char purpose_i, int country_i) {
    name = name_i;
    age = age_i;
    purpose = purpose_i;
    country = country_i;
  }

  cow::~cow() {
    
  }

  std::string cow::getName() {
    return name;
  }
    
  int cow::getAge() {
    return age;
  }

  unsigned char cow::getPurpose() {
    return purpose;
  }

  int cow::getCountry() {
    return country;
  }
  

