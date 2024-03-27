//calculate the total mark and the avg mark of a student.
#include<stdio.h>
int main()
{
	int phy=60,chem=80,math=60,it=40,bio=40,eng=80,totalmark,avgmark;
	totalmark=phy+chem+math+it+bio+eng;
	avgmark=totalmark/6;
	printf("Total mark is %d\n",totalmark);
		printf("Avg mark is %d\n",avgmark);
   return 0;
}
