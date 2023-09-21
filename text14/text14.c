#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int num = 10;
	&num;//取出num的地址：0000 003A 542F F814
	//注：这里num的4个字节，每个字节都有地址，取出的是第一个字节的地址（较小的地址）
	printf("%p\n", &num);//打印地址，%p是以地址的形式打印
	return 0;
}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);//q
//	return 0;
//}
// 
//int main()
//{
//	printf("%d\n", sizeof(char*));	//8
//	printf("%d\n", sizeof(short*));	//8
//	printf("%d\n", sizeof(int*));	//8
//	printf("%d\n", sizeof(double*));//8
//	return 0;
//}
//结论：指针大小在32位平台是4个字节，64位平台是8个字节。