#include<stdio.h>
#include<conio.h>
int main()
{
    int p,c,m,b,e,s;
    float per;
    printf("Input marks of Physics , Chemistry , Maths and English\n");
    scanf("%d%d%d%d%d",&p,&c,&m,&b,&e);
    s=p+c+m+b+e;
    per=s/5;
    printf("Sum of Marks entered : %d \n",s);
    printf("Percentage : %f",per);
    getch();
}
