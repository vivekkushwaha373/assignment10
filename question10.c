#include<stdio.h>
void factor(int);
void factor(int num)
{
     if(num==1)
    {
        printf("1");
        
    }
 for(int j=2;j<=num;j++)
 {
   
    if(num%j==0 )
    {
        num=num/j;
       
        printf("%d ",j);
         j-=1;
    }
 }
}
int main()
{int num;
printf("enter a number: ");
scanf("%d",&num);
   factor(num);
    return 0;
}