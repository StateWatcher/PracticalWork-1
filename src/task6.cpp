#include <iostream>
#include "binary-utils.h"

void task6()
{
  double inputValue;
  std::cout << "\nВведите double число: ";
  std::cin >> inputValue;
  std::string binaryBefore = doubleToBinaryString(inputValue);
  std::cout << "\nИсходное представление:\n";
  std::cout << binaryBefore.substr(0, 1) << " "
            << binaryBefore.substr(1, 11) << " "
            << binaryBefore.substr(12, 26) << " "
            << binaryBefore.substr(38, 26) << "\n";

  double result = swapMantissaParts(inputValue);

  std::string binaryAfter = doubleToBinaryString(result);
  std::cout << "\nНовое представление:\n";
  std::cout << binaryAfter.substr(0, 1) << " "
            << binaryAfter.substr(1, 11) << " "
            << binaryAfter.substr(12, 26) << " "
            << binaryAfter.substr(38, 26) << "\n\n";
}