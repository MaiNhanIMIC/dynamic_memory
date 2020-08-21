#include<stdio.h>
#include "giaiPTB2.h"

int main()
{
	int a, b, c,d,e,f;
	printf("a = ");
	scanf_s("%d", &a);
	printf("\r\nb = ");
	scanf_s("%d", &b);
	printf("\r\nc = ");
	scanf_s("%d", &c);
	printf("\r\nd = ");
	scanf_s("%d", &d);
	printf("\r\ne = ");
	scanf_s("%d", &e);
	printf("\r\nf = ");
	scanf_s("%d", &f);

	phuongtrinhB2 pt1(a, b, c);
	phuongtrinhB2 pt2(d, e, f);
	pt1.hamX(pt2);
	printf("%d", a);
	printf("%d", b);
	printf("%d", c);
	printf("%d", d);
	printf("%d", e);
	printf("%d", f);

	//phuongtrinhB2* pt1 = new phuongtrinhB2;
	//pt1->giaiPT(a, b, c);
	return 0;
}



