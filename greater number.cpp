#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b,c numbers \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("A is greater");
		else if(a<c)
		printf("C is greater");
	}
	else
	{
		if(b>c)
		printf("B is greater");
		else if(b<c)
		printf("C is greater");
	}
	
	return 0;
}
