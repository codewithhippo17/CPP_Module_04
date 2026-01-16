#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <string>

class Cat : public Animal {
protected:
  std::string type;

public:
  Cat();
  Cat(const Cat &);
  Cat &operator=(const Cat &);
  ~Cat();

  void makeSound(void);
};

#endif // CAT_HPP
