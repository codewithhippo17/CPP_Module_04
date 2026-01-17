#include "Dog.hpp"

Dog::Dog() : AAnimal() {
  std::cout << "Dog Default Constructor called" << std::endl;
  this->type = "Dog";
  this->brain = new Brain();
}

Dog::Dog(const Dog &other) : AAnimal(other) {
  std::cout << "Dog Copy Constructor called" << std::endl;
  this->brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other) {
  std::cout << "Dog Copy Assignment Operator called" << std::endl;
  if (this != &other) {
    AAnimal::operator=(other);
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
