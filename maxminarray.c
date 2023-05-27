#include<stdio.h>
#include<conio.h>
int main()
{
    int size,a[size],i,max,min;
    printf("Enter the size of array : \n");
    scanf("%d",&size);
    printf("Enter elements of Array : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
     min=max=a[0];
    for(i=1; i<size; i++)
    {
        if(min>a[i])
        {
		min=a[i];
        }   
		if(max<a[i])
        {
		max=a[i];
        }       
    }
    printf("minimum of array is : %d",min);
    printf("\nmaximum of array is : %d",max);
    getch();
}