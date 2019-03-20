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
	printf_s("시그마 어쩌고 답 : %d \n", ans);
	
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

	printf("세 정수의 중앙값을 구합니다. \n");
	printf("a의 값 :");
	scanf("%d", &a);
	printf("b의 값 :");
	scanf("%d", &b);
	printf("c의 값 :");
	scanf("%d", &c);
	
	printf("중앙값은 %d입니다.\n", med3(a, b, c));

	system("pause");
	return 0;
}
*/
///////////////////////////////////////////////// ex3 이진검색

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

	printf("찾을값 : ");
	scanf("%d", &input); 

	ans = binarysearch(input, 1, 999);
	printf("%d 번째에 있습니다. \n", ans);

	system("pause");
	return 0;

}
	
		


/*
///////////////////////////////////////////////// ex4 순차검색
void seqsearch(int *a, int no, int cnt)
{
	int i = 0;
	while (i < cnt && *(a+i) != no)
	i++;
	if (i < cnt) 
		printf("%d : 찾았어요, %d번째 위치 \n", no, i + 1);
	else 
		printf("없어요.\n");
}
int main() {
	
	int *arr;
	int cnt, i, num;

	printf("배열의 길이 : ");
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

