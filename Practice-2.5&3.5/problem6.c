#include <stdio.h>

int main()
{                  

    {
        long long int n;
        scanf("%lld", &n);
         int mul = 1;
        for (int i = 1; i <= n; i++)
        {
            mul *= i;
        }
        printf("%lld\n", mul);
    }

    return 0;
}