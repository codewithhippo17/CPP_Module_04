#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <string>

class Dog : public Animal {
protected:
  std::string type;

public:
  Dog();
  Dog(const Dog &);
  Dog &operator=(const Dog &);
  ~Dog();

  void makeSound(void);
};

#endif // CAT_HPP
