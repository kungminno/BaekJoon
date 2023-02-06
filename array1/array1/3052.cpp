#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input[10] = {};
    int mod[10] = {};
    int n[42]={};
    int c = 0;
    //배열 -1로 초기화
    for (int i = 0; i < 42; i++) {
        n[i] = -1;
    }

    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &input[i]);
    }


    for (int i = 0; i < 10; i++) {
        mod[i] = input[i] % 42;
    }
    //나머지 값으로 나오는 수들을 n의 각 숫자에 해당하는 인덱스에 저장
    for (int j = 0; j < 10; j++) {
        for (int k = 0; k < 10 - j; k++) {
            if (mod[k + j] == mod[j])
                n[mod[j]]= mod[j];
        }
    }
    // -1 2 -1 -1 -1 .... 39 40 41 이런식으로 저장된 인덱스에서 -1제외 숫자의 수 계산
    for (int i = 0; i < 42; i++) {
        if (n[i] != -1)
            c++;
    }

    printf("%d\n", c);

    return 0;
}

