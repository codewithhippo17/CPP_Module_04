#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main() {
  const int arraySize = 4;
  AAnimal *animals[arraySize];

  std::cout << "--- 1. CREATING ANIMALS ---" << std::endl;
  for (int i = 0; i < arraySize; i++) {
    if (i < arraySize / 2)
      animals[i] = new Dog();
    else
      animals[i] = new Cat();
  }

  std::cout << "\n--- 2. CHECKING POLYMORPHISM ---" << std::endl;
  animals[0]->makeSound();
  animals[2]->makeSound();

  std::cout << "\n--- 3. CLEANING UP ANIMALS ---" << std::endl;
  for (int i = 0; i < arraySize; i++) {
    delete animals[i];
  }

  return 0;
}
