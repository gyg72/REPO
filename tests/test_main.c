#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

// Объявление тестируемых функций
int add(int a, int b);
int subtract(int a, int b);
bool is_even(int number);

int main() {
    // Тест 1: Функция сложения
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);

    // Тест 2: Функция вычитания
    assert(subtract(10, 4) == 6);
    assert(subtract(0, 5) == -5);

    // Тест 3: Функция проверки четности
    assert(is_even(4) == true);
    assert(is_even(7) == false);

    printf("All 3 functions successfully verified!\n");
    return 0;
}

