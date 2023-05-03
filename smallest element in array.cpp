#include <stdio.h>
int main()
{
int a[5],i,min,n;
for(i=0;i<5;i++)
{
printf("Enter the values:");
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<5;i++)
{

if(min>a[i])
{
	min=a[i];
}
	
}
printf("the min number is %d",min);
}
