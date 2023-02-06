#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    double M = 0;
    double * s;
    double avg, sum=0.0;

    scanf_s("%d", &n);
    s = (double*)malloc(sizeof(double) * n);

    for (int i = 0; i < n; i++) {
        scanf_s("%lf", &s[i]);
    }

    M = s[0];
    
    for (int i = 0; i < n; i++) {
        if (s[i] > M)
            M = s[i];
    }

    for (int j = 0; j < n; j++) {
        s[j] = s[j]/M * 100;
    }


    for (int i = 0; i < n; i++) {
        sum += s[i];
    }

    avg = sum / n;

    printf("%lf\n", avg);

    return 0;
}

