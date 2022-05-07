#include<stdio.h>
void my_fib(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz-1;i++)//确定冒泡排序的趟数 
	{
		int j=0;
		int folg=1;//假设这一趟排序的数据已经有序 
		for(j=0;j<sz-1-i;j++) //确定每趟的次数 
		{
			if(arr[j]>arr[j+1])
			{
				int tem=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tem;
				folg=0;//如果不有序则  flog=0 
			 } 
		}
		if(folg==1)
		{
			break;
		}
	}
}
int main()
{
	int arr[]={1,6,8,3,2,9,10,4};
	//将数字升序 
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
    my_fib(arr,sz);//冒泡排序函数 
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
