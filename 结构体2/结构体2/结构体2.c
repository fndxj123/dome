#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//结构体 struct是结构体关键字，stu是结构体标签，没有创建变量时不占用空间
//struct stu是结构体类型
//struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}s1,s2,s3;//s1,s2,s3是全局变量


//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[20];
//	char sex[10];
//
//}stu;   //typedef--重新定义类型名称
////传址
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
//	//struct stu s;//s是局部变量
//	stu s2 = {"刘鑫",20,"13754913961","男"};
//	Print(&s2);//传地址，只占4/8个内存，通过地址找到数据
//	Print2(s2);//传实参，需要重新备份数据，占内存
//	return 0;
//}



//嵌套
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
//	struct T t1 = { {20,"hello"},arr};//结构体初始化用大括号
//	printf("%p", t1.s.arr);//%s打印出数组内容，%p打印地址
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
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
//	printf("%p", &arr[12]);*/ //i 和arr[12]地址相同，
//							//当i=12时arr[12]将i赋值为0，所以死循环
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