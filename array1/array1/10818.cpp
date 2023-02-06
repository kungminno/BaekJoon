#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, v;
    int* array;
    int s, b;

    scanf_s("%d", &n);
    array = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf_s("%d", &array[i]);
    }
    
    s = array[0];
    for (int j = 0; j < n; j++) {
        if (array[j] < s)
            s = array[j];
    }

    b = array[0];
    for (int j = 0; j < n; j++) {
        if (array[j] > b)
            b = array[j];
    }

    printf("%d %d", s,b);

    return 0;
}

