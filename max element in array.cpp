#include <stdio.h>
int main()
{
int a[5],i,max,n;
for(i=0;i<5;i++)
{
printf("Enter the values:");
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<5;i++)
{

if(max<a[i])
{
	max=a[i];
}
	
}
printf("the max number is %d",max);
}
