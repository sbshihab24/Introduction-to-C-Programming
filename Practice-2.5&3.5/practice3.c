//Multiple or not
#include<stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d %d",&a, &b);
    if(a%b==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No");
    }
    return 0;
}