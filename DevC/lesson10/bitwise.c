#include <stdio.h>

void check_bit()
{
    int a = 12;                   // 1100
    int position = 3;             // check bit 3rd is 1 or 0
    int bit_mask = 1 << position; // 1000
    int res = (a & bit_mask) ? 1 : 0;
    printf("%d & %d = %d\n", a, bit_mask, a & bit_mask);
    if (res)
    {
        printf("3rd bit is 1\n");
    }
    else
    {
        printf("3rd bit is 0\n");
    }
}

void set_bit()
{
    unsigned int reg = 0b0100;
    int position = 1;
    int bit_mask = 1 << position;   // 0010
    reg |= bit_mask;
    printf("register value after setting is %d\n", reg);
}

void clear_bit()
{
    unsigned int reg = 0b0011;
    int position = 1;
    int bit_mask = ~(1 << position);    // 1101
    reg &= bit_mask;

    printf("register value after clearing is %d\n", reg);
}

void toggle_bit()
{
    unsigned int reg = 0b0101;
    int position = 2;
    int bit_mask = 1 << position;   // 0100
    reg ^= bit_mask;
    printf("register value after toggling is %d\n", reg);
}

int main()
{
    unsigned int a = 0b0101;
    unsigned int b = 0b0110;

    printf("%d & %d = %d\n", a, b, a & b);
    printf("%d | %d = %d\n", a, b, a | b);
    printf("%d ^ %d = %d\n", a, b, a ^ b);
    printf("~%d = %d\n", a, ~a);
    printf("%d << 2 = %d\n", a, a << 2);
    printf("%d >> 2 = %d\n", b, b >> 2);

    // oder of bitwise operators:
    // << >> ~ & ^ |
    // a & b | c ^ d << 2 >> 1
    // (a & b) | (c ^ ((d << 2) >> 1))

    // example for bit mask
    check_bit();
    set_bit();
    clear_bit();
    toggle_bit();

    return 0;
}
