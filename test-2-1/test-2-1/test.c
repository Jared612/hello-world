#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<string.h>
//int main()
//{
//int arr1[10] = {1,2,3};//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//int arr2[] = {1,2,3,4};
//int arr3[5] = {1,2,3,4,5};//��ȫ��ʼ��
//char arr4[3] = {'a',98, 'c'}; 
//char arr5[] = {'a','b','c'};
//char arr6[] = "abcdef";
//
//printf("%d\n",sizeof(arr6));//7----������ռ�ռ�Ĵ�С
//printf("%d\n",strlen(arr6));//6----/0֮ǰ���ַ������������ַ�������
//
//return 0;
//}

//1.strlen �� string û����
//2.strlen�����ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��-��ͷ�ļ�
//3.sizeof ������������顢���͵Ĵ�С-��λ���ֽ�-������
//

//
//int main()
//{
//	char arr[]="abcdef";
//	//printf("%c\n",arr[3]);  //%c--��ӡ�ַ�
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
//��ϸ�۲�����Ľ��������֪�������������±��������Ԫ�صĵ�ַ��Ҳ���й��ɵĵ����� �ɴ˿��Ե�
//�����ۣ�
//�������ڴ�����������ŵġ�

//int main()
//{
//	int arr[3][4]={{1,2,3},{4,5}};//��������	
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
//	//int arr[][4]={{1,2,3,4},{5,6,7,8}};//�п���ʡ�ԣ��в���ʡ��
//
//	return 0;
//}
//int main()
//{
//	int arr[3][4]={{1,2,3},{4,5}};//��������	
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
//ͨ��������ǿ��Է���������ʵ��ά�������ڴ���Ҳ�������洢�ġ�
void bubble_sort(int arr[],int sz)
{
	//ȷ��ð�����������
	int i=0;
	for(i=0;i<sz;i++)
	{   
		int flag=1;//������һ��Ҫ�ŵ������Ѿ�����
		//ÿһ��ð�����������
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{	if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag =0;//���������������ʵ����ȫ����
			}
	}	
	if (flag==1)
		break;
   }
}
int main()
{
	int arr[]={10,2,3,8,5,6,7,4,9,1};
	//��arr�����ų�����
	int i=0;
	int sz=sizeof (arr)/sizeof(arr[0]);
	//arr�����飬������arr���д���ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ
	bubble_sort(arr,sz);//ð��������
	for (i=0;i<sz;i++)
	{
		printf("%d\n",arr[i],sz);
	}
    return 0;
}	