#ifndef COUNTER
#define COUNTER

class Counter {
public:
    // Изменение числа
    void add_count();
    void sub_count();

    // Конструкторы
    Counter(); // Дефолтный
    Counter(const int num); // Если пользователь захочет поставить свое число

    // геттер
    const int get_count();
private:
    int count;
};

#endif
