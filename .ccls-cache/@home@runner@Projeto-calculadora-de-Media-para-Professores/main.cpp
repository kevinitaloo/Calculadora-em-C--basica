#include <iostream>
using namespace std;

int main() {
  std::cout << "Calculadora de média - Feita por Kevin.\n";
  long double num1, num2, res;
  char cond;

  cout << "digite o primeiro número: ";
  cin >> num1;
  cout << "digite a operação desejada: ";
  cin >> cond;
  cout << "digite o segundo número: ";
  cin >> num2;
  if (cond == '+') {
    res = num1 + num2;
  }
  if (cond == '-') {
    res = num1 - num2;
  }
  if (cond == '/') {
    res = num1 / num2;
  }
  if (cond == '*') {
    res = num1 * num2;
  }
  cout << "o resultado é:" << res;
}
