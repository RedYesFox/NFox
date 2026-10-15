#include <stdio.h>


int main(void)
{
    int d1 = 10, d2 = 010, d3 = 0x10;
    printf("DEC_10: %d\n", d1);
    printf("OCT_10: %d\n", d2);
    printf("HEX_10: %d\n", d3);

    printf("INT_SUFFIX: %zu %zu %zu %zu\n", sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL));
    printf("FLOAT_SUFFIX: %zu %zu %zu\n", sizeof(0.1f), sizeof(0.1), sizeof(0.1L));

    printf("FLOAT_EQ: %d\n", 0.1f == 0.1);

    /*
     Число 0.1 невозможно точно представить в двоичной системе счисления — оно превращается в бесконечную периодическую дробь (0.00011001100..._2).
      • При сохранении в float (0.1f) значение округляется до 24-битной мантиссы.
      • При сохранении в double (0.1) оно округляется более точно — до 53-битной мантиссы.
      Когда вы выполняете операцию 0.1f == 0.1, компилятор автоматически приводит float к типу double (дописывая нули в хвост мантиссы). В итоге сравниваются два числа с разной точностью «хвостов», из-за чего они не равны, и результат выражения равен 0.
    */

    char ch = 'A';
    printf("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');
    printf("CHAR_LIT_VAR_STR: %zu %zu %zu\n", sizeof('A'), sizeof(ch), sizeof("A"));

    return 0;
}
