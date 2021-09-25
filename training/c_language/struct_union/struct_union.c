#include <stdio.h>

#pragma pack(4) //1,2,4,8 ->tien khai bao su dung alignment

typedef struct {
	char a;
	short b;
	int c;
	long long d;
} abcd_1;

typedef struct {
	char a;
	short b;
	int c;
	long long d;
	union {
		int h;
		char u1;
		short u2;
		int u3;
	} u;


} abcd_2;

int main()
{	
	abcd_1 test1;
	abcd_2 test_var;
	test_var.u.h = 0x12345678;

	printf("\n struct_union \n " );

	printf("\nsizeof(struct abcd_1 test1) = %d", sizeof(test1));
	printf("\n");
	printf("\nsizeof(test1.a) = %d",sizeof(test1.a));
	printf("\nsizeof(test1.b) = %d",sizeof(test1.b));
	printf("\nsizeof(test1.c) = %d",sizeof(test1.c));
	printf("\nsizeof(test1.d) = %d",sizeof(test1.d));

	printf("\ntest_var.u.h = 0x%x",test_var.u.h);
	printf("\ntest_var.u.u1 = 0x%x",test_var.u.u1);
	printf("\ntest_var.u.u2 = 0x%x",test_var.u.u2);
	printf("\ntest_var.u.u3 = 0x%x",test_var.u.u3);
	return 0;

}



