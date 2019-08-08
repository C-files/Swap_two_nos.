#include <stdio.h>
#include <conio.h>

void main() {
    int a,b,c;
    printf("Enter two numbers to swap \n");
    scanf("%d %d",&a,&b);
    printf("Before swap a=%d, b=%d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swap a=%d, b=%d \n",a,b);
    getch();
}