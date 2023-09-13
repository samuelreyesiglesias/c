//types of data in C
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 4;
    float b = 8.5;
    char c = 'u';
    //string is not a data type in C
    //but we can create a string using char array
    char str[] = "harry";
    int d = 45;
    int e = 45 + 4;
    printf("The value of a is %d \n", a);
    printf("The value of b is %f \n", b);
    printf("The value of c is %c \n", c);
    printf("Sum of a and d is %d \n", a + d);
    printf("Sum of a and d is %d \n", e);
    printf("My string is %s \n", str);
    return 0;
}