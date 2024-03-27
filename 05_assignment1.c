#include<stdio.h>
#include<math.h>
int main()
{
int alpha=4,beta=3,theta=60,x=6,z;
z=(alpha+beta)/sin(theta*3.14/180)+fabs(x);
printf("%d",z);
	return 0;
}
