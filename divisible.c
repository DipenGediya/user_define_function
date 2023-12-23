#include<stdio.h>

void divisible()
{
	int a;
		
	printf("Enter The Value of A = ");
	scanf("%d",&a);
	
	if(a%3==0 && a%5==0)
	{
		printf("%d is Divisible with 5 & 3",a);
	}
	else
	{
		printf("%d is Not Divisible With 5 & 3",a);
	}
}

void main()
{	
	divisible();
}