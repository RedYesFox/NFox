#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    bool m_ready = (bool)a;
    bool f_state = (bool)b;
    printf("MODULE_REAADY: %d\nFAULT_STATE: %d\n", m_ready, f_state);
    printf("BOOL_SIZE: %zu\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", m_ready + f_state);


    return 0;

}
