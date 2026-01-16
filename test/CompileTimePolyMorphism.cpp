#include <iostream>

class Pattern {
public:
  void display() const {
    for (int i = 0; i < 10; i++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }

  void display(char symbol) const {
    for (int i = 0; i < 10; i++) {
      std::cout << symbol;
    }
    std::cout << std::endl;
  }

  void display(char symbol, int count) const {
    for (int i = 0; i < count; i++) {
      std::cout << symbol;
    }
    std::cout << std::endl;
  }
};

int main() {
  Pattern d1;

  std::cout << "--- Test 1: No arguments (Default '*') ---" << std::endl;
  d1.display();

  std::cout << "\n--- Test 2: One argument (char '#') ---" << std::endl;
  d1.display('#');

  std::cout << "\n--- Test 3: Two arguments (char '@', int 5) ---" << std::endl;
  d1.display('@', 5);

  return 0;
}
