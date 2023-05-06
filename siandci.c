#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int p,P,c,n;
    float r,si,ci,t,s,R,T,a,sue;
    printf("WHAT IS YOUR CHOICE : \n 1.Simple Interest \n 2.Compound Interest \n");
    scanf("%d",&c);
    if(c==1)
    {
        printf("Enter Principal Amount , Rate of Interest and Time(in terms of year) \n");
        scanf("%d%f%f",&p,&r,&t);
        s=p*r*t;
        si=s/100;
        printf("Simple Interest is :    %f",si);
    }
    if(c==2)
    {
        printf("Enter Principal Amount , Rate of Interest , Number of times interest applied per time period ,Number of Time periods elapsed ");
        scanf("%d%f%d%f",&P,&R,&n,&T);
        sue=n*t;
        ci=P*(1+(R/n));
        a=pow(ci,sue);
        printf("Compound Interest is :  %f",a);
    }
    
    getch();
}