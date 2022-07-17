#include <stdio.h>
int main()
{
    int n;
    printf("enter  a year\n");
    scanf("%d", &n);
    if (n % 400 == 0)
    {
        printf("a leap-yrar");
    }
    else if (n % 100 == 0)
    {
        printf("not a leap-year");
    }
    else if (n % 4 == 0)
    {
        printf("a leap year");
    }
    else
        printf("not a leap-year");
    return 0;
}