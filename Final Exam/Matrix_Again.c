#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M); 

    int arr[100][100]; 

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int j = 0; j < M; j++) {
        printf("%d ", arr[N - 1][j]);
    }
    printf("\n");

   
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i][M - 1]);
    }
    printf("\n");

    return 0;
}
