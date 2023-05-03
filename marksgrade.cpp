#include <stdio.h>
int main()
{
	int marks;
	printf("Enter marks obtained :");
	scanf("%d",&marks);
	{
	if(marks==100)
	printf("you obtained S grade");
	else if(marks>=90 && marks<=99)
	printf("You obtained A grade");
	else if(marks>=80 && marks<=89)
	printf("You obtained B grade");
	else if(marks>=70 && marks<=79)
	printf("You obtained C grade");
	else if(marks>=60 && marks<=69)
	printf("You obtained D grade");
	else if(marks>=50 && marks<=59)
	printf("You obtained E grade");
    else if(marks<=49)
	printf("You obtained U grade");
	return 0;
}
}

