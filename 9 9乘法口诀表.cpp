#include<stdio.h>
int main()
{
	int i=1;
	for(i=1;i<=9;i++)//打印9行 
	{
		int j=1;
		for(j=1;j<=i;j++)//表示打印的每列 
		{
			printf("%d*%d=%-2d  ",j,i,j*i);//%-2d表示数字左对齐     \t也有相同效果 
		}
		printf("\n");
	}
	return 0;
}
