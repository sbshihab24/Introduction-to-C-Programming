#include <stdio.h>
int main()
{
    int n;
    
    scanf("%d", &n);
    int v;
    int sum_pos = 0 ;
    int sum_neg = 0 ;
    scanf("%d ", &v);
    for (int i = 1; i <= n; i++)
    {
        if(v>0){
            sum_pos += v;
            printf("%d",sum_pos);
        }
        else if (v < 0) {
            sum_neg += v;
            printf("%d",sum_neg);

    }

    return 0;
}
}