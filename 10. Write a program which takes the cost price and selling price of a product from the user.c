#include <stdio.h>
int main()
{
    float cp, sp, P;
    printf("enter cost price\n");
    scanf("%f", &cp);
    printf("enter selling price\n");
    scanf("%f", &sp);
    if (sp > cp)
    {
        P = sp - cp;
        printf("Profit percent is %f%%", (P * 100) / cp);
    }
    if (cp > sp)
    {
        P = cp - sp;
        printf("Loss percent is %f%%", (P * 100) / cp);
    }
    else
        printf("No Loss and No Profit");
    return 0;
}