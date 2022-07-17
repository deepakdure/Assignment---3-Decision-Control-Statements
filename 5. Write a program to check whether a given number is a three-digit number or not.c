#include <stdio.h>
int main()
{
    int n, i = 0;
    printf("enter a number\n");
    scanf("%d", &n);
    while (n != 0)
    {
        i++;
        n = n / 10;
    }
    printf(i == 3 ? "Three digit number" : "not thee-digit number");
    return 0;
}
