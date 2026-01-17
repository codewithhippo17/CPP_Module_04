#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main() {
  const int arraySize = 4;
  Animal *animals[arraySize];

  std::cout << "--- 1. CREATING ANIMALS ---" << std::endl;
  for (int i = 0; i < arraySize; i++) {
    if (i < arraySize / 2)
      animals[i] = new Dog();
    else
      animals[i] = new Cat();
  }
  std::cout << "\n--- 2. TESTING DEEP COPY ---" << std::endl;
  Dog basic;
  basic.getBrain()->ideas[0] = "I want food";
  {
    Dog tmp = basic;
    std::cout << "Original Idea: " << basic.getBrain()->ideas[0] << std::endl;
    std::cout << "Copy Idea: " << tmp.getBrain()->ideas[0] << std::endl;

    tmp.getBrain()->ideas[0] = "I want to sleep";
    std::cout << "Copy Idea Changed: " << tmp.getBrain()->ideas[0] << std::endl;
    std::cout << "Original Idea (Should remain 'I want food'): "
              << basic.getBrain()->ideas[0] << std::endl;
  }
  std::cout << "Deep copy test passed if this prints without crash."
            << std::endl;
  std::cout << "\n--- 3. CLEANING UP ANIMALS ---" << std::endl;
  for (int i = 0; i < arraySize; i++) {
    std::cout << "Deleting animal index " << i << ":" << std::endl;
    delete animals[i];
  }
  return 0;
}
