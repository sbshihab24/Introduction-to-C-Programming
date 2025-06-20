#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        unsigned long long m;
        scanf("%llu",&m);
        
        int a, b, c;
        scanf(" %d %d %d", &a, &b, &c);

        unsigned long long mul = (unsigned long long)a * b * c;

        if (mul == 0)
         {
            if (m == 0)
             {
                printf("0\n");
            } 
            else {
                printf("-1\n");
            }
        } 
        else if (m % mul == 0) 
        {
            printf("%llu\n", m / mul);
        } 
        else {
            printf("-1\n");
        }
    }

    return 0;
}
