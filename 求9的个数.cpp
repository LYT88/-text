#include<stdio.h>
int main()
{
	//求1到100中9的个数
	int i=0;
	int count=0;
	printf("1到100中含9的数：\n");
	for(i=1;i<=100;i++)
	{
		if(i%10==9)//个位上含有9 
		{
			count++;
			printf("%d ",i);
		}
		if(i/10==9)//十位上含有9 
		{
			count++;
			printf("%d ",i);
		}
	 } 
	 printf("\n");
	 printf("count=%d",count);
	return 0;
}
