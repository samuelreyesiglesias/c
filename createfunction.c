//example of creating and using a function

#include<stdio.h>
#include<stdlib.h>
int sum(int a, int b); //function prototype declaration

int main()
{
    int c;
    c = sum(2, 5); //function call
    printf("The value of c is %d\n", c);
    return 0;
}

int sum(int a, int b) //function definition
{ 
    return a + b; //can be written as return (a+b);
}