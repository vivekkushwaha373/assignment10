#include<stdio.h>
void printnum(int);
void printnum(int num)
{
    for(int j=1;j<=num;j++)
    {
        printf("%d\n",j);
    }

}
int main()
{
   int num;
   printf("enter a number: ");
   scanf("%d",&num);
   printnum(num);

    return 0;
}