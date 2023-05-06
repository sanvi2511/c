#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    printf("Enter 2 numbers (A,B)\n");
    scanf("%f%f",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Inversed Numbers are A = %f and B = %f",a,b);
    getch();
}