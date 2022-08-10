#include<stdio.h>
int check(int,int);
int check(int num,int digit)
{
     while(num!=0)
     {
        if(num%10==digit)
        return 1;
        num=num/10;
     }
     return 0;
}
int main()
{
    int num, digit;
    printf("enter a number: ");
    scanf("%d",&num);
    printf("enter a digit: ");
    scanf("%d",&digit);
    printf("%d",check(num,digit));
}