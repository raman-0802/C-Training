#include<stdio.h>
int main() 
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
        printf("%d is the greatest number.\n", a);
    else if (b > a && b > c)
        printf("%d is the greatest number.\n", b);
    else if (c > a && c > b)
        printf("%d is the greatest number.\n", c);
    else
        printf("There is no single greatest number among the three.\n");
    return 0;
}