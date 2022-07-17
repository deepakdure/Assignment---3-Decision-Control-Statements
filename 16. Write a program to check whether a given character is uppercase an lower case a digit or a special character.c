// Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character
#include <stdio.h>
int main()
{
    int n;
    printf("enter a character\n");
    scanf("%c", &n);
    if (n >= 'A' && n <= 'Z')
        printf("Uppercase");

    else if (n >= 'a' && n <= 'z')
        printf("Lowercase");
    else if (n >= '0' && n <= '9')
        printf("Digit");
    else
        printf("Special Character");
    return 0;
}