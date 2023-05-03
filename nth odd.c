#include <stdio.h>
int main ()
{
int n,start,nth_odd;
printf("enter th starting odd number : "); 
scanf("%d",&start);
printf("enter the value of n : ");
scanf("%d",&n);
nth_odd=start+(n-1)*2;
printf("the nth odd number after %d is %d",start,nth_odd);
return 0;
}
