#include "iostream"

int main() {
  double price = 99.90;
  double tax = 0.08;
  double total = price * (1 + tax);

  std::cout << "The final price is R$" << total;
  
  return 0;
}