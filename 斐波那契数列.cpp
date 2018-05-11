/*
1.递归和非递归分别实现求第n个斐波那契数。
#include <stdio.h>

int fib(int n)
{
if(n <= 2)
return 1;
else
return fib(n-1) + fib(n-2);
}

/*int fib(int n)
{
	int f1 = 1;
	int f2 = 1;
	int fn = 0;
	int i = 0;
	if (n <= 2)
		return 1;
	for (i = 3; i <= n; i++)
	{
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
	}
	return fn;
}  

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d", ret);
	system("pause");
	return 0;
}
 

2.编写一个函数实现n^k，使用递归实现
#include <stdio.h>
int  GetCount(int n, int k)
{
	if ((0 == k) || (1 == n))
		return 1;
	else if (1 == k)
		return n;
	else
		return n*GetCount(n, k - 1);
}

int main()
{
	int n = 7;
	int k = 3;
	int ret = GetCount(n, k);
	printf("%d", ret);
	system("pause");
	return 0;
} 

3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19 
#include<stdio.h>  
int DigSum(int n)
{
	if (n <= 10)
		return 1;
	else
		return n % 10 + DigSum(n / 10);
}
int main()
{
	printf("%d\n", DigSum(1729));
	return 0;
}
4. 编写一个函数reverse_string(char * string)（递归实现） 
实现：将参数字符串中的字符反向排列。 
要求：不能使用C函数库中 
的字符串操作函数。 
 #include<stdio.h>
void reverse_string(char* string)
{
    if (*string == '\0')
    {
        return;
    }
    reverse_string(string + 1);
    printf("%c", *string);
}
int main()
{
    char string[] = "abcdefghijk";
    reverse_string(string);
    printf("\n");
    
    return 0;
}
5.递归和非递归分别实现strlen 
#include <stdio.h>
#include <assert.h>

//int my_strlen(const char *str)
//{
//	assert(str);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
int my_strlen(const char *str)
{
	assert(str);
	int count = 0;
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}

int main()
{
	char arr[] = "abdbakjnfls";
	int len = my_strlen(arr);
	printf("%d ", len);
	system("pause");
	return 0;
}
6.递归和非递归分别实现求n的阶乘 
#include <stdio.h>

//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
int fac(int n)
{
	int i = 0;
	int result = 1;
	for (i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", fac(n));
	system("pause");
	return 0;
}
7.递归方式实现打印一个整数的每一位
#include <stdio.h>
void getadd(int n)
{
	if (n > 9)
	{
		getadd(n / 10);
	}
	printf("%d  ", n % 10);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	getadd(n);

	system("pause");
	return 0; 
} */ 
 
 
