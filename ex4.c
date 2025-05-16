//write two functions that finds the maximum and minimum of three numbers
#include <stdio.h>
#include <stdlib.h>
int max(int a, int b, int c)
{
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}