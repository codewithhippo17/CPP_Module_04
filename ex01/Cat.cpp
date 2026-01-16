#include "Cat.hpp"

Cat::Cat() : Animal() {
  this->type = "Cat";
  this->brain = new Brain();
  std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
  this->type = other.type;
  this->brain = new Brain(*other.brain);
  std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
  std::cout << "Cat Copy Assignment Operator called" << std::endl;
  if (this != &other) {
    Animal::operator=(other);
    delete this->brain;
    this->brain = new Brain(*other.brain);
  }
  return *this;
}

Cat::~Cat() {
  delete this->brain;
  std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const { std::cout << "Meow" << std::endl; }

Brain *Cat::getBrain() const { return this->brain; }
