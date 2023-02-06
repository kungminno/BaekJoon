#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,v;
    int *array;
    int count = 0;

    scanf_s("%d", &n);
    array = (int *)malloc(sizeof(int) * n);

    for (int i=0; i < n; i++) {
        scanf_s("%d", &array[i]);
    }
    scanf_s("%d", &v);

    for (int j=0; j < n; j++) {
        if (array[j] == v)
            count++;
    }

    printf("%d", count);

    return 0;
}

