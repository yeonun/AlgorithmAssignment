# include <stdio.h>
# define SWAP(x, y, temp) ( (temp)=(x), (x)=(y), (y)=(temp) )
# pragma warning(disable: 4996)


void bubble_sort(int *list, int element_num) {
	int i, j, temp;

	for (i = element_num - 1; i > 0; i--) {
	
		for (j = 0; j < i; j++) {
			if (list[j] > list[j + 1]) {
				SWAP(list[j], list[j+1], temp);
			}
		}
	}

	for (i = 0; i < element_num; i++) 
	{
		printf("%d\t", list[i]);
	}
}

void main() {

	int num;

	printf("size of list : ");
	scanf("%d", &num);

	int *list;
	list = (int*)malloc(sizeof(int)*num);

	printf("element of list : ");

	for (int i = 0; i < num; i++) {
		scanf("%d", &*(list + i));
	}

	printf("bubble sort result : ");

	bubble_sort(list, num);

	system("pause");

}