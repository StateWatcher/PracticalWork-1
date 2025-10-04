#ifndef BINARY_UTILS_H
#define BINARY_UTILS_H

#include <string>

std::string intToBinaryString(int intNum);
std::string floatToBinaryString(float floatNum);
std::string doubleToBinaryString(double doubleNum);
int changeBitInt(int number, int bitPosition, int newValue);
float changeBitFloat(float number, int bitPosition, int newValue);
double changeBitDouble(double number, int bitPosition, int newValue);

#endif