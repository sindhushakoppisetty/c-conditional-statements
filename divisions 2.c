#include<stdio.h>
void main()
{
	int num;
	printf("enter num");
	scanf("%d",& num);
	if (num%1==0)
	{
		printf("divisible by 1\n");
	}
	if (num%2==0)
	{
		printf("divisible by 2");
	}
	if (num%3==0)
	{
		printf("\ndivisible by 3");
	}
	if(num%4==0)
	{
		printf("\ndivisible by 4");
	}
}
