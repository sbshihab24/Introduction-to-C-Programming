#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N;
        scanf("%d", &N); 

        int a[1000], b[1000], c[1000];

        
        for (int i = 0; i < N; i++) {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }

        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (b[j] > b[j + 1]) {
                    int temp = b[j];
                   b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }

       
        for (int i = 0; i < N; i++) {
            c[i] = abs(a[i] - b[i]);
        }

        for (int i = 0; i < N; i++) {
            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}
