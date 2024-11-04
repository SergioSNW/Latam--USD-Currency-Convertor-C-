#include <iostream>

int main() {
  double pesos;
  double reais;
  double soles;
  double dollars;

  // Conversion rates on the 4th of November 24
  // 1 Colombian Peso = 0.00023 USD
  // 1 Brazilian Reais = 0.18 USD
  // 1 Peruvian Sol = 0.27 USD
  double colombia_convr = 0.00023;
  double brazil_convr = 0.18;
  double peru_convr = 0.27;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  dollars = (colombia_convr * pesos) + (brazil_convr * reais) + (peru_convr * soles);

  std::cout << "US Dollars = $ " << dollars;
}
