#include <stdio.h>

int main()
{
	int h;
	int m;
	int h_t;

	scanf_s("%d %d", &h, &m);
	scanf_s("%d", &h_t);

	if ((h > 0) && (m < 45)) {
		m = 60 - (45 - m);
		h = h - 1;
	}
	else if ((h == 0) && (m < 45)) {
		m = 60 - (45 - m);
		h = 23;
	}
	else
		m = m - 45;

	printf("%d %d", h, m);

	return 0;

}

