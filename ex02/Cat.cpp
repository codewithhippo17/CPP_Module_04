#include "Cat.hpp"

Cat::Cat() : AAnimal() {
  std::cout << "Cat Default Constructor called" << std::endl;
  this->type = "Cat";
  this->brain = new Brain();
}

Cat::Cat(const Cat &other) : AAnimal(other) {
  std::cout << "Cat Copy Constructor called" << std::endl;
  this->brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other) {
  std::cout << "Cat Copy Assignment Operator called" << std::endl;
  if (this != &other) {
    AAnimal::operator=(other);
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
