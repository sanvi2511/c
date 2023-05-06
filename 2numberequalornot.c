#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b;
    printf("Enter 2 Numbers A and B : \n");
    scanf("%f%f",&a,&b);
    if(a==b)
    {
        printf("Numbers are equal");
    }
    else
    {
        printf("Numbers are not equal");
    }
    getch();
}