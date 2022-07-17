#include <stdio.h>
int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d", &x);
    if (x > 0)
        printf("Positive Numer");
    else
        printf("Non-Positive Number");
    return 0;
}
