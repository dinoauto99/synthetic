#include <stdio.h>

void basic_file_handling()
{
    FILE *f = fopen("example.txt", "r");
    if (f != NULL)
    {
        char f_str[100];
        // read until \n
        // fscanf(f, "%s", f_str);

        // read all lines
        while (fgets(f_str, sizeof(f_str), f))
        {
            printf("%s", f_str);
        }
    }
    else
    {
        printf("can not read file!\n");
    }
    fclose(f);

    return;
}

int proc_bin_file()
{
    // write data to binaru file
    FILE *wfile = fopen("binary_file.bin", "wb");
    if (wfile == NULL)
    {
        // printf("Can not open binary file to write");
        perror("Can not open binary file to write");
        return 1;
    }
    int data[] = {10, 20, 30, 40, 50};
    size_t dataSize = sizeof(data);
    size_t elementsCount = sizeof(data) / sizeof(int);
    size_t elementsWrote = fwrite(data, sizeof(int), elementsCount, wfile);
    if (elementsCount != elementsWrote)
    {
        perror("Error when writing data");
        fclose(wfile);
        return 1;
    }
    fclose(wfile);

    // read data from bianry file
    FILE *rfile = fopen("binary_file.bin", "rb");
    if (rfile == NULL)
    {
        printf("Can not open binary file to read");
        return 1;
    }
    int readData[5];
    fread(readData, sizeof(int), elementsCount, rfile);
    fclose(rfile);
    printf("Data from binary file:\n");
    for (size_t i = 0; i < elementsCount; i++)
    {
        printf("%d\t", readData[i]);
    }
    return 0;
}

int main(int argc, char *argv[])
{
    // basic_file_handling();

    return proc_bin_file();

    return 0;
}