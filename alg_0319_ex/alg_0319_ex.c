
/********************************************************************************************
************************************2019.03.19***********************************************
***************************��ǻ�Ͱ��к� 20151532 ������**************************************
*********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

///////////////////////////////////////////////////// ex1 _ recursive alg

/*
int fib(int n);
int main() {
	int num;

	printf("���° : ");
	scanf("%d", &num);

	//for (int n = 1; n <= num; n++)
	//{
		printf("%d \n", fib(num));
	//}

	system("pause");
	return 0;
}
int fib(int n) {
	if (n == 1 || n == 2)
		return 1;
	else return(fib(n - 1) + fib(n - 2));
}
*/


////////////////////////////////////////////////////// ex2-1 _ iterative alg

/*

int fib(int n);
int main() {
	int num;

	printf("���° : ");
	scanf("%d", &num);

	printf("%d \n", fib(num));

	system("pause");
	return 0;
}
int fib(int n) {
	int f0 = 0;
	int f1 = 1;
	int fn;

	if (n==1)
		return 1;
	else
	{
		while (n-- > 1) {
			fn = f0 + f1;
			f0 = f1;
			f1 = fn;
		}
	}
	return fn;
}
*/

//////////////////////////////////////////////////// ex3 matrix mult
/*
int main()
{
	int n = 3;
	int A[3][3], B[3][3], C[3][3] = { 0 };

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			printf("A��� (%d,%d) ���Ҹ� �Է� : ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j <n; j++)
		{
			printf("B��� (%d,%d) ���Ҹ� �Է� : ", i+1, j+1);
			scanf("%d", &B[i][j]);
		}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
		}
	}
	printf("A��İ� B����� ���� : \n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d \t", C[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
*/

///////////////////////////////////////////////////////// ex4 exchange sort
int sort(int *arr, int element_num);
int main()
{
	int num;
	printf("�迭ũ�⸦ �Է��ϼ��� : ");
	scanf("%d", &num);
	int *arr;
	arr = (int*)malloc(sizeof(int)*num);

	printf("�迭���� �Է��ϼ��� : ");
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &*(arr+i));
	}

	printf("������������ ���� : ");
	sort(arr, num);
}
int sort(int *arr, int element_num)
{
	int i, j;
	int temp;
	for (i = 0; i < element_num; i++)
	{
		for (j = 0; j < element_num; j++)
		{
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}
	}

	for (i = 0; i < element_num; i++) {
		printf("%d \t", arr[i]);
	}
	return 0;
}