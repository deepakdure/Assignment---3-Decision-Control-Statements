#include <stdio.h>
int main()
{
    int x;
    printf("enter a alphabet\n");
    scanf("%c", &x);
    if (x >= 'a' && x <= 'z')
    {
        printf("Lowercase");
    }
    else if (x >= 'A' && x <= 'Z')
        printf("Uppercase");
    else
        printf("Special Character");
    return 0
}
