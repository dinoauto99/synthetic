#include <stdio.h>

void swap_2no(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a = 1;
    int b = 2;
    printf("before: %d %d\n", a, b);
    swap_2no(&a, &b);
    printf("after: %d %d\n", a, b);

    return 0;
}