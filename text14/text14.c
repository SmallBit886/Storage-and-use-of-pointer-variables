#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int num = 10;
	&num;//ȡ��num�ĵ�ַ��0000 003A 542F F814
	//ע������num��4���ֽڣ�ÿ���ֽڶ��е�ַ��ȡ�����ǵ�һ���ֽڵĵ�ַ����С�ĵ�ַ��
	printf("%p\n", &num);//��ӡ��ַ��%p���Ե�ַ����ʽ��ӡ
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
//���ۣ�ָ���С��32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽڡ�