#include<stdio.h>
#include<string.h>

void cube ()
{
	int a,b;
	
	printf("Enter The Value A = \n");
	scanf("%d",&a);
	
	b=a*a*a;
	
	printf("Cube of %d is = %d",a,b);
}

void main()
{	
	cube();
}