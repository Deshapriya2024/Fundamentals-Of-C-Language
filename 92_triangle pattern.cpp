//triangle pattern
#include<stdio.h>
int main()
{
	int i,a;
	for(a=1;a<=4;a++)
	{
		for(i=1;i<=a;i++)
		{
		printf("%d",a);	
		}
		printf("\n");
	}
	
		for(a=3;a>=1;a--)
	{
		for(i=1;i<=a;i++)
		{
		printf("%d",a);	
		}
		printf("\n");
	}

	
	return 0;
}
