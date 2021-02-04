#define _CRT_SECURE_NO_WARNINGS 1 
//求和函数
//#include <stdio.h>
//int Add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	int sum=Add(a,b);
//    printf("%d\n",sum);
//	return 0;
//}

//strcpy--string copy-字符串拷贝
//#include <stdio.h>
//#include <string.h>
//	int main()
//{
//	char arr1[]="bit";
//	char arr2[20]="###########";
//	strcpy(arr2,arr1);///-------将arr2的字符串 copy 为arr1的字符串  ---最后的\0也copy
//    printf("%s\n",arr2);	
//return 0;
//	}



//memset
//memory-内存 set-设置
//
//#include<stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[]="hello world";
//	memset(arr,'*',5);  //-----将arr中 第一个及其以后的 字符换成*，5表实个数
//	printf("%s\n",arr);
//	return 0;
//}


//自定义函数
//举例子--写一个函数可以找出两个整数中的最大值
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	int max=get_max(a,b);
//	printf("%d\n",max);
//	max=get_max(100,300);
//	printf("%d\n",max);
//	return 0;
//}



//写一个函数可以交换两个整形变量的内容
//#include<stdio.h>
//无函数方法
//int main()
//{
//	int a=10;
//	int b=20;
//	int tmp=0;
//	printf("a=%d,b=%d\n",a,b);
//	tmp =a;
//	a=b;
//	b=tmp;
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}
//创建函数
//void Swap(int* pa,int* pb)
//{
//	int tmp =0;
//	tmp=*pa;
//	*pa=*pb;
//	*pb=tmp;
//}
//int main()
//{ 
//	int a=10;
//    int b=20;
//	printf("a=%d,b=%d\n",a,b);	 
//	Swap(&a,&b);
//	printf("a=%d,b=%d\n",a,b);	
//	return 0;
//}




//1. 写一个函数可以判断一个数是不是素数。
//#include<math.h>
//#include<stdio.h>
//int is_prime(int n)
//{
//	int j=0;
//	for(j=2;j<=sqrt(n);j++)
//	{
//		if(n%j==0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i=0;
//	for(i=100;i<=200;i++)
//	{
//			if(is_prime(i)==0)
//				printf("%d ",i);
//	}
//	return 0;
//}


//2. 写一个函数判断一年是不是闰年。
//
//#include<stdio.h>
//int is_leap_year(int(y))
//{
//	if((y%4==0&&y%100!=0)||(y%400==0))
//		return 1;
//	else
//		return 0;
//}  
//int main()
//{
//	int year =0;
//	for(year=1000;year<=2000;year++)
//	{
//      if(1== is_leap_year(year))	
//	   {  printf("%d ",year);
//	
//	   }
//    }
//
//	return 0;
//}


//3. 写一个函数，实现一个整形有序数组的二分查找
//#include<stdio.h>
//int binary_search(int arr[],int k,int sz)
//{
//	int left=0;
//	int right=sz-1;
//	while(left<=right)
//	{
//	int mid =(left+right)/2;
//	if(arr[mid]<k)
//	{
//		left=mid+1;
//	}
//	else if(arr[mid]>k)
//	{
//		right=mid-1;
//	}
//	else
//	{
//		return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);
//if(ret==-1)
//{
//	printf("找不到指定的数字\n");
//}
//else
//{
//	printf("找到了，下标是：%d\n"，ret);
//}
//	return 0;
//}

//4. 写一个函数，每调用一次这个函数，就会将num的值增加1。
//#include<stdio.h>
//void Add(int* p)
//{
//	(*p)++; 
//}
//int main()
//{
//	int num=0;
//	Add(&num);
//	printf("num=%d\n",num);
//	Add(&num);
//	printf("num=%d\n",num);
//	Add(&num);
//	printf("num=%d\n",num);
//	return 0;
//}
//函数的嵌套调用和链式访问
//
//#include <stdio.h>
//void new_line()
//{
// printf("hehe\n");
//}
//void three_line()
//	{
//    int i = 0;
// for(i=0; i<3; i++)
//   { 
//        new_line();
//   }
//}
//int main()
//{
// three_line();
// return 0;
//}




//函数递归---自己调用自己，大事化小

#include<stdio.h>
//int main()
//
//{
//	printf("hehe");//--一直打印hehe
//	main();
//	return 0;
//}
//
//练习一接受一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入：1234，输出 1 2 3 4.
//#include <stdio.h>
//void print(int n)
//{
// if(n>9)
// {
// print(n/10);
// }
// printf("%d ", n%10);
//}
//int main()
//{
// int num = 1234;
// print(num);
// return 0;
//}
//
//
//递归的两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归便不再继续。
//每次递归调用之后越来越接近这个限制条件


//练习2：
//编写函数不允许创建临时变量，求字符串的长度。
#include <stdio.h>
#include <string.h>
//int my_strlen(char* str)
//{	
//	int count=0;
//    while(*str!='\0')
//  {
//	count++;
//	str++;
//   }
//return count;
//}
//递归的方法
//int my_strlen(char* str)
//{
//	if(*str!='\0')
//		return 1+my_strlen(str+1); 
//	else
//	return 0;
//}
//
//int main()
//{
//	char arr[]="bit";
//	int len =my_strlen(arr);//求字符串长度 
//	printf("len=%d\n",len);
//	return 0;
//
//}
//练习3：
//求n的阶乘
//int fac(int n)
//{
//	if(n<=1)
//		return 1;
//	else
//		return n*fac(n-1);
//}
//int main()
//{
//	int n=0;
//	int ret=0;
//    scanf("%d",&n);
//	ret=fac(n);
//	printf("%d\n",ret);
//
//
//	return 0;
//}
//练习4
//求第n个斐波那契数
//int fib(int n)
//{
//	int a=1;
//	int b=1;
//	int c=1;
//	while(n>2)
//	{
//		c=a+b;
//		a=b;
//		b=c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n=0;
//	int ret=0;
//	scanf("%d",&n);
//	ret=fib(n);
//	printf("%d\n",ret);
//	return 0;
//}

