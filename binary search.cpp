#include <stdio.h>
int main()
{
	int i,a[15],n,x,low,mid,high;
	printf("The number of elements ");
	scanf("%d",&n);
	printf("Enter the elements in sorted order :");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("Enter the number to be sortrd");
	scanf("%d",&x);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if (x==mid)
	{
		printf("element is found");
		break;
	}
	else if (x<mid)
	{
	high=mid-1;
    }
	else
    {
    low=mid+1;
	}
	if(low>high)
	printf("element not found");
}
}

