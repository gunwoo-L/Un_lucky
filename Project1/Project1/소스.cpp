#include <stdio.h>
int main(void)
{
    unsigned char a1 = 0xa1;
    unsigned char a2 = 0xe1;
    unsigned char b1 = 0xa1;
    unsigned char b2 = 0xe2;
    int i, j;
    for (i = 1;i <= 5;i++)
        printf("%c%c", a1, a2);
    printf("\n");
    for (i = 1;i <= 2;i++)
        printf("%c%c", a1, a2);
    printf("\n");
    for (i = 1; i<= 2;i++)
        printf("%c%c", a1, a2);
    printf("\n");
    for (i = 1;i <= 5;i++)
        printf("%c%c", a1, a2);
    printf("\n");
    for (j = 1;j <= 1;j++)
        printf("%c%c", b1, b2);
    printf("\n");
    for (j = 1;j <= 2;j++)
        printf("%c%c", b1, b2);
    printf("\n");
    for (j = 1; j <= 3;j++)
        printf("%c%c", b1, b2);
    printf("\n");
    for (j = 1;j <= 4;j++)
        printf("%c%c", b1, b2);
    printf("\n");
    for (j = 1;j <= 5;j++)
        printf("%c%c", b1, b2);
    printf("\n");
    return 0;
}