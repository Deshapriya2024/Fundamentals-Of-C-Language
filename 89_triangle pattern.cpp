//triangle pattern
#include<stdio.h>
int main()
{
	int i,a;
	for(a=1;a<=5;a++)
	{
		for(i=1;i<=a;i++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(a=5;a>=1;a--){
		for(i=1;i<=a;i++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
