#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number  ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Number is EVEN");

    }
    else{
        printf("Number is ODD");
    }
    getch();
}