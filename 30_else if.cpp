//find out the value of y.
#include<stdio.h>
#include<math.h>
int main()
{
	int x=2,n=1,y;
	if(n==1)
	{
		y=1+x;
		printf("%d",y);
	}
	else if(n==2)
	{
		y=1+x/n;
		printf("%d",y);
	}
	else if(n==3)
	{
		y=1+pow(x,n);
		printf("%d",y);
	}
	else{
		y=1+n*x;
		printf("%d",y);
	}
	
	return 0;
}
