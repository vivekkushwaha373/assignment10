#include<stdio.h>
int combcount(int,int);
int combcount(int n,int r)
{
    int s=1,k=1,l=1;
    for(int j=1;j<=n;j++)
    {
        s=s*j;
    }
      for(int j=1;j<=(n-r);j++)
    {
        k=k*j;
    }
      for(int j=1;j<=r;j++)
    {
        l=l*j;
    }

   return s/(k*l);

}
int main()
{
   int n,r;
   printf("enter the total number of items: ");
   scanf("%d",&n);
   printf("number of selection at a time: ");
   scanf("%d",&r);
   printf("no of combination = %d",combcount(n,r));
    return 0;
}