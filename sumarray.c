#include<stdio.h>
#include<conio.h>

int main()
{
    int n,size,a[size],i,sum=0;
    printf("Enter the size of ARRAY : \n");
    scanf("%d",&size);
    printf("Enter elements of ARRAY : \n");
    
    for(i=0;i<size;i++)
    {
    	scanf("%d",&a[i]);
    	sum=sum+a[i];
    }
    printf("Sum of elements = %d",sum);
    getch();
}
