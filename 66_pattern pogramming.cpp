//for loop
//box patern
// print o
#include<stdio.h>
int main()
{
	int i,a;
	for(a=1;a<=5;a++)
	{
		for(i=1;i<=5;i++)
		{
			if(a==1 || a==5)
			{
				printf("o");
			}
			else if(i==1 || i==5)
			{
				printf("o");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
