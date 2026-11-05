// 6.5 Вариант 10
// Калькулятор финансов: процент от суммы, сумма с НДС 20%, сумма без НДС 20%, чаевые 10%, выход
#include <stdio.h>

int main(void)
{
    int choice;
    double x;

    while (1)
    {
        printf("\n1) Процент от суммы\n");
        printf("2) Сумма с НДС 20%%\n");
        printf("3) Сумма без НДС 20%%\n");
        printf("4) Чаевые 10%%\n");
        printf("5) Выход\n");
        printf("Выбор: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Неверный ввод\n");
            while (getchar() != '\n')
                continue;
            continue;
        }

        if (choice == 5)
            break;

        switch (choice)
        {
            case 1:
                printf("Сумма: ");
                scanf("%lf", &x);
                printf("Процент (например, 15): ");
                double p;
                scanf("%lf", &p);
                printf("Результат: %.2f\n", x * p / 100.0);
                break;
            case 2:
                printf("Сумма: ");
                scanf("%lf", &x);
                printf("С НДС: %.2f\n", x * 1.2);
                break;
            case 3:
                printf("Сумма: ");
                scanf("%lf", &x);
                printf("Без НДС: %.2f\n", x / 1.2);
                break;
            case 4:
                printf("Сумма: ");
                scanf("%lf", &x);
                printf("С чаевыми: %.2f\n", x * 1.1);
                break;
            default:
                printf("Неверный пункт меню\n");
                break;
        }
    }
    printf("Всего хорошего!\n");

    return 0;
}

