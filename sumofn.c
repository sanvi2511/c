#include<stdio.h>
#include<conio.h>
int main()
{
    int n,s;
    printf("Enter n    ");
    scanf("%d",&n);
    s=(n*(n+1))/2;
    printf("Sum of n numbers = %d",s);
    getch();
}