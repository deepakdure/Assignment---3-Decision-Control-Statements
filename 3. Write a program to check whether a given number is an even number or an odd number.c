#include <stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    if (n % 2)
        printf("Odd Number");
    else
        printf("Even Number");
    return 0;
}