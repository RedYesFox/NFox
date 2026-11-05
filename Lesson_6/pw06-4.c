// 6.4 Вариант 6
// Электроэнергия 0.05 до 200кВтч, 0.1 от 200 до 500, 0.15 свыше 500
#include <stdio.h>

#define RATE1 0.05
#define RATE2 0.10
#define RATE3 0.15
#define BREAK1 200.0
#define BREAK2 500.0
#define BASE1 (RATE1 * BREAK1)
#define BASE2 (BASE1 + RATE2 * (BREAK2 - BREAK1))

int main(void)
{
    double kwh, bill;

    printf("Введите расход электроэнергии (кВт·ч): ");
    if (scanf("%lf", &kwh) != 1)
        return 0;

    if (kwh <= BREAK1)
        bill = RATE1 * kwh;
    else if (kwh <= BREAK2)
        bill = BASE1 + RATE2 * (kwh - BREAK1);
    else
        bill = BASE2 + RATE3 * (kwh - BREAK2);

    printf("Расход: %.2f кВт·ч\n", kwh);
    printf("Стоимость: %.2f\n", bill);

    return 0;
}

