
//C的整型算术运算总数至少以缺省整型类型的精度来进行的
//为了获得这个精度，表达式中的字符和短整型操作数在在使用之前被转换为普通整型，这种转换称为整型提升

//#include<stdio.h>
//int main()
//{
//	//char--signed char
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011-a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111-b
//	char c = a + b;
//	//a和b的大小不够一个整型大小，所以要发生整型提升
//	//整型提升是按照变量原符号位来提升的
//	//10000010-c
//	//11111111111111111111111110000010-补码
//	//11111111111111111111111110000001-反码
//	//10000000000000000000000001111110-原码
//	//-126
//	printf("%d\n", c);
//	//%d-按有符号整型打印
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a = 0x16;//符号位为0，整型提升时补0
//	short b = 0xb600;//符号位为1，整型提升时补1
//	int c = 0xb6000000;//不发生整型提升
//	if (a == 0x16)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}


#include<stdio.h>
int main()
{
	char a = 1;
	printf("%u\n", sizeof(a));
	printf("%u\n", sizeof(+a));//a参与运算，整型提升
	printf("%u\n", sizeof(-a));//a参与运算，整型提升
	return 0;
}