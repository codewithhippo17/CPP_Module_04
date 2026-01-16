#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main() {
  std::cout << "--- 1. Testing Valid Instantiation ---" << std::endl;
  const Animal *j = new Dog();
  const Animal *i = new Cat();

  std::cout << "--- 2. Testing Abstract Class Restriction ---" << std::endl;
  // const Animal* meta = new Animal();

  std::cout << std::endl << "--- 3. Testing Polymorphism ---" << std::endl;
  j->makeSound();
  i->makeSound();
  std::cout << std::endl << "--- 4. Cleanup ---" << std::endl;
  delete j;
  delete i;
  return 0;
}
