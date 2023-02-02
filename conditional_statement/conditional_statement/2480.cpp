#include <stdio.h>

int main()
{
	int first,second,third;
	int big;
	int reward;
	

	scanf_s("%d %d %d", &first, &second, &third);


	if ((first == second) && (second == third)) {
		reward= 10000+ first*1000;
	}
	else if ((first == second) && (second != third)) {
		reward = 1000 + first * 100;
	}
	else if ((first == third) && (first != second)) {
		reward = 1000 + first * 100;
	}
	else if ((second == third) && (second != first)) {
		reward = 1000 + second * 100;
	}
	else if ((first != second) && (second != third) && (first != third)) {
		if ((first > second) && (first > third))
			big = first;
		else if ((second > first)&&(second > third))
			big = second;
		else if ((third > first) && (third > second))
			big = third;
		reward = big * 100;
	}
	
	printf("%d", reward);

	return 0;

}


