#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[1000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    // int a;
    // int b;
    // int tmp;
    
    
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    

    return 0;
}