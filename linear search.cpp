#include <stdio.h>
int main()
{
	int array[100],search,c,number;
	printf("Enter the number of element in array \n");
	scanf("%d",&number);
	printf("Enter the %d numbers \n",number);
	for(c=0;c<number;c++)
	scanf("%d",&array[c]);
	printf("Enter the number to search \n");
	scanf("%d",&search);
	for(c=0;c<number;c++)
	{
		if(array[c]==search)
		{
			printf("The number is found \n");
			break;
		}
	}
    if(c==number)
    printf("the number is not found \n");
    return 0;
}
