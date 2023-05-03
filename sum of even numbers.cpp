#include <stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter any number : ");
	scanf("%d",&n);
	for (i=2;i<=n;i++)
	{
		if (i%2==0);
		sum+=i;
    }
    printf("Sum of all even numbers from 1 to %d : %d",n,sum);
    return 0;
}
