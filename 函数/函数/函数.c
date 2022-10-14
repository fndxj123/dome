#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////void 没有返回值
//void Swap(int* pa, int* pb)//函数里定义的为形参
////形参实例化后是实参的一份临时拷贝
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
//	//调用函数--传值调用,不会影响实参
//	Swap(a, b);
//	//传址调用--改变函数外部变量
//	Swap(&a,&b); //取地址，（）为实参
//	printf("%d\n%d",a, b);
//	return 0;
//}
//判断是不是素数
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
//			printf("%d是素数\n", i);
//	}
//	return 0;
//}


//函数声明，函数体放主函数前面可以不用声明
//void Add(int*);//函数声明写在头文件里，调用自己写的函数用#include" ";
////                函数体写在.c文件。
////函数的定义
//void Add(int* p)
//{
//	(*p)++;//要加括号
//}
//
//
//int main()
//{
//	int num = 0;
//	//调用函数
//	Add(&num);
//	printf("%d", num);
//	return 0;
//}
//

//printf代表打印的个数
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}

//函数递归
// 递归函数要有限制条件，且每次递归都无限接近限制条件
//逐个输出1 2 3 4
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
//计算字符串长度
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

//递归的方法
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

//斐波那契第n个数 1 1 2 3 5 8 13..
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
