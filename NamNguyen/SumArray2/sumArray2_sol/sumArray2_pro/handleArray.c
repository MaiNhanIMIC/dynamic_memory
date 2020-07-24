#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "handleArray.h"

int** inArray(int** Array, int hang, int cot)
{

	for (int i = 0; i < hang; i++)
	{
		printf("nhap du lieu cho hang %d\r\n", i);
		printf("------------------------\r\n");

		for (int j = 0; j < cot; j++)
		{
			printf("hang: %d, cot: %d\r\n", i, j);
			scanf("%d", &Array[i][j]);
		}
	}
	return Array;
}
void outArray(int** Array, int hang, int cot)
{
	printf("-------mang ban vua nhap--------\r\n");
	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf("%d ", Array[i][j]);
		}
		printf("\n");
	}
	printf("------------------------------\r\n");
	return;
}
int** initArray(int hang, int cot)
{
	int** Array = (int**)malloc(hang * sizeof(int));
	for (int i = 0; i < hang; i++)
	{
		Array[i] = (int*)malloc(cot * sizeof(int));
	}
	return Array;
}
void freeMalloc(int** Array,int hang)
{
	for (int i = 0; i < hang; i++)
	{
		free(Array[i]);
	}
	free(Array);
}
int sumArray(int** Array, int hang, int cot)
{
	int sum = 0;
	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			sum += Array[i][j];
		}
	}
	return sum;
}