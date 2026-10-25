#include <string>
#include "Pair.h"

int main() {
  // Pair with T
  Pair<double, std::string> p1(1.2, "two");
  Pair<double, std::string> p2(2.6, "one");
  Pair<double, std::string> p3(8.3, "one");

  // Print pairs
  std::cout << "p1: " << p1 << std::endl;
  std::cout << "p2: " << p2 << std::endl;
  std::cout << "p3: " << p3 << std::endl;
  std::cout << std::endl;

  // Compare pairs
  std::cout << "p1 < p2: " << (p1 < p2) << std::endl;
  std::cout << "p1 < p3: " << (p1 < p3) << std::endl;

  return 0;
}