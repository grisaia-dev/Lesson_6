﻿#include <iostream>
#include <string>
#include "counter.h"

int main() {

    const std::string yes_or_no[2] = { "да", "нет" }, command[4] = { "+", "-", "=", "x" };
    std::string user_ans;

    std::cout << "Вы хотите указать начальное значение счетчика? Введите да иди нет: ";
    std::cin >> user_ans;
    if (user_ans == yes_or_no[0]) {
        std::cout << "Введите начальное значение счетчика: ";
        int num_set = 0; // Переменная для ввода начального значения
        std::cin >> num_set;

        Counter count(num_set);

        while ((user_ans != command[3]) && (user_ans != "х")) {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> user_ans;

            if (user_ans == command[0])
                count.add_count();
            else if (user_ans == command[1])
                count.sub_count();
            else if (user_ans == command[2])
                std::cout << count.get_count() << std::endl;
        }
        std::cout << "До свидания!" << std::endl;
    } else if (user_ans == yes_or_no[1]) {
        Counter count;
        while ((user_ans != command[3]) && (user_ans != "х")) {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> user_ans;
            
            if (user_ans == command[0])
                count.add_count();
            else if (user_ans == command[1])
                count.sub_count();
            else if (user_ans == command[2])
                std::cout << count.get_count() << std::endl;
        }
        std::cout << "До свидания!" << std::endl;
    } else {
        std::cout << "Нет такого значения!" << std::endl;
    }
}