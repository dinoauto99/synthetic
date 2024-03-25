#include <stdio.h>

int main(int argc, char *argv[])
{
    // printf('arg[0]: %s\n', argv[0]);
    // printf('arg[1]: %s\n', argv[1]);
    // printf('count args = %d\n', argc);

    // if (argc == 1)
    // {
    //     printf('args: %s <num2> <num3> ...\n', argv[0]);
    //     return 1;
    // }
    // int sum = 0;
    // for (int i = 1; i < argc; i++)
    // {
    //     sum += atoi(argv[i]);
    // }
    // printf('sum = %d\n', sum);

    if (argc != 4)
    {
        printf("invalid.\n");
        return 1;
    }

    int num[2] = {atoi(argv[1]), atoi(argv[3])};
    printf("argv[2] : %s\n", argv[2]);
    char op = argv[2][0]; // get character
    float res = 0;
    switch (op)
    {
    case '+':
        res = num[0] + num[1];
        break;
    case '-':
        res = num[0] - num[1];
        break;
    case '*':
        res = num[0] * num[1];
        break;
    case '/':
        if (num[1] == 0)
        {
            printf("invalid numbers %d / 0\n", num[0]);
            return 1;
        }

        res = (float)num[0] / num[1];
        break;
    default:
        break;
    }
    printf("result: %.1f", res);

    return 0;
}