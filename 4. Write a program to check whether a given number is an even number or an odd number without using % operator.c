#include <stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    if ((n / 2) * 2 == n)
        printf("Even Number");
    else
        printf("Odd Number");
    return 0;
}