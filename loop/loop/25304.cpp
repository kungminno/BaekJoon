#include <stdio.h>
#include <stdlib.h>

int main()
{
	int price=0,total=0;
	int n = 0;
	int* a, * b;
	int count = 0;

	scanf_s("%d", &price);
	scanf_s("%d", &n);

	a = (int *)malloc(sizeof(int) * n);
	b = (int*)malloc(sizeof(int) * n);

	while (count < n) {

		scanf_s("%d %d", &a[count], &b[count]);
		total = total + a[count] * b[count];
		count++;
	}

	if (total == price)
		printf("Yes");
	else
		printf("No");
	
	return 0;

}
