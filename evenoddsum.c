#include<stdio.h>
int main()
{
    int n,e,o,esum=0,osum=0,i;
    printf("Enter the range \n");
    scanf("%d",&n);
    for(i=0;i<n+1;i++)
    {
        if(i%2==0)
        {
            esum=esum+i;
        }
        else
        {
            osum=osum+i;
        }
    }
    printf("Sum of Even Numbers : %d \n",esum);
    printf("Sum of Odd Numbers : %d",osum);
}