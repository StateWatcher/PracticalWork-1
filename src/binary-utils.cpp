#include <string>

std::string intToBinaryString(int intNum)
{
  std::string binaryString;
  unsigned int mask = 1u << 31;

  for (int bit = 0; bit < 32; bit++)
  {
    binaryString += (intNum & mask ? '1' : '0');
    mask >>= 1;
  }

  return binaryString;
}

std::string floatToBinaryString(float floatNum)
{
  union
  {
    float floatRepresentation;
    unsigned int intRepresentation;
  } floatToInt;
  floatToInt.floatRepresentation = floatNum;

  std::string binaryString;
  unsigned int mask = 1u << 31;

  for (int bit = 0; bit < 32; bit++)
  {
    binaryString += (floatToInt.intRepresentation & mask ? '1' : '0');
    mask >>= 1;
  }

  return binaryString;
}

std::string doubleToBinaryString(double doubleNum)
{
  union
  {
    double doubleRepresentation;
    unsigned long long intRepresentation;
  } doubleToInt;

  doubleToInt.doubleRepresentation = doubleNum;

  std::string binaryString;
  unsigned long long mask = 1ULL << 63;

  for (int bit = 0; bit < 64; bit++)
  {
    binaryString += (doubleToInt.intRepresentation & mask ? '1' : '0');
    mask >>= 1;
  }

  return binaryString;
}

int changeBitInt(int number, int bitPosition, int newValue)
{
  int realPosition = 31 - bitPosition;
  unsigned int mask = 1u << realPosition;

  if (newValue == 1)
  {
    number |= mask;
  }
  else
  {
    number &= ~mask;
  }

  return number;
}

float changeBitFloat(float number, int bitPosition, int newValue)
{
  union
  {
    float floatRepresentation;
    unsigned int intRepresentation;
  } floatToInt;

  floatToInt.floatRepresentation = number;

  int realPosition = 31 - bitPosition;
  unsigned int mask = 1u << realPosition;

  if (newValue == 1)
  {
    floatToInt.intRepresentation |= mask;
  }
  else
  {
    floatToInt.intRepresentation &= ~mask;
  }

  return floatToInt.floatRepresentation;
}

double changeBitDouble(double number, int bitPosition, int newValue)
{
  union
  {
    double doubleRepresentation;
    unsigned long long intRepresentation;
  } doubleToInt;

  doubleToInt.doubleRepresentation = number;

  int realPosition = 63 - bitPosition;
  unsigned long long mask = 1ULL << realPosition;

  if (newValue == 1)
  {
    doubleToInt.intRepresentation |= mask;
  }
  else
  {
    doubleToInt.intRepresentation &= ~mask;
  }

  return doubleToInt.doubleRepresentation;
}

double swapMantissaParts(double number)
{
  union
  {
    double doubleRepresentation;
    unsigned long long intRepresentation;
  } doubleToInt;
  doubleToInt.doubleRepresentation = number;
  unsigned long long mask26bits = (1ULL << 26) - 1;
  unsigned long long lowMantissaMask = mask26bits;
  unsigned long long highMantissaMask = mask26bits << 26;
  unsigned long long signAndExponentMask = ((1ULL << 12) - 1) << 52;
  unsigned long long highPart = (doubleToInt.intRepresentation & highMantissaMask) >> 26;
  unsigned long long lowPart = (doubleToInt.intRepresentation & lowMantissaMask);
  unsigned long long signAndExponent = doubleToInt.intRepresentation & signAndExponentMask;
  doubleToInt.intRepresentation = signAndExponent | (lowPart << 26) | highPart;

  return doubleToInt.doubleRepresentation;
}