#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////void û�з���ֵ
//void Swap(int* pa, int* pb)//�����ﶨ���Ϊ�β�
////�β�ʵ��������ʵ�ε�һ����ʱ����
//
//{
//	int tmp;
//	tmp=*pa;
//	*pa=*pb;
//	*pb = tmp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//���ú���--��ֵ����,����Ӱ��ʵ��
//	Swap(a, b);
//	//��ַ����--�ı亯���ⲿ����
//	Swap(&a,&b); //ȡ��ַ������Ϊʵ��
//	printf("%d\n%d",a, b);
//	return 0;
//}
//�ж��ǲ�������
//int is_prime(int n)
//{
//	int j;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d������\n", i);
//	}
//	return 0;
//}


//�����������������������ǰ����Բ�������
//void Add(int*);//��������д��ͷ�ļ�������Լ�д�ĺ�����#include" ";
////                ������д��.c�ļ���
////�����Ķ���
//void Add(int* p)
//{
//	(*p)++;//Ҫ������
//}
//
//
//int main()
//{
//	int num = 0;
//	//���ú���
//	Add(&num);
//	printf("%d", num);
//	return 0;
//}
//

//printf�����ӡ�ĸ���
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}

//�����ݹ�
// �ݹ麯��Ҫ��������������ÿ�εݹ鶼���޽ӽ���������
//������1 2 3 4
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}
//�����ַ�������
//int my_strlen(char* p)
//{
//	int count = 0;
//	while(*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}

//�ݹ�ķ���
//int my_strlen(char* p)
//{
//	if (*p != '\0')
//	{
//		return 1 + my_strlen(p + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len=%d", len);
//	return 0;
//}

//쳲�������n���� 1 1 2 3 5 8 13..
int Fib(int a)
{
	if (a <= 2)
		return 1;
	else
		return Fib(a-1) + Fib(a - 2);
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("%d", ret);
	return 0;

}
