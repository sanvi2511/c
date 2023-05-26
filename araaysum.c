#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a[n],i,sum=0;
    printf("HOW MANY ELEMENTS DO U WANNA ENTER? : ");
    scanf("%d",&n);
    printf("ENTER ALL THE ELEMENTS : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    
	printf("Sum = %d",sum);
    getch();
}