#include<stdio.h>
int main()
{
int x[10],y,largest;
printf("Find largest enter ten number \n");
for(y=0;y<=9;y++)
{
printf("Enter a number :");
scanf("%d",&x[y]);
}
largest=x[0];
for(y=0;y<=9;y++)
{
if(x[y]>largest) largest=x[y];
}
printf("Largest is %d\n",largest);
return 0;
}