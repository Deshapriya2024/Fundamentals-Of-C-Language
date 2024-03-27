//triangle pattern
#include<stdio.h>
int main()
{
	int i,a;
	for(a=1;a<=5;a++){
		for(i=1;i<=a;i++){
			if(a%2==0){
				printf("@");
			}
			else if(a%2!=0){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
