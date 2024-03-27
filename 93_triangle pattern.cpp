//triangle pattern
#include<stdio.h>
int main()
{
	int i,a;
	for(a=1;a<=5;a++)
	{
		for(i=1;i<=a;i++)
		{
			if(i%2==0)
			{
				printf("0");
			}
			else if(i%2!=0)
			{
				printf("1");
			}
			else{
				printf(" ");
			}
		}
	printf("\n");	
	}
	
	for(a=4;a>=1;a--)
	{
		for(i=1;i<=a;i++)
		{
			if(i%2==0)
			{
				printf("0");
			}
			else if(i%2!=0)
			{
				printf("1");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
