#include <iostream>
#include "binary-utils.h"

void task3()
{
  float inputValue;
  std::cout << "\nВведите float число в десятичной системе счисления: ";
  std::cin >> inputValue;
  std::string binaryString = floatToBinaryString(inputValue);
  std::cout << "\n\n"
            << binaryString.substr(0, 1) << " " 
            << binaryString.substr(1, 8) << " " 
            << binaryString.substr(9, 23) << "\n\n";
}