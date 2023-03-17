#include <stdio.h>
int test1()
{
	//  一个整型指针变量p
	int* p;

	//  各式各样的类型
	char c;
	short s;
	int n;
	long l;

	p = c + c;	// char + char = int
	p = s + s;	// short + short = int
	p = n + n;	// int + int = int
	p = l + l;	// long + long = long
	return 0;
}

int test2()
{
	//  一个整型指针变量p
	int* p;

	//  各式各样的类型
	unsigned char c;
	unsigned short s;
	unsigned int n;
	unsigned long l;

	p = c + c;	// char + char = int
	p = s + s;	// short + short = int
	p = n + n;	// int + int = int
	p = l + l;	// long + long = long
	return 0;
}