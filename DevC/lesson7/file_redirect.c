#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file = freopen("re_file.txt", "w", stdout);
    if (file == NULL)
    {
        perror("Error message");
        return 1;
    }
    printf("this is text write to re-direct file.\n");
    fclose(file);

    return 0;
}