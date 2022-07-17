#include <stdio.h>
int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d", &x);
    if (x % 5)
        printf("Not-Devisible");
    else
        printf("Divisible");
    return 0;
}