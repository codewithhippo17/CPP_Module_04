#include "Dog.hpp"

Dog::Dog() : Animal() {
  this->type = "Dog";
  this->brain = new Brain();
  std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
  this->type = other.type;
  this->brain = new Brain(*other.brain);
  std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
  std::cout << "Dog Copy Assignment Operator called" << std::endl;
  if (this != &other) {
    Animal::operator=(other);
    delete this->brain;
    this->brain = new Brain(*other.brain);
  }
  return *this;
}

Dog::~Dog() {
  delete this->brain;
  std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const { std::cout << "Woof" << std::endl; }

Brain *Dog::getBrain() const { return this->brain; }
