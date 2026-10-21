// 4.5  Вариант 26
#include <stdio.h>

double a_to_ma(double a);

int main(void)
{
    double value;
    while (scanf("%lf", &value) == 1)
    {
        printf("%.2f\n", a_to_ma(value));
    }

    return 0;
}

double a_to_ma(double a)
{
    const double KOEF = 1000.0;
    return a * KOEF;

}

/*
 * Функция принимает double, а не float, потому что double имеет ~15 значащих цифр против ~6 у float - это уменьшает потерю точности при конвертации и промежуточных вычислениях
 * scanf("%lf") и литералы с плавающей точкой по умолчанию имеют тип double
 *
 * scanf("%lf", &value) == 1 - проверка, что прочитан ровно один элемент. Если ввод некорректен или достигнут EOF, scanf вернёт 0 или EOF (-1), и цикл завершится
*/
