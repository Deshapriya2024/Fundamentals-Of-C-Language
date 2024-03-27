//calculate belectricity bill.
#include<stdio.h>
#include<math.h>
int main()
{
	int unit=55,totalamount;
	if(unit<=100)
	{
		totalamount=unit*4;
		printf("%d",totalamount);
	}
		if(unit>100 && unit<=300 )
	{
		totalamount=unit*5;
		printf("%d",totalamount);
	}
		if(unit>300 && unit<=400)
	{
		totalamount=unit*6;
		printf("%d",totalamount);
	}
		else
	{
		totalamount=unit*7;
		printf("%d",totalamount);
	}
	return 0;
}
