#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <gte

bool is_prime(int num)
{
    if (num < 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // if (is_prime(5))
    // {
    //     printf("5 is prime number.\n");
    // }
    // else
    // {
    //     printf("̀5 is not prime number.\n");
    // }

    int prime_nums[] = {2, 3, 5, 7, 11, 13};
    printf("Running manual test:\n");
    for (int i = 0; i < (sizeof(prime_nums) / sizeof(int)); i++)
    {
        assert(is_prime(prime_nums[i]) == true);
    }

    printf("All testcases are runned.\n");

    return 0;
}
