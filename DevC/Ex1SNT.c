#include <stdio.h>

#define IS_PRIME(n) (is_prime(n))

int main(int argc, char *argv[])
{

    int fromNo = atoi(argv[1]);
    int toNo = atoi(argv[2]);
    if (argc != 3 || fromNo < 0 || toNo <= 0)
    {
        printf("invalid inputs.\n");
        return 1;
    }
    int count = 0;
    for (int i = fromNo; i <= toNo; i++)
    {
        if (IS_PRIME(i))
        {
            printf("%d\t", i);
            count++;
        }
    }
    if (count == 0)
    {
        printf("not found.\n");
    }

    return 0;
}

int is_prime(int num)
{
    if (num <= 0)
    {
        return 0;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}