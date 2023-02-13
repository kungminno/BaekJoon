#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>


long long sum(int* a, int n);

int main()
{
    int n, result;
    int* a;

    scanf("%d", &n);

    a = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    result = sum(a, n);

    printf("%d", result);

    return 0;
}

long long sum(int* a, int n)
{
    long long result = 0;
    
    for (int i = 0; i < n; i++) {
        result += a[i];
    }

    return result;
}