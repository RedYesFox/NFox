#include <stdio.h>

void pulse()
{
    printf("@");
}

int main(void)
{
    pulse();
    printf("\n");

    pulse();
    pulse();
    printf("\n");

    pulse();
    pulse();
    pulse();
    printf("\n");

    return 0;
}
