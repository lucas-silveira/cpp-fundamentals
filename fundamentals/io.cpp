#include "iostream"

int main() {
  // insertion operator
  std::cout << "Enter your name: ";

  // extraction operator
  std::string name;
  std::cin >> name;

  std::cout << "You type " << name << std::endl;

  return 0;
}