//triangle pattern
#include<stdio.h>
int main()
{
	int i,a;
	for(a=9;a>=7;a--)
	{
		for(i=3;i>=a-6;i--)
		{
			printf("%d ",a);
		}
		printf("\n");
	}
	for(a=6;a>=5;a--){
		for(i=1;i<=a-4;i++){
			printf("%d ",a);
		}
		printf("\n");
	}
	return 0;
}
