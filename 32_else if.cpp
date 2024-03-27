#include<stdio.h>
int main(){
	int avg=70;
	if(avg>=90){
		printf("o grade");
	}
	else if(avg>=80 && avg<=89){
		printf("E grade");
	}
	else{
		printf("Sorry You Are fail !.. better luck next time ");
	}
	return 0;
}

