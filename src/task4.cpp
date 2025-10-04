#include <iostream>
#include "binary-utils.h"

void task4()
{
  double inputValue;
  std::cout << "\nВведите double число в десятичной системе счисления: ";
  std::cin >> inputValue;
  std::string binaryString = doubleToBinaryString(inputValue);
  std::cout << "\n\n"
            << binaryString.substr(0, 1) << " " 
            << binaryString.substr(1, 11) << " " 
            << binaryString.substr(12, 52) << "\n\n"; 
}