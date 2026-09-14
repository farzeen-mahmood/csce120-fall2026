#include <iostream>

// 4 errors

int main() {
  unsignd int age = 0; // unsigned spelt wrong
  std::cout << "Enter your age: ";
  cin >> age; // should be std::cin

  if (12 < age < 20) { // cannot do multiple operators in one condition
    std::cout >> "You are a teenager." >> std::endl; // arrows going wrong way
  }

  return 0;
}
