#include <iostream>
#include <string>

class Language {
public:
  virtual void displayInfo() const {
    std::cout << "Common English Language" << std::endl;
  }
  virtual ~Language() {}
};

class Java : public Language {
public:
  void displayInfo() const {
    std::cout << "Java Programming Language" << std::endl;
  }
};

int main() {
  Language *j1 = new Java();
  Language *l1 = new Language();

  j1->displayInfo();
  l1->displayInfo();

  delete j1;
  delete l1;

  return 0;
}
