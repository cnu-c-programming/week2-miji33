#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    
    if (N == 1) {
        printf("false");
    }
    else {
        int isPrimeN = 1;
        for (int i=2; i<N; i++) {
            if (N % i == 0) {
                isPrimeN = 0;
            }
        }

        if (isPrimeN) {
            printf("true");
        }else {
            printf("false");
        }
    }

    return 0;
}

