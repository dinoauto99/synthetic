#include <stdio.h>
#include <assert.h>

int devide(int a, int b)
{
    assert(b != 0);
    return a / b;
}

int main()
{
    int x = 4;
    int y = 0;
    int res = devide(x, y);
    printf("result: %d\n", res);
    return 0;
}