//write two functions that finds the maximum and minimum of three numbers
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The maximum of %d, %d, and %d is: %d\n", a, b, c, max(a,b,c));
    printf("The minimum of %d, %d, and %d is: %d\n", a, b, c, min(a,b,c));
}