#include<stdio.h>
#include<math.h>
int main()
{
    int arr[]={1,2,3,4,6,7},s,sum=0,d,n=7,i;
    s=(n*(n+1))/2;
    for(i=0;i<n-1;i++)
    {
        sum=sum+arr[i];
    }
    d=s-sum;
    printf("The missing number is %d",d);
    return 0;
}#include<stdio.h>
#include<math.h>
int main()
{
    int arr[]={1,2,3,4,6,7},s,sum=0,d,n=7,i;
    s=(n*(n+1))/2;
    for(i=0;i<n-1;i++)
    {
        sum=sum+arr[i];
    }
    d=s-sum;
    printf("The missing number is %d",d);
    return 0;
}