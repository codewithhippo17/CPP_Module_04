#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
  std::cout << "AAnimal Default Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) {
  std::cout << "AAnimal Copy Constructor called" << std::endl;
  *this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
  std::cout << "AAnimal Copy Assignment Operator called" << std::endl;
  if (this != &other) {
    this->type = other.type;
  }
  return *this;
}

AAnimal::~AAnimal() { std::cout << "AAnimal Destructor called" << std::endl; }

std::string AAnimal::getType() const { return this->type; }
