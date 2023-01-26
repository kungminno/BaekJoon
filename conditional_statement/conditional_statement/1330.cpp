#include <stdio.h>

int main()
{
	int x;
	int y;

	scanf_s("%d %d", &x, &y);

	if (x > y)
		printf(">");
	else if (x < y)
		printf("<");
	else if (x == y)
		printf("==");

	return 0;

}

