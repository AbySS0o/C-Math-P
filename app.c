#include <stdio.h>
#include <string.h>

int main(void) {
    int number1, number2;
    char input[100];

    while (1) {
        printf("Enter two numbers for operation or type 'exit': ");
        fgets(input, sizeof(input), stdin); // Читаем ввод с клавиатуры

        // Проверяем, если введено "exit"
        if (strncmp(input, "exit", 4) == 0) {
            printf("Stopping the program.\n");
            break;
        }

        // Пытаемся извлечь два целых числа из введенной строки
        if (sscanf(input, "%d %d", &number1, &number2) == 2) {
            printf("You entered the integers: %d and %d\n", number1, number2);
            // Здесь можно выполнять операции с числами
        } else {
            printf("Invalid input. Please enter two integers or type 'exit'.\n");
        }
    }

    return 0;
}
