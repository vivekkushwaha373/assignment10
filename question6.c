#include<stdio.h>
int printnum(int);
int printnum(int num)
{   int s=1;
    for(int j=1;j<=num;j++)
    {
      s=s*j;
    }
return s;
}
int main()
{
   int num;
   printf("enter a number: ");
   scanf("%d",&num);
   printf("%d",printnum(num));

    return 0;
}