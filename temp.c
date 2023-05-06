#include<stdio.h>
#include<conio.h>
int main()
{
    float f,c;

    printf("Enter Temperature in Centigrade : \n");
    scanf("%f",&c);
    f=((9*c)/5)+32;
    printf("Temperature in Fahrenhiet : %f",f);
    getch();
}