#include<stdio.h>
int main()
{
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d\n", j);
        }
    }
    
    return 0;
}