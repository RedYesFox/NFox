#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20] = "SibSUTIS";
    printf("SIZEOF: %zu\n", sizeof(str));
    printf("STRLEN: %zu\n", strlen(str));
    printf("FREE_BYTES: %zu\n", sizeof(str) - strlen(str) - 1);
    return 0;
}
