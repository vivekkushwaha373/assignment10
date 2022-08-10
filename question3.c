#include<stdio.h>
int numcheck(int);
int numcheck(int num)
{
    if(num%2==0)
    {
        return 1;
    }
    else
    return 0;
}
int main()
{ int num;

printf("enter a number: ");
scanf("%d",&num);
printf("%d",numcheck(num));

}