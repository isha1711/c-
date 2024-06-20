// swaping values without using third variable or temp.

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    a = a + b; // 30
    b = a - b; // 30-20 // 10
    a = a - b; // 30-10 //20

    printf("a = %d\n,b = %d\n", a, b);

    return 0;
}