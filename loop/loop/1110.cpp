#include <stdio.h>

int main()
{
	int origin= 0;
	int result= 0;
	int n=0,sem=0;
	int units_2=0, units=0, sum=0;

	scanf_s("%d", &origin);
	result = origin;

	while (sem!=1) {
		if (result < 10) {
			result = result*10 +result;
		}
		else {
			units = result % 10;
			sum = result/10 + units;
			units_2 = sum % 10;
			result = units * 10 + units_2;
		}
		n++;
		if (result == origin)
			sem = 1;
		else
			continue;		
	}

	printf("%d", n);
	return 0;

}
