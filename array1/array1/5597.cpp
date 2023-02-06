#include <stdio.h>
#include <stdlib.h>

int main()
{
    int non[29]={};
    int all[31]={};
    int s[2]={};
    int c = 0;

    for (int j = 1; j <= 28; j++) {
        scanf_s("%d", &non[j]);
    }


    for (int i = 1; i<= 30; i++) {
        for (int k = 1; k <= 28; k++) {
            if (non[k] == i)
                all[i] = non[k];
        }
    }
    
    for (int j = 1; j <= 30; j++) {
        if (all[j] == 0) {
            s[c] = j;
            c++;
        }
    }
    
    
    printf("%d\n%d", s[0], s[1]);

    return 0;
}

