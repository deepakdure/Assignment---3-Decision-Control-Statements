#include <stdio.h>
int main()
{
    int H, E, M, S, SC;
    // Please enter your obtained marks out of hundred
    printf("enter 5 subjects obtained marks out of hundred\n");
    printf("Enter This Sequence - Hindi,English,Math,Science and Social Science\n");
    scanf("%d%d%d%d%d", &H, &E, &M, &S, &SC);
    if (H <= 100 && E <= 100 && M <= 100 && S <= 100 && SC <= 100)
    {
        if (H >= 33 && E >= 33 && M >= 33 && S >= 33 && SC >= 33)
            printf("Congratulation You passed in exam");
        else
            printf("Fail");
    }
    else
    {
        printf("please enter marks less than 100");
    }
    return 0;
}