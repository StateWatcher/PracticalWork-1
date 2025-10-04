#include <iostream>
#include "binary-utils.h"

void task5()
{
    int dataType;
    std::cout << "\nВыберите тип данных:\n" 
    << "1. int\n" 
    << "2. float\n" 
    << "3. double\n" 
    << "Ваш выбор: ";
    std::cin >> dataType;
    
    if (dataType == 1) {
        int inputValue;
        std::cout << "Введите int число: ";
        std::cin >> inputValue;
        
        std::string binaryBefore = intToBinaryString(inputValue);
        std::cout << "\nИсходное представление:\n" << binaryBefore << "\n";
        
        int bitPosition, newValue;
        std::cout << "\nВведите номер бита (0-31, слева направо): ";
        std::cin >> bitPosition;
        std::cout << "Введите новое значение бита (0 или 1): ";
        std::cin >> newValue;
        
        int result = changeBitInt(inputValue, bitPosition, newValue);
        
        std::string binaryAfter = intToBinaryString(result);
        std::cout << "\nНовое представление:\n" << binaryAfter << "\n";
        std::cout << "\nИсходное число: " << inputValue << "\n";
        std::cout << "Новое число: " << result << "\n\n";
    }
    else if (dataType == 2) {
        float inputValue;
        std::cout << "Введите float число: ";
        std::cin >> inputValue;
        
        std::string binaryBefore = floatToBinaryString(inputValue);
        std::cout << "\nИсходное представление:\n";
        std::cout << binaryBefore.substr(0, 1) << " " 
                  << binaryBefore.substr(1, 8) << " " 
                  << binaryBefore.substr(9, 23) << "\n";
        
        int bitPosition, newValue;
        std::cout << "\nВведите номер бита (0-31, слева направо): ";
        std::cin >> bitPosition;
        std::cout << "Введите новое значение бита (0 или 1): ";
        std::cin >> newValue;
        
        float result = changeBitFloat(inputValue, bitPosition, newValue);
        
        std::string binaryAfter = floatToBinaryString(result);
        std::cout << "\nНовое представление:\n";
        std::cout << binaryAfter.substr(0, 1) << " " 
                  << binaryAfter.substr(1, 8) << " " 
                  << binaryAfter.substr(9, 23) << "\n";
        std::cout << "\nИсходное число: " << inputValue << "\n";
        std::cout << "Новое число: " << result << "\n\n";
    }
    else if (dataType == 3) {
        double inputValue;
        std::cout << "Введите double число: ";
        std::cin >> inputValue;
        
        std::string binaryBefore = doubleToBinaryString(inputValue);
        std::cout << "\nИсходное представление:\n";
        std::cout << binaryBefore.substr(0, 1) << " " 
                  << binaryBefore.substr(1, 11) << " " 
                  << binaryBefore.substr(12, 52) << "\n";
        
        int bitPosition, newValue;
        std::cout << "\nВведите номер бита (0-63, слева направо): ";
        std::cin >> bitPosition;
        std::cout << "Введите новое значение бита (0 или 1): ";
        std::cin >> newValue;
        
        double result = changeBitDouble(inputValue, bitPosition, newValue);
        
        std::string binaryAfter = doubleToBinaryString(result);
        std::cout << "\nНовое представление:\n";
        std::cout << binaryAfter.substr(0, 1) << " " 
                  << binaryAfter.substr(1, 11) << " " 
                  << binaryAfter.substr(12, 52) << "\n";
        std::cout << "\nИсходное число: " << inputValue << "\n";
        std::cout << "Новое число: " << result << "\n\n";
    }
    else {
        std::cout << "Неверный выбор типа данных!\n\n";
    }
}