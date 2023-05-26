#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    printf("INPUT ELEMENTS OF FIRST ARRAY : \n");
    for(i=0;i<n;i++)
    {`
        scanf("%d",&a[i]);
    }
    printf("INPUT ELEMENTS OF SECOND ARRAY : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("SUM OF ARRAYS : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
     getch();
}
