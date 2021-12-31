#include<stdio.h>
void main()
{
	int cost_price,sell_price;
	printf("enter cost_price\n");
	scanf("%d",&cost_price);
		printf("enter sell_price");
		scanf("%d",&sell_price);
		if(cost_price<sell_price)
		{
			printf("profit");
		}
		else if(cost_price>sell_price)
		{
			printf("loss");
		}
				else
			{
				printf("0");
			}
		
}
				

