#include <stdio.h>

int main()
{
    float fnum;
    float fsum = 0;

    double dnum;
    double dsum = 0;

    int division = 100000;

    fnum = 11.0 / division;
    dnum = 11.0 / division;

    for (int i = 0; i < division; i++)
    {
        fsum = fsum + fnum;
        dsum = dsum + dnum;
    }

    printf("floating point sum = %f\n", fsum);
    printf("double sum = %lf\n", dsum);

    return 0;
}