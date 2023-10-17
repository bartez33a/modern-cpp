#include "Circle.hpp"
#include <cmath>
#include <iostream>
#include <vector>

int main() {
  std::cout << "static_assert.cpp\n";
  static_assert(M_PI != 3.14, "PI is not equal to 3.14");

  return 0;
}