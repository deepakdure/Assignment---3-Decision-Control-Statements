#include <stdio.h>
int main()
{
    int a, b,x;
    printf("enter two numbers\n");
    scanf("%d%d", &a, &b);
    x=a>b?a:b;
    printf("greater number is %d",x);
    return 0;
}
