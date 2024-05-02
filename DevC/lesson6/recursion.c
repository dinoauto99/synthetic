#include <stdio.h>

int binary_search(int ar[], int n, int tar)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (ar[mid] == tar)
            return mid;
        if (ar[mid] > tar)
            right = mid - 1;
        if (ar[mid] < tar)
            left = mid + 1;
    }
    return -1;
}

int binary_search_recursion(int a[], int left, int right, int tar)
{
    if (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (a[mid] == tar)
            return mid;
        else
        {
            if (a[mid] > tar)
                return binary_search_recursion(a, left, mid - 1, tar);
            if (a[mid] < tar)
                return binary_search_recursion(a, mid + 1, right, tar);
        }
    }
    return -1;
}

int main(int argc, char *argv[])
{
    int a[] = {1, 3, 5, 6, 7, 8};
    int pos = binary_search(a, 6, 6);
    printf("position without recursion: %d\n", pos);
    int pos_re = binary_search_recursion(a, 0, 5, 6);
    printf("position with recursion: %d\n", pos_re);
    return 0;
}