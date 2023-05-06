#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    printf("Enter 3 numbers to be compared (A,B,C)");
    scanf("%f%f%f",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("A is the greatest number that is  %f",a);
    }
    if(b>a&&b>c)
    {
        printf("B is the greatest number that is  %f",b);
    }
    if(c>a&&c>b)
    {
        printf("C is the greatest number that is  %f",c);
    }
    getch();
}