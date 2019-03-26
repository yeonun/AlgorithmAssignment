# include <stdio.h>
# pragma warning(disable: 4996)


void insertion_sort(int *list, int element_num) {
	int i, loc, newitem;

	for (i = 1; i < element_num; i++) {
		newitem = list[i];

		for (loc = i - 1; loc >= 0 && list[loc] > newitem; loc--) {
			list[loc + 1] = list[loc]; 
		}
		list[loc + 1] = newitem;
	}

	for (i = 0; i < element_num; i++){
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
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &*(list + i));
	}

	printf("insertion sort result : ");
	insertion_sort(list, num);

	system("pause");

}

// ���� ���ĵ� �迭�� i-1�����̹Ƿ� i-1��°���� �������� �����Ѵ�.
// j ���� ������ �ƴϾ�� �ǰ�
// key ������ ���ĵ� �迭�� �ִ� ���� ũ�� j��°�� j+1��°�� �̵�