#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter Number \n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("NOT PRIME");
    }
    else{
        printf("PRIME");
    }
}   
