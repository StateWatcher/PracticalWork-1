#include <iostream>
#include "laboratory-tasks.h"
#include "console-utils.h"

int main()
{
  clearConsole();
  while (true)
  {
      int selectedTask;
      std::cout << "Введите номер задания для выполнения:\n"
                << "1.Сколько памятии занимают типы данных.\n"
                << "2.Двоичное представление введённого int\n"
                << "3.Двоичное представление введённого float\n"
                << "4.Двоичное представление введённого double\n"
                << "5.Замена бита в числе\n"
                << "6.Поменять местами части мантиссы double\n";
      std::cin >>
          selectedTask;
      if (selectedTask < 1 || selectedTask > 6 || std::cin.fail())
          break;
      clearConsole();
      switch (selectedTask)
      {
      case 1:
        task1();
        break;
      case 2:
        task2();
        break;
      case 3:
        task3();
        break;
      case 4:
        task4();
        break;
      case 5:
        task5();
        break;
      case 6:
        task6();
        break;
      default:
        break;
      }
  }
  return 0;
}