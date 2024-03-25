#include <stdio.h>
#include "hello.h"

// int add2Numbers(int, int);
// float squareCircle(float);

int main()
{
    printf("hello\n");
    printf("2 + 3 = %d\n", add2Numbers(2, 3));
    printf("square of circle (r=2): %.2f\n", squareCircle(2));
    printf("square of 3 = %d\n", SQUARE(3));
    testCompileCondition();

    int abc = 123;
    int ac = 456;
    printf("concat token %d\n", CONCAT(ab, c));
    printf("concat token %d\n", CONCAT(a, bc));
    printf("concat token %d\n", CONCAT(a, c));

    return 0;
}

int add2Numbers(int a, int b)
{
    return a + b;
}

float squareCircle(float r)
{
    return PI * r * r;
}

void testCompileCondition()
{
#ifdef DEBUG
    printf("DEBUG has been defined\n");
#else
    printf("DEBUG has not been defined yet\n");
#endif
    return;
}
