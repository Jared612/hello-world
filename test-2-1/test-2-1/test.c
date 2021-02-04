#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<string.h>
//int main()
//{
//int arr1[10] = {1,2,3};//不完全初始化，剩下的元素默认初始化为0
//int arr2[] = {1,2,3,4};
//int arr3[5] = {1,2,3,4,5};//完全初始化
//char arr4[3] = {'a',98, 'c'}; 
//char arr5[] = {'a','b','c'};
//char arr6[] = "abcdef";
//
//printf("%d\n",sizeof(arr6));//7----计算所占空间的大小
//printf("%d\n",strlen(arr6));//6----/0之前的字符个数，计算字符串长度
//
//return 0;
//}

//1.strlen 和 string 没关联
//2.strlen是求字符串长度的-只能针对字符串求长度-库函数-引头文件
//3.sizeof 计算变量、数组、类型的大小-单位是字节-操作符
//

//
//int main()
//{
//	char arr[]="abcdef";
//	//printf("%c\n",arr[3]);  //%c--打印字符
//	 int i=0;
//	 int len=strlen(arr);
//	 for(i=0;i<len;i++)
//	 { 
//		 printf("%c ",arr[i]);
//	 }
//	return 0;
//} 

//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//    int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);
//	}
//	return 0;
//}
//仔细观察输出的结果，我们知道，随着数组下标的增长，元素的地址，也在有规律的递增。 由此可以得
//出结论：
//数组在内存中是连续存放的。

//int main()
//{
//	int arr[3][4]={{1,2,3},{4,5}};//三行四列	
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		int j=0;
//		for(j=0;j<4;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n"); 
//	}
//	//char ch[5][6]={};
//	//int arr[][4]={{1,2,3,4},{5,6,7,8}};//行可以省略，列不能省略
//
//	return 0;
//}
//int main()
//{
//	int arr[3][4]={{1,2,3},{4,5}};//三行四列	
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		int j=0;
//		for(j=0;j<4;j++)
//		{
//			printf("&arr[%d][%dd] = %p\n",i,j,&arr[i][j]);
//		}
//		printf("\n"); 
//	}
//	
//	return 0;
//}
//通过结果我们可以分析到，其实二维数组在内存中也是连续存储的。
void bubble_sort(int arr[],int sz)
{
	//确定冒泡排序的趟数
	int i=0;
	for(i=0;i<sz;i++)
	{   
		int flag=1;//假设这一趟要排的数据已经有序
		//每一趟冒泡排序的内容
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{	if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag =0;//本趟排序的数据其实不完全有序
			}
	}	
	if (flag==1)
		break;
   }
}
int main()
{
	int arr[]={10,2,3,8,5,6,7,4,9,1};
	//对arr排序，排成升序
	int i=0;
	int sz=sizeof (arr)/sizeof(arr[0]);
	//arr是数组，对数组arr进行传参实际上传递过去的是数组arr首元素的地址
	bubble_sort(arr,sz);//冒泡排序函数
	for (i=0;i<sz;i++)
	{
		printf("%d\n",arr[i],sz);
	}
    return 0;
}	