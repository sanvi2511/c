#include<stdio.h>
#include<conio.h>
int main()
{
    float r,a,c;
    printf("Enter Radius of Circle : \n");
    scanf("%f",&r);
    c=2*3.14*r;
    a=3.14*r*r;
    printf("Circumference of Circle :   %f \n",c);
    printf("Area of Circle :            %f",a);
    getch();
}