# include <stdio.h>
# define SWAP(x, y, temp) ( (temp)=(x), (x)=(y), (y)=(temp) )
# pragma warning(disable: 4996)

void selection_sort(int *list, int element_num) {
	int i, j, last, temp;

	for (i = 0; i < element_num - 1; i++) {
		last = i;

		for (j = i + 1; j < element_num; j++) {
			if (list[j] < list[last])
				last = j;
		}

		if (i != last) 	{
			SWAP(list[i], list[last], temp);
		}
	}

	for (i = 0; i < element_num; i++) {
		printf("%d\t", list[i]);
	}
}

void main() {

	int num;
	printf("size of list : ");
	scanf("%d", &num);
	int *list;
	list = (int*)malloc(sizeof(int)*num);

	printf(" element : ");
	for (int i = 0; i < num; i++){
		scanf("%d", &*(list + i));
	}

	printf("selection sort result : ");
	selection_sort(list, num);

	system("pause");

}