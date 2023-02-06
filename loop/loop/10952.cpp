#include <stdio.h>

int main()
{
	int a=1 , b=1;

	while (true) {

		scanf_s("%d %d", &a, &b);
		if ((a == 0) && (b == 0))
			break;
		else
			printf("%d\n", a + b);
	}
	return 0;

}
