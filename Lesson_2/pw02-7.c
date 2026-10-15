#include <stdio.h>

int main(void)
{

    long double ld1;
    scanf("%Lf", &ld1);

    double do1 = (double)ld1;
    float fl1 = (float)ld1;

    printf("FLOAT: %.6f\n", fl1);
    printf("DOUBLE: %.6f\n", do1);
    printf("LDOUBLE: %.6Lf\n", ld1);
    printf("FLOAT+1: %.6f\n", fl1 + 1.0f);
    printf("DOUBLE+1: %.6f\n", do1 + 1.0);
    printf("LDOUBLE+1: %.6Lf\n", ld1 + 1.0L);

    /*
      Вход 123456789.123457. Float имеет ~7 значащих цифр, поэтому число округляется до 123456792.0. Прибавление 1 не меняет это значение, так как 1 меньше шага точности float на этом масштабе. Double имеет ~15–16 цифр, поэтому 1 видна. Long double на x86 — 18–19 цифр, тоже видна.
    */
    return 0;

}
