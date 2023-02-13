#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>


int han(int n);

int main()
{
    int n, result;


    scanf("%d", &n);


    result = han(n);

    printf("%d", result);

    return 0;
}

int han(int n)
{
    int result = 0;
    int p1=0, p10=0, p100=0;


    if ((n>0)&&(n<100)) {
        result = n;
    }
    else if ((n > 99) && (n <= 1000)) {
        result = 99;
        for (int i = 100; i <= n; i++) {
            p1 = i % 10;
            p10 = (i / 10) % 10;
            p100 = i / 100;
            if ((p100 - p10) == (p10 - p1)) {
                result++;
            }
        }

    }

    return result;
}