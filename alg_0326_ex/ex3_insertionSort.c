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

// 현재 정렬된 배열은 i-1까지이므로 i-1번째부터 역순으로 조사한다.
// j 값은 음수가 아니어야 되고
// key 값보다 정렬된 배열에 있는 값이 크면 j번째를 j+1번째로 이동