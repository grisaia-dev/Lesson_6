#include <iostream>
#include "calculator.h"

int main() {
    setlocale(LC_ALL, "Rus");
    int var1, var2 = 0;

    std::cout << "Введите первое число: ";
    std::cin >> var1;

    std::cout << "Введите второе число: ";
    std::cin >> var2;

    int metod = 0;
    std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> metod;
    switch (metod) {
        case 1: std::cout << var1 << " + " << var2 << " = " << Addition(var1, var2) << std::endl; break;
        case 2: std::cout << var1 << " - " << var2 << " = " << Subtraction(var1, var2) << std::endl; break;
        case 3: std::cout << var1 << " * " << var2 << " = " << Multiplication(var1, var2) << std::endl; break;
        case 4: std::cout << var1 << " / " << var2 << " = " << Division(var1, var2) << std::endl; break;
        case 5: std::cout << var1 << " в степени " << var2 << " = " << Exponentiation(var1, var2) << std::endl; break;
        default: std::cout << "Нет такого значения!" << std::endl; break;
    }

    return 0;
}