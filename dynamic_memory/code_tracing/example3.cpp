#include <iostream>

int main() {
  int* w = new int{12};
  std::cout << *w << std::endl;

  delete w; // prevents memory leak

  w = new int{3};
  std::cout << *w << std::endl;

  delete w;

  return 0;
}