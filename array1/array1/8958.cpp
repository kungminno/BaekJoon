#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    char quiz[80];
    int score, count;
    

    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        count = 0;
        score = 0;
        scanf("%s", quiz);

        int len = strlen(quiz);
        
        for (int i = 0; i < len; i++) {
            if (quiz[i] == 'O') {
                count++;
                score = score + count;
                
            }
            else if (quiz[i] == 'X') {
                count = 0;
            }
        }
        printf("%d\n", score);
    }

    return 0;
}

