#include <stdio.h>

// Закон сохранения импульса: m1v1 + m2v2 = m1v1' + m2v2'
// before: m1, v1, m2, v2
// after: m1, v1', m2, v2'

int main(void)
{
    int m_before[2] = {};
    int v_before[2] = {};

    int m_after[2] = {};
    int v_after[2] = {};

    // Просим пользователя ввести значения массы и скорости тел до столкновения
    for(int i=0; i < 2; i++) {

        // Масса
        printf("Type value of m_before[%d]: ", i);
        scanf("%d", &m_before[i]);

        // Скорость
        printf("Type value of v_before[%d]: ", i);
        scanf("%d", &v_before[i]);
    }

    // Просим пользователя ввести значения массы и скорости тел после столкновения
    for(int j=0; j < 2; j++) {

        // Масса
        printf("Type value of m_after[%d]: ", j);
        scanf("%d", &m_after[j]);

        // Скорость
        printf("Type value of v_after[%d]: ", j);
        scanf("%d", &v_after[j]);
    }

    printf("Law of momentum: m1v1 + m2v2 = m1v1' + m2v2' \n");
    printf("In our case:\n%d * %d + %d * %d = %d * %d + %d * %d \n", m_before[0], v_before[0], m_before[1], v_before[1], m_after[0], v_after[0], m_after[1], v_after[1]);


    // 1. Все значения известны, проверяем по закону сохранения Импульса
    int momentum_before;
    int momentum_after;

    for(int k=0; k < 1; k++) {
        momentum_before = m_before[0] * v_before[0] + m_before[1] * v_before[1];
        momentum_after = m_after[0] * v_after[0] + m_after[1] * v_after[1];
    }

    if (momentum_before == momentum_after) {
        printf("Correct! %d == %d", momentum_before, momentum_after);
    }
    else if (momentum_before != momentum_after) {
        printf("Wrong! %d != %d", momentum_before, momentum_after);
    }

    return 0;
}