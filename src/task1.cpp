#include <iostream>

void task1() {
  std::cout << "int занимает в памяти " << sizeof(int) << " байта\n";
  std::cout << "short int занимает в памяти " << sizeof(short int) << " байта\n";
  std::cout << "long int занимает в памяти " << sizeof(long int) << " байт\n";
  std::cout << "float занимает в памяти " << sizeof(float) << " байта\n";
  std::cout << "double занимает в памяти " << sizeof(double) << " байт\n";
  std::cout << "long double занимает в памяти " << sizeof(long double) << " байт\n";
  std::cout << "char занимает в памяти " << sizeof(char) << " байт\n";
  std::cout << "bool занимает в памяти " << sizeof(bool) << " байт\n\n\n";
}