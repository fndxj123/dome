#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ṹ�� struct�ǽṹ��ؼ��֣�stu�ǽṹ���ǩ��û�д�������ʱ��ռ�ÿռ�
//struct stu�ǽṹ������
//struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}s1,s2,s3;//s1,s2,s3��ȫ�ֱ���


//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[20];
//	char sex[10];
//
//}stu;   //typedef--���¶�����������
////��ַ
//void Print(struct stu* pc)
//{
//	printf("%s\n", pc->name);
//	printf("%d\n", (*pc).age);
//}
//void Print2(stu tmp)
//{
//	printf("%s\n", tmp.sex);
//	printf("%s\n", tmp.tele);
//}
//int main()
//{
//	//struct stu s;//s�Ǿֲ�����
//	stu s2 = {"����",20,"13754913961","��"};
//	Print(&s2);//����ַ��ֻռ4/8���ڴ棬ͨ����ַ�ҵ�����
//	Print2(s2);//��ʵ�Σ���Ҫ���±������ݣ�ռ�ڴ�
//	return 0;
//}



//Ƕ��
//struct S
//{
//	int a;
//	char arr[10];
//};
//struct T
//{
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello world";
//	struct T t1 = { {20,"hello"},arr};//�ṹ���ʼ���ô�����
//	printf("%p", t1.s.arr);//%s��ӡ���������ݣ�%p��ӡ��ַ
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = 1;
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
///*	printf("%p\n", &i);
//	printf("%p", &arr[12]);*/ //i ��arr[12]��ַ��ͬ��
//							//��i=12ʱarr[12]��i��ֵΪ0��������ѭ��
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

int main()
{
	int a, b, c, max;
	scanf("%d%d%d",&a, &b, &c);
	if (a >= b)
		max = a;
	else
		max = b;
	if (c > max);
		max = c;
	printf("%d", max);

	return 0;
}