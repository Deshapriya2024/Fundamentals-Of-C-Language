//for loop
//print 999 888
#include<stdio.h>
int main()
{
	int i;
	for(i=999;i>=111;i=i-111)
	{
		if(i==777){
			break;
		}
		printf("%d\n",i);
	}
	return 0;
}
