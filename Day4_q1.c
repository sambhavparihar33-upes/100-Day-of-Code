//Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a,b;
    printf("Enter two number here: ");
    scanf("%d %d",&a,&b);

    printf("Before swap a=%d b=%d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swap a=%d b=%d\n",a,b);

return 0;
}
