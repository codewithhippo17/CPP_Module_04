#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
  std::cout << "--- CORRECT ANIMAL TESTS ---" << std::endl;
  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();

  std::cout << std::endl;
  std::cout << "J Type: " << j->getType() << " " << std::endl;
  std::cout << "I Type: " << i->getType() << " " << std::endl;
  std::cout << std::endl;

  i->makeSound();
  j->makeSound();
  meta->makeSound();

  std::cout << std::endl << "--- DESTRUCTION ---" << std::endl;
  delete meta;
  delete j;
  delete i;

  std::cout << std::endl << "--- WRONG ANIMAL TESTS ---" << std::endl;
  const WrongAnimal *wrongMeta = new WrongAnimal();
  const WrongAnimal *wrongCat = new WrongCat();

  std::cout << std::endl;
  wrongCat->makeSound();
  wrongMeta->makeSound();

  std::cout << std::endl << "--- DESTRUCTION ---" << std::endl;
  delete wrongMeta;
  delete wrongCat;

  return 0;
}
