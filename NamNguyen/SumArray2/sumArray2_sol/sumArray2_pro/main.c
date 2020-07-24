#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "handleArray.h"
void main()
{
	int hang = 0, cot = 0;
	printf("nhap so luong hang: ");
	scanf("%d", &hang);
	printf("nhap so luong cot: ");
	scanf("%d", &cot);
	int** initArrayReturn = initArray(hang, cot);
	int** inArrayReturn = inArray(initArrayReturn, hang, cot);
	outArray(inArrayReturn, hang, cot);
	printf("Tong cac gia tri trong mang ==> %d\r\n", sumArray(inArrayReturn, hang, cot));
	freeMalloc(inArrayReturn,hang);
	printf("nhan phim bat ky de thoat chuong trinh\r\n");
	while (1)
	{
		char c = getch();
		if (c != 0)
			break;
	}
	return;
}