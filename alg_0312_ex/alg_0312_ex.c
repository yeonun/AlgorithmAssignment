#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)


/*
////////////////////////////////////////////////////////////// ex1
int main()
{
	int ans=0, i, j;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			ans = ans + i * j;
			
		}
		
	}
	printf_s("�ñ׸� ��¼�� �� : %d \n", ans);
	
	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////////////////// ex2 

int med3(int a, int b, int c)
{
	if (a >= b)
		if (b >= c)
			return b;
		else if (a <= c)
			return a;
		else
			return c;
	else if (a > c)
		return a;
	else if (b > c)
		return c;
	else return b;
}

int main()
{		
	int a, b, c;

	printf("�� ������ �߾Ӱ��� ���մϴ�. \n");
	printf("a�� �� :");
	scanf("%d", &a);
	printf("b�� �� :");
	scanf("%d", &b);
	printf("c�� �� :");
	scanf("%d", &c);
	
	printf("�߾Ӱ��� %d�Դϴ�.\n", med3(a, b, c));

	system("pause");
	return 0;
}
*/
///////////////////////////////////////////////// ex3 �����˻�

int binarysearch(int input, int first, int end)
{
	int count = 0;
	//int mid = (first + end) / 2;
	while (first <= end)
	{
		int mid = (first + end) / 2;
		if (input < mid) 
			//return binarysearch(input, first, mid - 1);
			end = mid - 1;
		else if (input > mid) 
			//return binarysearch(input, mid + 1, end);
			first = mid + 1;
		else //input == mid
		{
			printf("count : %d \n", count+1);
			return mid;
		}
		
		count=count++; 
	}
	
}
int main() 
{
	int i, input;
	int ans;
	int data[1000];
	for (i = 0; i < 1000; i++)
		data[i] = i + 1;

	printf("ã���� : ");
	scanf("%d", &input); 

	ans = binarysearch(input, 1, 999);
	printf("%d ��°�� �ֽ��ϴ�. \n", ans);

	system("pause");
	return 0;

}
	
		


/*
///////////////////////////////////////////////// ex4 �����˻�
void seqsearch(int *a, int no, int cnt)
{
	int i = 0;
	while (i < cnt && *(a+i) != no)
	i++;
	if (i < cnt) 
		printf("%d : ã�Ҿ��, %d��° ��ġ \n", no, i + 1);
	else 
		printf("�����.\n");
}
int main() {
	
	int *arr;
	int cnt, i, num;

	printf("�迭�� ���� : ");
	scanf("%d", &cnt);

	arr = (int*)malloc(sizeof(int)*cnt);

	for (i = 0; i < cnt; i++)
	{
		scanf("%d", arr + 1);
	}


	system("pause");
	return 0;
}
*/

