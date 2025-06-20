#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print numbers from i to 1
        for (int j = i; j >= 1; j--) {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}
