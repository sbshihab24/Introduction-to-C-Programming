#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int few_days[n]; 

    for (int i = 0; i < n; i++) {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        few_days[i] = d - (m1 * d) / (m1 + m2); 
    }

    
    for (int i = 0; i < n; i++) {
        printf("%d\n", few_days[i]);
    }

    return 0;
}
