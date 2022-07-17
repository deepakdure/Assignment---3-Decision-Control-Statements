#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, D;
    float x, y;
    printf("enter coficient of x^2, x and constant \n");
    scanf("%d%d%d", &a, &b, &c);
    D = b * b - (4 * a * c);
    if (D < 0)
    {
        printf("both roots are imeginary");
    }
    if (D == 0)
    {
        printf("both roots are equal");
        x = -b / (2.0 * 2 * a);
        printf("\nroots is %f", x);
    }
    if (D > 0)
    {
        printf("both roots are real and distinct");
        x = (-b + (sqrt(D))) / (2 * a);
        y = (-b - (sqrt(D))) / (2 * a);
        printf("\nroots are %f %f", x, y);
    }
    return 0;
}
