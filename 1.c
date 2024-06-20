#include <stdio.h>

void main()
{
    int a = 10, b = 20; 
    int temp;

    printf("Before swaping : a=%d \n , b=%d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swaping : a=%d \n , b=%d\n", a, b);
}