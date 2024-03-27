#include<stdio.h>
int main()
{
int a=10,b=20,result1,result2,result3,result4;
result1=(a>b) && (a<b);
result2=(a>b) || (a<b);
result3=(a>b) || (a<b) || (a>b);
result4=!(a>b);
printf("result is %d\n",result1);
printf("result is %d\n",result2);
printf("result is %d\n",result3);
printf("result is %d\n",result4);

	return 0;
}
