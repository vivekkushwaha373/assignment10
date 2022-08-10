#include<stdio.h>
float simpleinterest(int,int,int);
float simpleinterest(int p,int r,int t)
{
return (p*r*t)/100;
}
int main()
{   int p,r,t;
float SI;
    printf("enter the principle amount : ");
    scanf("%d",&p);
    printf("enter the rate of interest: ");
    scanf("%d",&r);
    printf("enter time in terms of year: ");
    scanf("%d",&t);
    SI =simpleinterest(p,r,t);
    printf("simple interest after %d year will be : %f",t,SI);
    return 0;
}