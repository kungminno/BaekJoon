#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	int n = 0;

	scanf_s("%d", &n);
	for (int i=0; i<n; i++){

		scanf_s("%d %d", &a, &b);
		printf("%d\n",a+b);

	}


	return 0;

}
