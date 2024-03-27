//take your avg mark and check and display your grade.
#include<stdio.h>
int main()
{
	int avg=55;
	if(avg>=90){
		printf("0 grade");
	}
	else if(avg>=80 && avg<=89){
		printf("E grade");
	}
	else if(avg>=70 && avg<=79){
		printf("A grade");
	}
	else if(avg>=60 && avg<=69){
		printf("B grade");
	}
	else if(avg>=50 && avg<=59){
		printf("C grade");
	}
		else if(avg>=40 && avg<=49){
		printf("D grade");
	}
	else
	{
		printf("Sorry ! You are Failed");
	}
		
	
	
	return 0;
}
