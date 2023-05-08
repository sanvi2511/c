#include<stdio.h>
int main()
{
    int i,febo,n,a=0,b=1,c;
    printf("Enter the range \n");
    scanf("%d",&n);
    printf("\n%d%d",a,b);
    for(i=1;i<n;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}