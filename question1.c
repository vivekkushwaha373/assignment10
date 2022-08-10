#include<stdio.h>
float areaofcircle(int );
float areaofcircle(int r)
{   
    return (3.14*r*r);
}
int main()
{
 float r;
 printf("enter the radius: ");
 scanf("%f",&r);
 printf("%f",areaofcircle(r));


    return 0;
}