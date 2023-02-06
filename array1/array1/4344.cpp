#include <stdio.h>
#include <string.h>

int main()
{

    int C;
    int N[1000];
    int count;
    double sum, avg,p;


    scanf_s("%d", &C);

    for (int i = 0; i < C; i++) {
        count = 0;
        sum = 0.0;
        avg = 0.0;
        p = 0.0;

        int num;
        scanf_s("%d", &num);

        for (int i = 0; i < num; i++) {
            scanf_s("%d", &N[i]);
        }

        for (int j = 0; j < num; j++) {
            sum = sum+ N[j] + 0.0;
            
        }
        
        avg = sum / (double)num;

        for (int k = 0; k < num; k++) {
            if (N[k] > avg) {
                count++;
            }
        }
        p = (double)count / (double)num;

        printf("%.3lf%%\n", p*100);
    }

    return 0;
}

