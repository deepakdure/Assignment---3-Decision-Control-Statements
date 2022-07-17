#include <stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    if (n % 7 == 0 && n % 3 == 0)
        printf("%d is divisible by both number 7 and 3", n);
    else if (n % 7 == 0)
        printf("%d is divisible by only 7", n);
    else if (n % 3 == 0)
        printf("%d is divisible by only 3", n);
    else
        printf("%d is not divisible by 7 and 3", n);
    return 0;
}
