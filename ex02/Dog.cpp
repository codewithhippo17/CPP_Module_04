#include "Dog.hpp"

Dog::Dog() : Animal() {
  std::cout << "Dog Default Constructor called" << std::endl;
  this->type = "Dog";
  this->brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other) {
  std::cout << "Dog Copy Constructor called" << std::endl;
  this->type = other.type;
  this->brain = new Brain(*other.brain);
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
  std::cout << "Dog Destructor called" << std::endl;
  delete this->brain;
}

void Dog::makeSound() const { std::cout << "Woof" << std::endl; }

Brain *Dog::getBrain() const { return this->brain; }
