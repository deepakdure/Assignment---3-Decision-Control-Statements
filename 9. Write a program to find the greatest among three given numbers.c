#include <stdio.h>
int main()
{
    int a, b, c, x;
    printf("enter 3 numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    x = a > b ? a > c ? a : c : b > c ? b : c;
    printf("%d", x);
    return 0;
}
