#include <iostream>
#include "binary-utils.h"

void task2()
{
  int inputValue;
  std::cout << "\nВведите int число в десятичной системе счисления: ";
  std::cin >> inputValue;
  std::string binaryString = intToBinaryString(inputValue);
  std::cout << "\n\n"
            << binaryString.substr(0, 1) << " " << binaryString.substr(1, 3) << " ";
  for (int i = 4; i < 29; i+=4) {
    std::cout << binaryString.substr(i, 4) << " ";
  }
  std::cout << "\n\n";
}
