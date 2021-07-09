#include "iostream"

int main() {
  int a = 1;
  double b = 1.10;

  double price = 99.90;
  double tax = 0.08;
  double total = price * (1 + tax);

  std::cout << "The final price is R$" << total;
  
  return 0;
}